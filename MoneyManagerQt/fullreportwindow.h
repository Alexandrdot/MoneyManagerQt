#ifndef FULLREPORTWINDOW_H
#define FULLREPORTWINDOW_H

#include <QDialog>
#include <showhistorywindow.h>

namespace Ui {
class FullReportWindow;
}

class FullReportWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FullReportWindow(ShowHistoryWindow *parent = nullptr);
    ~FullReportWindow();
    QString StartDate;
    QString EndDate;

    void DeleteRow();
    void UpdateTableView(const QString &startDate, const QString &endDate);

private slots:


    void on_ButtonCancel_clicked();

    void on_ButtonDelete_clicked();

    void on_ButtonSet_clicked();

private:
    Ui::FullReportWindow *ui;
     ShowHistoryWindow *historyWindow;
};

#endif // FULLREPORTWINDOW_H
