/********************************************************************************
** Form generated from reading UI file 'qwmainwind.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWIND_H
#define UI_QWMAINWIND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWind
{
public:
    QAction *actOpen;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actClose;
    QAction *actClear;
    QAction *actFont;
    QAction *actNew;
    QAction *actToolbarLab;
    QAction *actCut;
    QWidget *centralwidget;
    QTextEdit *txtEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QWMainWind)
    {
        if (QWMainWind->objectName().isEmpty())
            QWMainWind->setObjectName(QString::fromUtf8("QWMainWind"));
        QWMainWind->resize(800, 600);
        actOpen = new QAction(QWMainWind);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actCopy = new QAction(QWMainWind);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon1);
        actPaste = new QAction(QWMainWind);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon2);
        actFontBold = new QAction(QWMainWind);
        actFontBold->setObjectName(QString::fromUtf8("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon3);
        actFontItalic = new QAction(QWMainWind);
        actFontItalic->setObjectName(QString::fromUtf8("actFontItalic"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontItalic->setIcon(icon4);
        actFontUnder = new QAction(QWMainWind);
        actFontUnder->setObjectName(QString::fromUtf8("actFontUnder"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/WORDUNDR.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontUnder->setIcon(icon5);
        actClose = new QAction(QWMainWind);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon6);
        actClear = new QAction(QWMainWind);
        actClear->setObjectName(QString::fromUtf8("actClear"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon7);
        actFont = new QAction(QWMainWind);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon8);
        actNew = new QAction(QWMainWind);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/new2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon9);
        actToolbarLab = new QAction(QWMainWind);
        actToolbarLab->setObjectName(QString::fromUtf8("actToolbarLab"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/430.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actToolbarLab->setIcon(icon10);
        actCut = new QAction(QWMainWind);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon11);
        centralwidget = new QWidget(QWMainWind);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txtEdit = new QTextEdit(centralwidget);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));
        txtEdit->setGeometry(QRect(0, 0, 801, 521));
        QWMainWind->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QWMainWind);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        QWMainWind->setMenuBar(menubar);
        statusbar = new QStatusBar(QWMainWind);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QWMainWind->setStatusBar(statusbar);
        mainToolBar = new QToolBar(QWMainWind);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        QWMainWind->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addSeparator();
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addSeparator();
        menu->addAction(actClose);
        menu_2->addSeparator();
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actPaste);
        menu_2->addSeparator();
        menu_2->addAction(actClear);
        menu_3->addAction(actFontBold);
        menu_3->addAction(actFontItalic);
        menu_3->addAction(actFontUnder);
        menu_3->addSeparator();
        menu_3->addAction(actToolbarLab);
        mainToolBar->addAction(actNew);
        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFontItalic);
        mainToolBar->addAction(actFontBold);
        mainToolBar->addAction(actFontUnder);

        retranslateUi(QWMainWind);
        QObject::connect(actPaste, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::paste));
        QObject::connect(actCut, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(actCopy, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(actClose, &QAction::triggered, QWMainWind, qOverload<>(&QMainWindow::close));
        QObject::connect(actClear, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::clear));

        QMetaObject::connectSlotsByName(QWMainWind);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWind)
    {
        QWMainWind->setWindowTitle(QCoreApplication::translate("QWMainWind", "QWMainWind", nullptr));
        actOpen->setText(QCoreApplication::translate("QWMainWind", "\346\211\223\345\274\200...", nullptr));
#if QT_CONFIG(tooltip)
        actOpen->setToolTip(QCoreApplication::translate("QWMainWind", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actOpen->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actCopy->setText(QCoreApplication::translate("QWMainWind", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actCopy->setToolTip(QCoreApplication::translate("QWMainWind", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCopy->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actPaste->setText(QCoreApplication::translate("QWMainWind", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actPaste->setToolTip(QCoreApplication::translate("QWMainWind", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actPaste->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actFontBold->setText(QCoreApplication::translate("QWMainWind", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFontBold->setToolTip(QCoreApplication::translate("QWMainWind", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFontItalic->setText(QCoreApplication::translate("QWMainWind", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFontItalic->setToolTip(QCoreApplication::translate("QWMainWind", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFontUnder->setText(QCoreApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actFontUnder->setToolTip(QCoreApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("QWMainWind", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("QWMainWind", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actClear->setText(QCoreApplication::translate("QWMainWind", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actClear->setToolTip(QCoreApplication::translate("QWMainWind", "\346\270\205\347\251\272\345\206\205\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont->setText(QCoreApplication::translate("QWMainWind", "\345\255\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFont->setToolTip(QCoreApplication::translate("QWMainWind", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        actNew->setText(QCoreApplication::translate("QWMainWind", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actNew->setToolTip(QCoreApplication::translate("QWMainWind", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actNew->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actToolbarLab->setText(QCoreApplication::translate("QWMainWind", "\346\230\276\347\244\272", nullptr));
#if QT_CONFIG(tooltip)
        actToolbarLab->setToolTip(QCoreApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actCut->setText(QCoreApplication::translate("QWMainWind", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actCut->setToolTip(QCoreApplication::translate("QWMainWind", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCut->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        menu->setTitle(QCoreApplication::translate("QWMainWind", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("QWMainWind", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("QWMainWind", "\346\240\274\345\274\217", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("QWMainWind", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWind: public Ui_QWMainWind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWIND_H
