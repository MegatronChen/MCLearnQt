#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    boy=new QPerson("王小明");
    boy->setProperty("score",95);
    boy->setProperty("age",10);
    boy->setProperty("sex","Boy"); //动态属性
    connect(boy,&QPerson::ageChanged,this,&MainWindow::on_ageChanged);

    girl=new QPerson("张晓丽");
    girl->setProperty("score",81);
    girl->setProperty("age",20);
    girl->setProperty("sex","Girl"); //动态属性
    ui->spinGirl->setProperty("isBoy",false);

    connect(ui->spinGirl,SIGNAL(valueChanged(int)),
            this,SLOT(on_spin_valueChanged(int)));
    connect(ui->spinBoy,SIGNAL(valueChanged(int)),
            this,SLOT(on_spin_valueChanged(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ageChanged(int value)
{
    Q_UNUSED(value);
    QPerson *aPerson=qobject_cast<QPerson*>(sender());
    QString hisName=aPerson->property("name").toString();
    QString hisSex=aPerson->property("sex").toString();
    int hisAge=aPerson->age();
    ui->textEdit->appendPlainText(hisName+","+hisSex+QString::asprintf(",年龄=%d",hisAge));

}

void MainWindow::on_spin_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    QSpinBox *spinBox = qobject_cast<QSpinBox *>(sender());
    if (spinBox->property("isBoy").toBool())
        boy->setAge(spinBox->value());
    else
        girl->setAge(spinBox->value());
}

void MainWindow::on_btnClassInfo_clicked()
{
    const QMetaObject *meta=boy->metaObject();
    ui->textEdit->clear();
    ui->textEdit->appendPlainText("==元对象信息==\n");
    ui->textEdit->appendPlainText(QString("类名称：%1\n").arg(meta->className()));
    ui->textEdit->appendPlainText("Property");
    for (int i=meta->propertyOffset();i<meta->propertyCount() ;i++ ) {
//        注意在头文件中包含<QMetaProperty>
        QMetaProperty prop=meta->property(i);
        const char* propName=prop.name();
        QString propValue=boy->property(propName).toString();
        ui->textEdit->appendPlainText(QString("属性名称=%1,属性值=%2").arg(propName).arg(propValue));
    }

    ui->textEdit->appendPlainText(" ");
    ui->textEdit->appendPlainText("classInfo");
    for (int i=meta->classInfoOffset();i<meta->methodCount() ;++i ) {
        QMetaClassInfo classInfo=meta->classInfo(i);
        ui->textEdit->appendPlainText(QString("Name=1%,Value=2%")
                                      .arg(classInfo.name()).arg(classInfo.value()));
    }
}
