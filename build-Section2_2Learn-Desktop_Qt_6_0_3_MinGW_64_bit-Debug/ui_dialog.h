/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxUnder;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QPlainTextEdit *txtEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(529, 333);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxUnder = new QCheckBox(groupBox_2);
        checkBoxUnder->setObjectName(QString::fromUtf8("checkBoxUnder"));

        horizontalLayout_2->addWidget(checkBoxUnder);

        checkBoxItalic = new QCheckBox(groupBox_2);
        checkBoxItalic->setObjectName(QString::fromUtf8("checkBoxItalic"));

        horizontalLayout_2->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(groupBox_2);
        checkBoxBold->setObjectName(QString::fromUtf8("checkBoxBold"));

        horizontalLayout_2->addWidget(checkBoxBold);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rBtnBlack = new QRadioButton(groupBox);
        rBtnBlack->setObjectName(QString::fromUtf8("rBtnBlack"));

        horizontalLayout_3->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox);
        rBtnRed->setObjectName(QString::fromUtf8("rBtnRed"));

        horizontalLayout_3->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(groupBox);
        rBtnBlue->setObjectName(QString::fromUtf8("rBtnBlue"));

        horizontalLayout_3->addWidget(rBtnBlue);


        verticalLayout->addWidget(groupBox);

        txtEdit = new QPlainTextEdit(Dialog);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));

        verticalLayout->addWidget(txtEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(Dialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(checkBoxUnder, checkBoxItalic);
        QWidget::setTabOrder(checkBoxItalic, checkBoxBold);
        QWidget::setTabOrder(checkBoxBold, rBtnBlack);
        QWidget::setTabOrder(rBtnBlack, rBtnRed);
        QWidget::setTabOrder(rBtnRed, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnClose);
        QWidget::setTabOrder(btnClose, txtEdit);

        retranslateUi(Dialog);
        QObject::connect(btnOK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnCancel, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::reject));
        QObject::connect(btnClose, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog by Designer", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        checkBoxUnder->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        checkBoxItalic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        checkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        rBtnBlack->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        rBtnRed->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
#if QT_CONFIG(tooltip)
        rBtnBlue->setToolTip(QCoreApplication::translate("Dialog", "\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\350\223\235\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        rBtnBlue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        txtEdit->setPlainText(QCoreApplication::translate("Dialog", "Hello,World\n"
"It is my demo.", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "\347\241\256 \345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog", "\345\217\226 \346\266\210", nullptr));
        btnClose->setText(QCoreApplication::translate("Dialog", "\351\200\200 \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
