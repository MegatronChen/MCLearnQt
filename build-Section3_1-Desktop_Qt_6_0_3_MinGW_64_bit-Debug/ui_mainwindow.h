/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelBoy;
    QLabel *labelGirl;
    QSpinBox *spinBoy;
    QSpinBox *spinGirl;
    QPushButton *btnBoyInc;
    QPushButton *btnClassInfo;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(415, 402);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelBoy = new QLabel(centralwidget);
        labelBoy->setObjectName(QString::fromUtf8("labelBoy"));
        labelBoy->setGeometry(QRect(20, 10, 81, 16));
        labelGirl = new QLabel(centralwidget);
        labelGirl->setObjectName(QString::fromUtf8("labelGirl"));
        labelGirl->setGeometry(QRect(20, 40, 81, 16));
        spinBoy = new QSpinBox(centralwidget);
        spinBoy->setObjectName(QString::fromUtf8("spinBoy"));
        spinBoy->setGeometry(QRect(120, 10, 42, 22));
        spinGirl = new QSpinBox(centralwidget);
        spinGirl->setObjectName(QString::fromUtf8("spinGirl"));
        spinGirl->setGeometry(QRect(120, 40, 42, 22));
        btnBoyInc = new QPushButton(centralwidget);
        btnBoyInc->setObjectName(QString::fromUtf8("btnBoyInc"));
        btnBoyInc->setGeometry(QRect(190, 10, 80, 20));
        btnClassInfo = new QPushButton(centralwidget);
        btnClassInfo->setObjectName(QString::fromUtf8("btnClassInfo"));
        btnClassInfo->setGeometry(QRect(280, 10, 101, 20));
        btnGirlInc = new QPushButton(centralwidget);
        btnGirlInc->setObjectName(QString::fromUtf8("btnGirlInc"));
        btnGirlInc->setGeometry(QRect(190, 40, 80, 20));
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(280, 40, 80, 20));
        textEdit = new QPlainTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 70, 381, 291));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 415, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelBoy->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        labelGirl->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        btnBoyInc->setText(QCoreApplication::translate("MainWindow", "boy\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClassInfo->setText(QCoreApplication::translate("MainWindow", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
        btnGirlInc->setText(QCoreApplication::translate("MainWindow", "girl\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
