#ifndef EDITPROFITINFO_H
#define EDITPROFITINFO_H

#include <QDialog>
#include <QMainWindow>

namespace Ui {
class EditProfitInfo;
}

class EditProfitInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EditProfitInfo(int transactionId, QWidget *parent = nullptr);
    ~EditProfitInfo();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::EditProfitInfo *ui;
    int transactionId;
    QMainWindow *mainWindow;

    bool validateInput();
};

#endif // EDITPROFITINFO_H
