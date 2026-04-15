#include "showhistorywindow.h"
#include "ui_showhistorywindow.h"
#include "fullreportwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

ShowHistoryWindow::ShowHistoryWindow(QMainWindow *parent)
    : QDialog(parent)
    , ui(new Ui::ShowHistoryWindow),
    mainWindow(parent)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());

    connect(ui->ButtonTodayReport, SIGNAL(clicked()), this, SLOT(OpenReportWindow()));
    connect(ui->ButtonWeekReport, SIGNAL(clicked()), this, SLOT(OpenReportWindow()));
    connect(ui->ButtonMonthReport, SIGNAL(clicked()), this, SLOT(OpenReportWindow()));
    connect(ui->ButtonYearReport, SIGNAL(clicked()), this, SLOT(OpenReportWindow()));
    connect(ui->ButtonCustomReport, SIGNAL(clicked()), this, SLOT(OpenReportWindow()));

    TodayProfit = ui->TodayProfit;
    WeekProfit = ui->WeekProfit;
    MonthProfit= ui->MonthProfit;
    YearProfit= ui->YearProfit;
    CustomProfit= ui->CustomProfit;

    TodayIncome= ui->TodayIncome;
    WeekIncome= ui->WeekIncome;
    MonthIncome= ui->MonthIncome;
    YearIncome= ui->YearIncome;
    CustomIncome= ui->CustomIncome;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mybudget.db"); // Имя файла базы данных

    UpdateInformations();

}

ShowHistoryWindow::~ShowHistoryWindow()
{
    delete ui;
}

void ShowHistoryWindow::UpdateInformations() {
    QSqlDatabase db = QSqlDatabase::database(); // Получаем соединение с базой данных

    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return;
    }

    // Получаем текущую дату
    QDate currentDate = QDate::currentDate();

    // Формируем дату для запросов в формате YYYY-MM-DD
    QString todayDateString = currentDate.toString("dd.MM.yyyy");
    QString weekStartDateString = currentDate.addDays(-currentDate.dayOfWeek() + 1).toString("dd.MM.yyyy"); // Понедельник текущей недели
    QString monthStartDateString = QDate(currentDate.year(), currentDate.month(), 1).toString("dd.MM.yyyy"); // Первое число текущего месяца
    QString yearStartDateString = QDate(currentDate.year(), 1, 1).toString("dd.MM.yyyy"); // Первое число текущего года
    // Получаем и устанавливаем информацию о доходах и расходах за разные периоды
    ui->TodayProfit->setText(calculateProfit(todayDateString, todayDateString));
    ui->WeekProfit->setText(calculateProfit(weekStartDateString, todayDateString));
    ui->MonthProfit->setText(calculateProfit(monthStartDateString, todayDateString));
    ui->YearProfit->setText(calculateProfit(yearStartDateString, todayDateString));

    ui->TodayIncome->setText(calculateIncome(todayDateString, todayDateString));
    ui->WeekIncome->setText(calculateIncome(weekStartDateString, todayDateString));
    ui->MonthIncome->setText(calculateIncome(monthStartDateString, todayDateString));
    ui->YearIncome->setText(calculateIncome(yearStartDateString, todayDateString));

}

QString ShowHistoryWindow::calculateProfit(const QString &startDateStr, const QString &endDateStr) {
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return "0";
    }

    // Преобразуем даты из формата dd.MM.yyyy в формат yyyy-MM-dd
    QDate startDate = QDate::fromString(startDateStr, "dd.MM.yyyy");
    QDate endDate = QDate::fromString(endDateStr, "dd.MM.yyyy");

    if (!startDate.isValid() || !endDate.isValid()) {
        qDebug() << "Ошибка: Некорректный формат даты!";
        return "0";
    }

    QString startDateFormatted = startDate.toString("yyyy-MM-dd");
    QString endDateFormatted = endDate.toString("yyyy-MM-dd");

    QSqlQuery query;
    query.prepare("SELECT SUM(amount) FROM transactions WHERE date >= :startDate AND date <= :endDate AND type = 'Доход'");
    query.bindValue(":startDate", startDateFormatted);
    query.bindValue(":endDate", endDateFormatted);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
        return "0";
    }

    if (query.next()) {
        double totalAmount = query.value(0).toDouble();
        return QString::number(totalAmount, 'f', 2);
    } else {
        return "0";
    }
}

QString ShowHistoryWindow::calculateIncome(const QString &startDateStr, const QString &endDateStr) {
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Ошибка: База данных не открыта!";
        return "0";
    }

    // Преобразуем даты из формата dd.MM.yyyy в формат yyyy-MM-dd
    QDate startDate = QDate::fromString(startDateStr, "dd.MM.yyyy");
    QDate endDate = QDate::fromString(endDateStr, "dd.MM.yyyy");

    if (!startDate.isValid() || !endDate.isValid()) {
        qDebug() << "Ошибка: Некорректный формат даты!";
        return "0";
    }

    QString startDateFormatted = startDate.toString("yyyy-MM-dd");
    QString endDateFormatted = endDate.toString("yyyy-MM-dd");

    QSqlQuery query;
    query.prepare("SELECT SUM(ABS(amount)) FROM transactions WHERE date >= :startDate AND date <= :endDate AND type = 'Расход'");
    query.bindValue(":startDate", startDateFormatted);
    query.bindValue(":endDate", endDateFormatted);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса:" << query.lastError().text();
        return "0";
    }

    if (query.next()) {
        double totalAmount = query.value(0).toDouble();
        return QString::number(totalAmount, 'f', 2);
    } else {
        return "0";
    }
}
void ShowHistoryWindow::OpenReportWindow(){
    FullReportWindow *window = new FullReportWindow();
    window->setWindowTitle("Подробный отчет");
    QString text = ui->myhistory->tabText(ui->myhistory->currentIndex());
    QString today = QDate::currentDate().toString("dd.MM.yyyy");
    if (text == "Сегодня"){
        window->UpdateTableView(today, today);
    }
    else if (text == "Неделя"){
        window->UpdateTableView(QDate::currentDate().addDays(-(QDate::currentDate().dayOfWeek()) + 1).toString("dd.MM.yyyy"), today);
    }
    else if (text == "Месяц"){
        window->UpdateTableView(QDate(QDate::currentDate().year(), QDate::currentDate().month(), 1).toString("dd.MM.yyyy"), today);
    }
    else if (text == "Год"){
        window->UpdateTableView(QDate(QDate::currentDate().year(), 1, 1).toString("dd.MM.yyyy"), today);
    }
    else if (text == "..."){
        window->UpdateTableView(ui->StartDay->text(), ui->EndDay->text());
    }

    window->setModal(true);

    this->hide();
    window->exec();
    this->show();
}

void ShowHistoryWindow::on_CalculateSum_clicked()
{
    CustomProfit->setText(calculateProfit(ui->StartDay->text(), ui->EndDay->text()));
    CustomIncome->setText(calculateIncome(ui->StartDay->text(), ui->EndDay->text()));
    qDebug() << "Начальная дата (calculateProfit):"<<ui->StartDay->text();
    qDebug() << "Конечная дата (calculateProfit):" <<ui->EndDay->text();
}

