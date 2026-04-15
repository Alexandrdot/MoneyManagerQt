#ifndef ADDPROFITINFO_H
#define ADDPROFITINFO_H

#include <QDialog>
#include <QLabel>
#include <QComboBox>
#include <QMainWindow>

namespace Ui {
class AddProfitInfo;
}

class AddProfitInfo : public QDialog
{
    Q_OBJECT

public:
    explicit AddProfitInfo(QMainWindow *parent = nullptr);
    ~AddProfitInfo();
    void addTransaction(const QString &date, double amount, const QString &type, const QString &category);
    QLabel *DatePILabel;
    QLabel *NameCategoryLabel;
    QLabel *NamePILabel;
    QLabel *NameActLabel;
    QComboBox *CategoryBox;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddProfitInfo *ui;
    QMainWindow *mainWindow;
};

#endif // ADDPROFITINFO_H
