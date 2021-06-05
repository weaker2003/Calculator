#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<compare.h>
#include<gyshzxgbs.h>
#include<QString>
#include<QStack>
#include<string.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Compare cmp;
    gyshzxgbs gg;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString zhongToHou(QString Qzhong);
    char getPriority(char c1,char c2);
    bool Judge(QString str,int jinzhi);
    double Answer(QString zhong,int jinzhi);
    double strToDouble(QString QStr,int jinzhi);
    double memory=0;
public slots:
    void rBtn2Clicked();

    void rBtn10Clicked();

    void rBtn16Clicked();

    void MSBtnClicked();

    void MRBtnClicked();

    void MCBtnClicked();

    void MplusBtnClicked();

    void MsubBtnClicked();

    void EqualBtnClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
