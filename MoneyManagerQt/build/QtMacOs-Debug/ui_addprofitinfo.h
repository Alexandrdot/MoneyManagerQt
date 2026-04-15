/********************************************************************************
** Form generated from reading UI file 'addprofitinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROFITINFO_H
#define UI_ADDPROFITINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProfitInfo
{
public:
    QLabel *NameActLabel;
    QFrame *frame;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *NamePILabel;
    QLabel *DatePILabel;
    QDateEdit *DateBox;
    QLabel *NameCategoryLabel;
    QComboBox *CategoryBox;
    QDoubleSpinBox *AddSumLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddProfitInfo)
    {
        if (AddProfitInfo->objectName().isEmpty())
            AddProfitInfo->setObjectName("AddProfitInfo");
        AddProfitInfo->resize(400, 300);
        NameActLabel = new QLabel(AddProfitInfo);
        NameActLabel->setObjectName("NameActLabel");
        NameActLabel->setGeometry(QRect(100, 20, 191, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setUnderline(true);
        NameActLabel->setFont(font);
        NameActLabel->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;\n"
"color:white;\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: black;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background:rgb(80,80,80);"));
        frame = new QFrame(AddProfitInfo);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 80, 301, 131));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: black;\n"
"    border-radius: 10px;\n"
"    padding: 5px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \320\262\320\275\321\203\321\202\321\200\320\270 \321\200\320\260\320\274\320\272\320\270 */\n"
"background:rgb(80, 80, 80);\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 281, 115));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        NamePILabel = new QLabel(widget);
        NamePILabel->setObjectName("NamePILabel");

        gridLayout->addWidget(NamePILabel, 0, 0, 1, 1);

        DatePILabel = new QLabel(widget);
        DatePILabel->setObjectName("DatePILabel");

        gridLayout->addWidget(DatePILabel, 1, 0, 1, 1);

        DateBox = new QDateEdit(widget);
        DateBox->setObjectName("DateBox");

        gridLayout->addWidget(DateBox, 1, 2, 1, 1);

        NameCategoryLabel = new QLabel(widget);
        NameCategoryLabel->setObjectName("NameCategoryLabel");

        gridLayout->addWidget(NameCategoryLabel, 2, 0, 1, 2);

        CategoryBox = new QComboBox(widget);
        CategoryBox->setObjectName("CategoryBox");

        gridLayout->addWidget(CategoryBox, 2, 2, 1, 1);

        AddSumLabel = new QDoubleSpinBox(widget);
        AddSumLabel->setObjectName("AddSumLabel");
        AddSumLabel->setMaximum(999999999.000000000000000);
        AddSumLabel->setSingleStep(50.000000000000000);

        gridLayout->addWidget(AddSumLabel, 0, 2, 1, 1);

        buttonBox = new QDialogButtonBox(AddProfitInfo);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(180, 220, 162, 32));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(AddProfitInfo);

        QMetaObject::connectSlotsByName(AddProfitInfo);
    } // setupUi

    void retranslateUi(QDialog *AddProfitInfo)
    {
        AddProfitInfo->setWindowTitle(QCoreApplication::translate("AddProfitInfo", "Dialog", nullptr));
        NameActLabel->setText(QCoreApplication::translate("AddProfitInfo", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\264\320\276\321\205\320\276\320\264\320\260", nullptr));
        NamePILabel->setText(QCoreApplication::translate("AddProfitInfo", "\320\241\321\203\320\274\320\274\320\260 \320\264\320\276\321\205\320\276\320\264\320\260:", nullptr));
        DatePILabel->setText(QCoreApplication::translate("AddProfitInfo", "\320\224\320\260\321\202\320\260 \320\264\320\276\321\205\320\276\320\264\320\260", nullptr));
        NameCategoryLabel->setText(QCoreApplication::translate("AddProfitInfo", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217 \321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProfitInfo: public Ui_AddProfitInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROFITINFO_H
