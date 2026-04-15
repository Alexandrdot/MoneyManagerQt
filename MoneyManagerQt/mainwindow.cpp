#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addprofitinfo.h"
#include "showhistorywindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonIncome_clicked()
{
    AddProfitInfo *window = new AddProfitInfo(this);
    window->setWindowTitle("Добавить доход");
    window->setModal(true);

    window->CategoryBox->setVisible(false);
    window->NameCategoryLabel->setVisible(false);
    this->hide();
    window->exec();
    this->show();
    delete window;
}

void MainWindow::on_ButtonExpense_clicked()
{
    AddProfitInfo *window = new AddProfitInfo(this);

    window->CategoryBox->setVisible(true);
    window->NameCategoryLabel->setVisible(true);

    window->setWindowTitle("Добавить расход");
    window->DatePILabel->setText("Дата расхода");
    window->NamePILabel->setText("Сумма расхода");
    window->NameActLabel->setText("Добавление расхода");
    QStringList categories = {"Жилье", "Транспорт", "Питание", "Здоровье", "Личные расходы", "Долги", "Связь и интернет", "Развлечения и досуг", "Образование", "Подарки и благотворительность"};
    window->CategoryBox->addItems(categories);

    window->setModal(true);
    this->hide();
    window->exec();
    this->show();
    delete window;
}

void MainWindow::on_ButtonHistory_clicked()
{
    ShowHistoryWindow *window = new ShowHistoryWindow(this);
    window->setWindowTitle("История");
    window->setModal(true);

    this->hide();
    window->exec();
    this->show();
    delete window;
}

