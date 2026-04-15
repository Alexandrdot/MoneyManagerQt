#include "addprofitinfo.h"
#include "ui_addprofitinfo.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

AddProfitInfo::AddProfitInfo(QMainWindow *parent)
    : QDialog(parent)
    , ui(new Ui::AddProfitInfo),
    mainWindow(parent)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    DatePILabel = ui->DatePILabel;
    NameCategoryLabel = ui->NameCategoryLabel;
    NamePILabel = ui->NamePILabel;
    NameActLabel = ui->NameActLabel;
    CategoryBox = ui->CategoryBox;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mybudget.db"); // Имя файла базы данных

    if (!db.open()) {
        qDebug() << "Ошибка открытия базы данных:" << db.lastError().text();
    }

    QSqlQuery query;

    if (!query.exec("CREATE TABLE IF NOT EXISTS transactions ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "date DATE NOT NULL,"
                    "amount REAL NOT NULL,"
                    "type TEXT NOT NULL,"
                    "category TEXT"
                    ")")) {
        qDebug() << "Ошибка создания таблицы transactions:" << query.lastError().text();
        db.close();
    }
}

AddProfitInfo::~AddProfitInfo(){
    delete ui;
}

void displayDatabaseContent() {
    QSqlDatabase db = QSqlDatabase::database(); // Получаем существующее соединение
    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return;
    }

    QSqlQuery query("SELECT * FROM transactions ORDER BY date, type"); // Выбираем все из таблицы и сортируем

    qDebug() << "Содержимое таблицы transactions:";
    qDebug() << "--------------------------------------------------------------------";
    qDebug() << "| ID | Date       | Amount | Type    | Category           |";
    qDebug() << "--------------------------------------------------------------------";

    while (query.next()) {
        int id = query.value("id").toInt();
        QString date = query.value("date").toString();
        double amount = query.value("amount").toDouble();
        QString type = query.value("type").toString();
        QString category = query.value("category").toString();

        qDebug() << QString("| %1 | %2 | %3 | %4 | %5 |")
                        .arg(id, 4) // ID занимает 4 символа
                        .arg(date, 10) // Date занимает 10 символов
                        .arg(amount, 6, 'f', 2) // Amount занимает 6 символов, 2 знака после запятой
                        .arg(type, 7) // Type занимает 7 символов
                        .arg(category.isEmpty() ? "-" : category, 20); // Category занимает 20 символов, если пустая, то "-"
    }
    qDebug() << "--------------------------------------------------------------------";
}

void AddProfitInfo::on_buttonBox_accepted()
{
    QString date = ui->DateBox->text();
    QString sumText;

    if(ui->NameActLabel->text() == "Добавление дохода"){
        sumText = ui->AddSumLabel->text();
        sumText.replace(",", ".");
        addTransaction(date, sumText.toDouble(), "Доход", "");
    }
    else{
        sumText = ui->AddSumLabel->text();
        sumText.replace(",", ".");
        QString category = ui->CategoryBox->currentText();
        addTransaction(date, -sumText.toDouble(), "Расход", category);
    }
    mainWindow->show();
    this->close();
}

void AddProfitInfo::on_buttonBox_rejected()
{
    displayDatabaseContent();
    mainWindow->show();
    this->close();
}

void AddProfitInfo::addTransaction(const QString &date, double amount, const QString &type, const QString &category)
{
    QSqlDatabase db = QSqlDatabase::database(); // соединение с бд

    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return;
    }
    QSqlQuery query;

    query.prepare("INSERT INTO transactions (date, amount, type, category) "
                  "VALUES (:date, :amount, :type, :category)");
    query.bindValue(":date", QDateTime::fromString(date, "dd.MM.yyyy").toString("yyyy-MM-dd"));
    query.bindValue(":amount", amount);
    query.bindValue(":type", type); // Тип транзакции
    query.bindValue(":category", category);

    // Выполняем запрос
    if (!query.exec()) {
        qDebug() << "Ошибка добавления транзакции:" << query.lastError().text();
    } else {
        qDebug() << "Транзакция успешно добавлена!";
    }
    db.close();
}
