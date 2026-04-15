#ifndef SHOWHISTORYWINDOW_H
#define SHOWHISTORYWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QMainWindow>

namespace Ui {
class ShowHistoryWindow;
}

class ShowHistoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowHistoryWindow(QMainWindow *parent = nullptr);
    ~ShowHistoryWindow();

    void UpdateInformations();
    QString calculateIncome(const QString &startDate, const QString &endDate);
    QString calculateProfit(const QString &startDate, const QString &endDate);

    QLabel *TodayProfit;
    QLabel *WeekProfit;
    QLabel *MonthProfit;
    QLabel *YearProfit;
    QLabel *CustomProfit;

    QLabel *TodayIncome;
    QLabel *WeekIncome;
    QLabel *MonthIncome;
    QLabel *YearIncome;
    QLabel *CustomIncome;


private:
    Ui::ShowHistoryWindow *ui;
    QMainWindow *mainWindow;

private slots:
    void OpenReportWindow();
    void on_CalculateSum_clicked();
};

#endif // SHOWHISTORYWINDOW_H
