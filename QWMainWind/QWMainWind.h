#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QWMainWind.h"
#include <QProgressBar>
#include <QLabel>
#include <QSpinBox>
#include <QFontComboBox>

class QWMainWind : public QMainWindow
{
    Q_OBJECT

private:
    QLabel* flabCurFile;
    QProgressBar* progressBar1;
    QSpinBox* spinFontSize;
    QFontComboBox* comboFont;
    void initUI();



public:
    QWMainWind(QWidget *parent = nullptr);
    ~QWMainWind();

private:
    Ui::QWMainWindClass *ui;
};
