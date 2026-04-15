/********************************************************************************
** Form generated from reading UI file 'showhistorywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWHISTORYWINDOW_H
#define UI_SHOWHISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowHistoryWindow
{
public:
    QTabWidget *myhistory;
    QWidget *tab;
    QGroupBox *groupBox;
    QPushButton *ButtonTodayReport;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *TodayProfit;
    QLabel *label_3;
    QLabel *TodayIncome;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QPushButton *ButtonWeekReport;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *WeekProfit;
    QLabel *label_7;
    QLabel *WeekIncome;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QPushButton *ButtonMonthReport;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QLabel *MonthProfit;
    QLabel *label_11;
    QLabel *MonthIncome;
    QWidget *tab_4;
    QGroupBox *groupBox_4;
    QPushButton *ButtonYearReport;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *label_13;
    QLabel *YearProfit;
    QLabel *label_15;
    QLabel *YearIncome;
    QWidget *tab_5;
    QPushButton *CalculateSum;
    QPushButton *ButtonCustomReport;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QLabel *CustomProfit;
    QLabel *label_21;
    QLabel *CustomIncome;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_17;
    QDateEdit *StartDay;
    QLabel *label_18;
    QDateEdit *EndDay;

    void setupUi(QDialog *ShowHistoryWindow)
    {
        if (ShowHistoryWindow->objectName().isEmpty())
            ShowHistoryWindow->setObjectName("ShowHistoryWindow");
        ShowHistoryWindow->resize(400, 300);
        myhistory = new QTabWidget(ShowHistoryWindow);
        myhistory->setObjectName("myhistory");
        myhistory->setGeometry(QRect(10, 10, 381, 281));
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 20, 261, 181));
        ButtonTodayReport = new QPushButton(groupBox);
        ButtonTodayReport->setObjectName("ButtonTodayReport");
        ButtonTodayReport->setGeometry(QRect(115, 150, 141, 32));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 241, 61));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        TodayProfit = new QLabel(layoutWidget);
        TodayProfit->setObjectName("TodayProfit");

        gridLayout->addWidget(TodayProfit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        TodayIncome = new QLabel(layoutWidget);
        TodayIncome->setObjectName("TodayIncome");

        gridLayout->addWidget(TodayIncome, 1, 1, 1, 1);

        myhistory->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(60, 20, 261, 181));
        ButtonWeekReport = new QPushButton(groupBox_2);
        ButtonWeekReport->setObjectName("ButtonWeekReport");
        ButtonWeekReport->setGeometry(QRect(115, 150, 141, 32));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 30, 241, 61));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        WeekProfit = new QLabel(layoutWidget1);
        WeekProfit->setObjectName("WeekProfit");

        gridLayout_2->addWidget(WeekProfit, 0, 1, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        WeekIncome = new QLabel(layoutWidget1);
        WeekIncome->setObjectName("WeekIncome");

        gridLayout_2->addWidget(WeekIncome, 1, 1, 1, 1);

        myhistory->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(60, 20, 261, 181));
        ButtonMonthReport = new QPushButton(groupBox_3);
        ButtonMonthReport->setObjectName("ButtonMonthReport");
        ButtonMonthReport->setGeometry(QRect(115, 150, 141, 32));
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 30, 241, 61));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        MonthProfit = new QLabel(layoutWidget_2);
        MonthProfit->setObjectName("MonthProfit");

        gridLayout_3->addWidget(MonthProfit, 0, 1, 1, 1);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        MonthIncome = new QLabel(layoutWidget_2);
        MonthIncome->setObjectName("MonthIncome");

        gridLayout_3->addWidget(MonthIncome, 1, 1, 1, 1);

        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-calculator")));
        myhistory->addTab(tab_3, icon, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(60, 20, 261, 181));
        ButtonYearReport = new QPushButton(groupBox_4);
        ButtonYearReport->setObjectName("ButtonYearReport");
        ButtonYearReport->setGeometry(QRect(115, 150, 141, 32));
        layoutWidget_3 = new QWidget(groupBox_4);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 30, 241, 61));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName("label_13");

        gridLayout_4->addWidget(label_13, 0, 0, 1, 1);

        YearProfit = new QLabel(layoutWidget_3);
        YearProfit->setObjectName("YearProfit");

        gridLayout_4->addWidget(YearProfit, 0, 1, 1, 1);

        label_15 = new QLabel(layoutWidget_3);
        label_15->setObjectName("label_15");

        gridLayout_4->addWidget(label_15, 1, 0, 1, 1);

        YearIncome = new QLabel(layoutWidget_3);
        YearIncome->setObjectName("YearIncome");

        gridLayout_4->addWidget(YearIncome, 1, 1, 1, 1);

        myhistory->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        CalculateSum = new QPushButton(tab_5);
        CalculateSum->setObjectName("CalculateSum");
        CalculateSum->setGeometry(QRect(270, 70, 81, 31));
        CalculateSum->setStyleSheet(QString::fromUtf8(""));
        ButtonCustomReport = new QPushButton(tab_5);
        ButtonCustomReport->setObjectName("ButtonCustomReport");
        ButtonCustomReport->setGeometry(QRect(200, 190, 151, 32));
        layoutWidget_4 = new QWidget(tab_5);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(30, 110, 241, 61));
        gridLayout_5 = new QGridLayout(layoutWidget_4);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_4);
        label_19->setObjectName("label_19");

        gridLayout_5->addWidget(label_19, 0, 0, 1, 1);

        CustomProfit = new QLabel(layoutWidget_4);
        CustomProfit->setObjectName("CustomProfit");

        gridLayout_5->addWidget(CustomProfit, 0, 1, 1, 1);

        label_21 = new QLabel(layoutWidget_4);
        label_21->setObjectName("label_21");

        gridLayout_5->addWidget(label_21, 1, 0, 1, 1);

        CustomIncome = new QLabel(layoutWidget_4);
        CustomIncome->setObjectName("CustomIncome");

        gridLayout_5->addWidget(CustomIncome, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(tab_5);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(30, 40, 321, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName("label_17");

        horizontalLayout->addWidget(label_17);

        StartDay = new QDateEdit(layoutWidget2);
        StartDay->setObjectName("StartDay");

        horizontalLayout->addWidget(StartDay);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName("label_18");

        horizontalLayout->addWidget(label_18);

        EndDay = new QDateEdit(layoutWidget2);
        EndDay->setObjectName("EndDay");

        horizontalLayout->addWidget(EndDay);

        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::AppointmentSoon));
        myhistory->addTab(tab_5, icon1, QString());

        retranslateUi(ShowHistoryWindow);

        myhistory->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ShowHistoryWindow);
    } // setupUi

    void retranslateUi(QDialog *ShowHistoryWindow)
    {
        ShowHistoryWindow->setWindowTitle(QCoreApplication::translate("ShowHistoryWindow", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShowHistoryWindow", "\320\236\321\202\321\207\320\265\321\202 \320\267\320\260 \321\201\320\265\320\263\320\276\320\264\320\275\321\217:", nullptr));
        ButtonTodayReport->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\321\213\320\271 \320\276\321\202\321\207\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \320\264\320\276\321\205\320\276\320\264:", nullptr));
        TodayProfit->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \321\200\320\260\321\201\321\205\320\276\320\264:", nullptr));
        TodayIncome->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        myhistory->setTabText(myhistory->indexOf(tab), QCoreApplication::translate("ShowHistoryWindow", "\320\241\320\265\320\263\320\276\320\264\320\275\321\217", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ShowHistoryWindow", "\320\236\321\202\321\207\320\265\321\202 \320\267\320\260 \320\275\320\265\320\264\320\265\320\273\321\216:", nullptr));
        ButtonWeekReport->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\321\213\320\271 \320\276\321\202\321\207\320\265\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \320\264\320\276\321\205\320\276\320\264:", nullptr));
        WeekProfit->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \321\200\320\260\321\201\321\205\320\276\320\264:", nullptr));
        WeekIncome->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        myhistory->setTabText(myhistory->indexOf(tab_2), QCoreApplication::translate("ShowHistoryWindow", "\320\235\320\265\320\264\320\265\320\273\321\217", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ShowHistoryWindow", "\320\236\321\202\321\207\320\265\321\202 \320\267\320\260 \320\274\320\265\321\201\321\217\321\206:", nullptr));
        ButtonMonthReport->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\321\213\320\271 \320\276\321\202\321\207\320\265\321\202", nullptr));
        label_9->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \320\264\320\276\321\205\320\276\320\264:", nullptr));
        MonthProfit->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \321\200\320\260\321\201\321\205\320\276\320\264:", nullptr));
        MonthIncome->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        myhistory->setTabText(myhistory->indexOf(tab_3), QCoreApplication::translate("ShowHistoryWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ShowHistoryWindow", "\320\236\321\202\321\207\320\265\321\202 \320\267\320\260 \320\263\320\276\320\264:", nullptr));
        ButtonYearReport->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\321\213\320\271 \320\276\321\202\321\207\320\265\321\202", nullptr));
        label_13->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \320\264\320\276\321\205\320\276\320\264:", nullptr));
        YearProfit->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \321\200\320\260\321\201\321\205\320\276\320\264:", nullptr));
        YearIncome->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        myhistory->setTabText(myhistory->indexOf(tab_4), QCoreApplication::translate("ShowHistoryWindow", "\320\223\320\276\320\264", nullptr));
        CalculateSum->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        ButtonCustomReport->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\321\213\320\271 \320\276\321\202\321\207\320\265\321\202", nullptr));
        label_19->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \320\264\320\276\321\205\320\276\320\264:", nullptr));
        CustomProfit->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        label_21->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \321\200\320\260\321\201\321\205\320\276\320\264:", nullptr));
        CustomIncome->setText(QCoreApplication::translate("ShowHistoryWindow", "0", nullptr));
        label_17->setText(QCoreApplication::translate("ShowHistoryWindow", "\320\237\320\265\321\200\320\270\320\276\320\264:", nullptr));
        label_18->setText(QCoreApplication::translate("ShowHistoryWindow", "     -->", nullptr));
        myhistory->setTabText(myhistory->indexOf(tab_5), QCoreApplication::translate("ShowHistoryWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowHistoryWindow: public Ui_ShowHistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWHISTORYWINDOW_H
