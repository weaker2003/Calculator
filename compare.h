#ifndef COMPARE_H
#define COMPARE_H

#include <QWidget>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<QMessageBox>
#include<QDebug>

namespace Ui {
class Compare;
}

class Compare : public QWidget
{
    Q_OBJECT

public:
    explicit Compare(QWidget *parent = 0);
    ~Compare();
    double strToDouble(std::string str,int n,int jinzhi);
    bool Judge(std::string str,int n,int jinzhi);
public slots:
    void rBtn2Clicked();
    void rBtn10Clicked();
    void rBtn16Clicked();
    void rBtnTwoClicked();
    void rBtnTenClicked();
    void rBtnSixteenClicked();
    void cmpBtnClicked();

private:
    Ui::Compare *ui;
};

#endif // COMPARE_H
