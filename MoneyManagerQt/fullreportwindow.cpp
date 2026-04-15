#include "fullreportwindow.h"
#include "ui_fullreportwindow.h"
#include "editprofitinfo.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDate>
#include <QString>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlTableModel>

FullReportWindow::FullReportWindow(ShowHistoryWindow *parent)
    : QDialog(parent)
    , ui(new Ui::FullReportWindow),
    historyWindow(parent)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
}

FullReportWindow::~FullReportWindow()
{
    delete ui;
}

void FullReportWindow::UpdateTableView(const QString &startDate, const QString &endDate) {
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return;
    }

    // Преобразуем даты из формата dd.MM.yyyy в формат yyyy-MM-dd
    QString startDateStr = startDate; // Сохраняем исходные строки
    QString endDateStr = endDate;

    QDate _startDate = QDate::fromString(startDateStr, "dd.MM.yyyy");
    QDate _endDate = QDate::fromString(endDateStr, "dd.MM.yyyy");

    if (!_startDate.isValid() || !_endDate.isValid()) {
        qDebug() << "Ошибка: Некорректный формат даты!";
        return;
    }

    QString startDateFormatted = _startDate.toString("yyyy-MM-dd");
    QString endDateFormatted = _endDate.toString("yyyy-MM-dd");

    // Создаем модель таблицы
    QSqlTableModel *model = new QSqlTableModel(this, db);
    model->setTable("transactions"); // Указываем имя таблицы

    // Устанавливаем фильтр
    QString filter = "date >= '" + startDateFormatted + "' AND date <= '" + endDateFormatted + "'";
    model->setFilter(filter);

    // Устанавливаем стратегию редактирования
    model->setEditStrategy(QSqlTableModel::OnManualSubmit); // Важно!

    // Загружаем данные в модель
    model->select();

    if (model->lastError().isValid()) {
        qDebug() << "Ошибка при выборке данных:" << model->lastError().text();
        delete model; // Освобождаем память в случае ошибки
        return;
    }

    // Устанавливаем модель в TableView
    ui->tableView->setModel(model);

    // Настраиваем заголовки
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Amount"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Category"));

    // Растягиваем столбцы по содержимому
    ui->tableView->resizeColumnsToContents();
}

void FullReportWindow::DeleteRow()
{

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return;
    }

    // Получаем модель из TableView
    QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());
    if (!model) {
        qDebug() << "Ошибка: Не удалось получить модель из TableView!";
        return;
    }

    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    QModelIndexList selectedRows = selectionModel->selectedRows();


    if (selectedRows.isEmpty()) {
        //QMessageBox::warning(this, "Ошибка", "Выберите строку для удаления.");
        return;
    }
    //QMessageBox::StandardButton reply;


    QModelIndex index = selectedRows.first();
    int row = index.row();

    model->removeRow(row); //Удалить строку
    model->submitAll();
}

void FullReportWindow::on_ButtonCancel_clicked()
{
    ShowHistoryWindow *window = new ShowHistoryWindow();
    window->show();
    window->close();
    this->close();
}

void FullReportWindow::on_ButtonDelete_clicked()
{
    DeleteRow();
}

void FullReportWindow::on_ButtonSet_clicked()
{
    QSqlTableModel *model = qobject_cast<QSqlTableModel*>(ui->tableView->model());
    if (!model) {
        //QMessageBox::critical(this, "Ошибка", "Модель таблицы не найдена.");
        return;
    }

    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    QModelIndexList selectedRows = selectionModel->selectedRows();

    if (selectedRows.isEmpty()) {
        //QMessageBox::warning(this, "Внимание", "Выберите строку для редактирования.");
        return;
    }

    QModelIndex index = selectedRows.first();
    int row = index.row();
    int id = model->index(row, 0).data().toInt(); // ID записи

    EditProfitInfo *editWindow = new EditProfitInfo(id, historyWindow);
    connect(editWindow, &QDialog::accepted, [this]() {
        UpdateTableView(StartDate, EndDate); // Обновляем таблицу после сохранения
    });

    editWindow->exec();
}
