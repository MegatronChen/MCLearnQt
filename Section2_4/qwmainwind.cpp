#include "qwmainwind.h"
#include "ui_qwmainwind.h"

QWMainWind::QWMainWind(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QWMainWind)
{
    ui->setupUi(this);
    iniUI();
    iniSignalSlots();
}

QWMainWind::~QWMainWind()
{
    delete ui;
}

void QWMainWind::iniUI()
{
//    状态栏上添加label
    fLabCurFile=new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件： ");
    ui->statusbar->addWidget(fLabCurFile);

//    状态栏上添加processbar
    processBar1=new QProgressBar;
    processBar1->setMinimumWidth(100);
    processBar1->setMinimum(5);
    processBar1->setMaximum(50);
    processBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusbar->addWidget(processBar1);

//    工具栏上添加spinbox
    spinFontSize=new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->mainToolBar->addWidget(new QLabel("字体大小"));
    ui->mainToolBar->addWidget(spinFontSize);

//    工具栏上添加combobox
    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addWidget(new QLabel(" 字体 "));
    comboFont=new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->mainToolBar->addWidget(comboFont);

    setCentralWidget(ui->txtEdit);
}


void QWMainWind::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    if (checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_txtEdit_copyAvailable(bool b)
{
//    更新cut,copy,paste的enabled属性
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(b);
}

void QWMainWind::on_txtEdit_selectionChanged()
{
//    更新粗体、斜体、下划线的3种action的checked属性
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    ui->actFontItalic->setChecked(fmt.fontItalic());
    ui->actFontBold->setChecked(fmt.font().bold());
    ui->actFontUnder->setChecked(fmt.fontUnderline());
}

//本槽函数仅用于学习和体会，实际上不应使用该重载形式，否则无法从斜体切换回正常体-20210627
void QWMainWind::on_actFontItalic_triggered()
{
    QTextCharFormat fmt;
    fmt=ui->txtEdit->currentCharFormat();
    fmt.setFontItalic(true);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_spinBoxFontSize_valueChanged(int aFontSize)
{
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
    processBar1->setValue(aFontSize);
}

void QWMainWind::on_comboFont_currentIndexChanged(const QString &arg1)
{
    QTextCharFormat fmt;
    fmt.setFontFamily(arg1);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

//自定义槽函数的关联
void QWMainWind::iniSignalSlots()
{
    connect(spinFontSize,SIGNAL(valueChanged(int)),
             this,SLOT(on_spinBoxFontSize_valueChanged(int)));
    connect(comboFont,SIGNAL(currentIndexChanged(const QString &)),
            this,SLOT(on_coboFont_currentIndexChanged(const QString &)));

}
