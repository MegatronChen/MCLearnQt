#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qperson.h>
#include <QMetaProperty>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPerson *boy;
    QPerson *girl;

private slots:
//    自定义槽函数
    void on_ageChanged(int value);
    void on_spin_valueChanged(int arg1);
//    界面按钮槽函数
    void on_btnClear_clicked();
    void on_btnBoyInc_clicked();
    void on_btnGirlInc_clicked();
    void on_btnClassInfo_clicked();
};
#endif // MAINWINDOW_H
