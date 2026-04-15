/********************************************************************************
** Form generated from reading UI file 'fullreportwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLREPORTWINDOW_H
#define UI_FULLREPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FullReportWindow
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonCancel;
    QPushButton *ButtonSet;
    QPushButton *ButtonDelete;

    void setupUi(QDialog *FullReportWindow)
    {
        if (FullReportWindow->objectName().isEmpty())
            FullReportWindow->setObjectName("FullReportWindow");
        FullReportWindow->resize(436, 381);
        tableView = new QTableView(FullReportWindow);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 40, 331, 291));
        tableView->setEditTriggers(QAbstractItemView::EditTrigger::AnyKeyPressed|QAbstractItemView::EditTrigger::DoubleClicked);
        tableView->setAlternatingRowColors(false);
        layoutWidget = new QWidget(FullReportWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 330, 331, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonCancel = new QPushButton(layoutWidget);
        ButtonCancel->setObjectName("ButtonCancel");
        ButtonCancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(152, 125, 116);\n"
"    color: white;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #000000;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 165, 146);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(106, 86, 78);\n"
"}"));

        horizontalLayout->addWidget(ButtonCancel);

        ButtonSet = new QPushButton(layoutWidget);
        ButtonSet->setObjectName("ButtonSet");
        ButtonSet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(141, 127, 0);\n"
"    color: white;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #000000;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:rgb(220, 192, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(100, 91, 0);\n"
"}"));

        horizontalLayout->addWidget(ButtonSet);

        ButtonDelete = new QPushButton(layoutWidget);
        ButtonDelete->setObjectName("ButtonDelete");
        ButtonDelete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(199, 19, 0);\n"
"    color: white;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #000000;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(255, 58, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(129, 6, 0);}"));

        horizontalLayout->addWidget(ButtonDelete);


        retranslateUi(FullReportWindow);

        QMetaObject::connectSlotsByName(FullReportWindow);
    } // setupUi

    void retranslateUi(QDialog *FullReportWindow)
    {
        FullReportWindow->setWindowTitle(QCoreApplication::translate("FullReportWindow", "Dialog", nullptr));
        ButtonCancel->setText(QCoreApplication::translate("FullReportWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        ButtonSet->setText(QCoreApplication::translate("FullReportWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        ButtonDelete->setText(QCoreApplication::translate("FullReportWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FullReportWindow: public Ui_FullReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLREPORTWINDOW_H
