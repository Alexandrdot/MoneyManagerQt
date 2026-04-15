/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *LabelName;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *LabelAction;
    QPushButton *ButtonIncome;
    QPushButton *ButtonExpense;
    QPushButton *ButtonHistory;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(352, 261);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        LabelName = new QLabel(centralwidget);
        LabelName->setObjectName("LabelName");
        LabelName->setGeometry(QRect(40, 10, 281, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        LabelName->setFont(font);
        LabelName->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;\n"
"color:white;\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: black;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        LabelName->setFrameShape(QFrame::Shape::Box);
        LabelName->setFrameShadow(QFrame::Shadow::Plain);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 60, 191, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LabelAction = new QLabel(widget);
        LabelAction->setObjectName("LabelAction");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LabelAction->sizePolicy().hasHeightForWidth());
        LabelAction->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        LabelAction->setFont(font1);
        LabelAction->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        LabelAction->setAutoFillBackground(false);
        LabelAction->setStyleSheet(QString::fromUtf8("color:rgb(188, 191, 191);\n"
"qproperty-alignment: AlignCenter;"));
        LabelAction->setFrameShape(QFrame::Shape::NoFrame);
        LabelAction->setScaledContents(false);

        verticalLayout->addWidget(LabelAction);

        ButtonIncome = new QPushButton(widget);
        ButtonIncome->setObjectName("ButtonIncome");
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        ButtonIncome->setFont(font2);
        ButtonIncome->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(0, 183, 15);\n"
"    color: white;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #000000;\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(0, 200, 20);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(0, 150, 10);\n"
"}"));

        verticalLayout->addWidget(ButtonIncome);

        ButtonExpense = new QPushButton(widget);
        ButtonExpense->setObjectName("ButtonExpense");
        ButtonExpense->setFont(font2);
        ButtonExpense->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(ButtonExpense);

        ButtonHistory = new QPushButton(widget);
        ButtonHistory->setObjectName("ButtonHistory");
        ButtonHistory->setFont(font2);
        ButtonHistory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(180, 130, 230); /* \320\242\320\265\320\274\320\275\320\265\320\265 \321\204\320\270\320\276\320\273\320\265\321\202\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    color: white;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #000000; /*\320\246\320\262\320\265\321\202 \321\200\320\260\320\274\320\272\320\270*/\n"
"    border-radius: 15px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(160, 110, 210); /* \320\225\321\211\320\265 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(140, 90, 190); /* \320\241\320\260\320\274\321\213\320\271 \321\202\320\265\320\274\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));

        verticalLayout->addWidget(ButtonHistory);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LabelName->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\264\320\276\321\205\320\276\320\264\320\276\320\262 \320\270 \321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262", nullptr));
        LabelAction->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265:", nullptr));
        ButtonIncome->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\276\321\205\320\276\320\264", nullptr));
        ButtonExpense->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\260\321\201\321\205\320\276\320\264", nullptr));
        ButtonHistory->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\270\321\201\321\202\320\276\321\200\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
