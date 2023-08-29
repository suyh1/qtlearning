#include "QWMainWind.h"

QWMainWind::QWMainWind(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::QWMainWindClass)
{
    ui->setupUi(this);
    initUI();
}

QWMainWind::~QWMainWind()
{
    delete ui;
    ui = nullptr;
}

void QWMainWind::initUI()
{
 // ��״̬����������
    flabCurFile = new QLabel;
    flabCurFile->setMinimumWidth(150);
    flabCurFile->setText(QString::fromLocal8Bit("��ǰ�ļ���"));
    ui->statusBar->addWidget(flabCurFile);

    progressBar1 = new QProgressBar;
    progressBar1->setMinimumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->textEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar1);
 // �ڹ�������������
    spinFontSize = new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->textEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->mainToolBar->addWidget(new QLabel(QString::fromLocal8Bit("��ǰ�ļ���")));
    ui->mainToolBar->addWidget(spinFontSize);

    ui->mainToolBar->addSeparator();
    ui->mainToolBar->addWidget(new QLabel(QString::fromLocal8Bit("����")));
    comboFont = new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->mainToolBar->addWidget(comboFont);

    setCentralWidget(ui->textEdit);

}