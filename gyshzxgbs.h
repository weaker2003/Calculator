#ifndef GYSHZXGBS_H
#define GYSHZXGBS_H

#include <QWidget>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<QMessageBox>
#include<QDebug>

namespace Ui {
class gyshzxgbs;
}

class gyshzxgbs : public QWidget
{
    Q_OBJECT

public:
    explicit gyshzxgbs(QWidget *parent = 0);
    ~gyshzxgbs();
    int strToInt(std::string str,int n,int jinzhi);
    bool Judge(std::string str,int n,int jinzhi);
public slots:
    void rBtn2Clicked();
    void rBtn10Clicked();
    void rBtn16Clicked();
    void rBtnTwoClicked();
    void rBtnTenClicked();
    void rBtnSixteenClicked();
    void rBtnErClicked();
    void rBtnShiClicked();
    void rBtnShiliuClicked();
    void gysBtnClicked();
    void gbsBtnClicked();

private:
    Ui::gyshzxgbs *ui;
};

#endif // GYSHZXGBS_H
