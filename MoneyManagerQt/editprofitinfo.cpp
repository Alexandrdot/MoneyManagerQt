#include "editprofitinfo.h"
#include "ui_editprofitinfo.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>

EditProfitInfo::EditProfitInfo(int id, QWidget *parent)
    : QDialog(parent), ui(new Ui::EditProfitInfo), transactionId(id), mainWindow(nullptr)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    qDebug() << "Начинаем создание EditProfitInfo с ID:" << id;
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT * FROM transactions WHERE id = ?");
    query.addBindValue(transactionId);

    if (!query.exec() || !query.next()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось загрузить данные для редактирования.");
        this->close();
        return;
    }

    QDate date = query.value("date").toDate();
    double amount = query.value("amount").toDouble();
    QString type = query.value("type").toString();
    QString category = query.value("category").toString();

    ui->DateBox->setDate(date);
    ui->CategoryBox->setCurrentText(category);
    ui->AddSumLabel->setValue(qAbs(amount));
    if (type == "Доход") {
        ui->NameActLabel->setText("Редактирование дохода");
        ui->CategoryBox->setEnabled(false); // Категория не нужна для дохода
    } else {
        ui->NameActLabel->setText("Редактирование расхода");
        ui->CategoryBox->setEnabled(true);
    }
}

EditProfitInfo::~EditProfitInfo()
{
    delete ui;
}

void EditProfitInfo::on_buttonBox_accepted()
{
    if (!validateInput())
        return;

    QString date = ui->DateBox->text();
    double amount = ui->AddSumLabel->text().replace(",", ".").toDouble();
    QString category = ui->CategoryBox->currentText();
    QString type = ui->NameActLabel->text().contains("доход") ? "Доход" : "Расход";

    if (type == "Доход")
        category = ""; // У дохода нет категории
    else
        amount = -amount; // Расход хранится как отрицательное число

    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);
    query.prepare("UPDATE transactions SET date = ?, amount = ?, type = ?, category = ? WHERE id = ?");
    query.addBindValue(QDateTime::fromString(date, "dd.MM.yyyy").toString("yyyy-MM-dd"));
    query.addBindValue(amount);
    query.addBindValue(type);
    query.addBindValue(category);
    query.addBindValue(transactionId);

    if (!query.exec()) {
    } else {
        //QMessageBox::information(this, "Успех", "Запись успешно обновлена.");
        this->accept();
    }
}

void EditProfitInfo::on_buttonBox_rejected()
{
    this->reject();
}

bool EditProfitInfo::validateInput()
{
    bool ok;
    ui->AddSumLabel->text().replace(",", ".").toDouble(&ok);
    if (!ok) {
        //QMessageBox::warning(this, "Ошибка", "Некорректная сумма.");
        return false;
    }

    if (ui->NameActLabel->text().contains("расход") && ui->CategoryBox->currentText().isEmpty()) {
        //QMessageBox::warning(this, "Ошибка", "Выберите категорию для расхода.");
        return false;
    }

    QDate::fromString(ui->DateBox->text(), "dd.MM.yyyy");
    if (!QDate::fromString(ui->DateBox->text(), "dd.MM.yyyy").isValid()) {
        //QMessageBox::warning(this, "Ошибка", "Некорректная дата.");
        return false;
    }

    return true;
}
