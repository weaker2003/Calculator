#include "gyshzxgbs.h"
#include "ui_gyshzxgbs.h"

gyshzxgbs::gyshzxgbs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gyshzxgbs)
{
    ui->setupUi(this);

    ui->lineEdit3->setReadOnly(true);

    ui->lineEdit1->setAlignment(Qt::AlignRight);

    ui->lineEdit2->setAlignment(Qt::AlignRight);

    ui->lineEdit3->setAlignment(Qt::AlignRight);

    ui->rBtn10->setChecked(true);

    ui->rBtnTen->setChecked(true);

    ui->rBtnShi->setChecked(true);

    ui->rBtn2->setFocusPolicy(Qt::NoFocus);

    ui->rBtn10->setFocusPolicy(Qt::NoFocus);

    ui->rBtn16->setFocusPolicy(Qt::NoFocus);

    ui->rBtnTwo->setFocusPolicy(Qt::NoFocus);

    ui->rBtnTen->setFocusPolicy(Qt::NoFocus);

    ui->rBtnSixteen->setFocusPolicy(Qt::NoFocus);

    ui->rBtnEr->setFocusPolicy(Qt::NoFocus);

    ui->rBtnShi->setFocusPolicy(Qt::NoFocus);

    ui->rBtnShiliu->setFocusPolicy(Qt::NoFocus);

    ui->sevenBtn->setFocusPolicy(Qt::NoFocus);

    ui->eightBtn->setFocusPolicy(Qt::NoFocus);

    ui->nineBtn->setFocusPolicy(Qt::NoFocus);

    ui->fourBtn->setFocusPolicy(Qt::NoFocus);

    ui->fiveBtn->setFocusPolicy(Qt::NoFocus);

    ui->sixBtn->setFocusPolicy(Qt::NoFocus);

    ui->oneBtn->setFocusPolicy(Qt::NoFocus);

    ui->twoBtn->setFocusPolicy(Qt::NoFocus);

    ui->threeBtn->setFocusPolicy(Qt::NoFocus);

    ui->zeroBtn->setFocusPolicy(Qt::NoFocus);

    ui->ClearBtn->setFocusPolicy(Qt::NoFocus);

    ui->BackspaceBtn->setFocusPolicy(Qt::NoFocus);

    ui->ABtn->setFocusPolicy(Qt::NoFocus);

    ui->BBtn->setFocusPolicy(Qt::NoFocus);

    ui->CBtn->setFocusPolicy(Qt::NoFocus);

    ui->DBtn->setFocusPolicy(Qt::NoFocus);

    ui->EBtn->setFocusPolicy(Qt::NoFocus);

    ui->FBtn->setFocusPolicy(Qt::NoFocus);

    connect(ui->rBtn2,&QRadioButton::clicked,this,&gyshzxgbs::rBtn2Clicked);

    connect(ui->rBtn10,&QRadioButton::clicked,this,&gyshzxgbs::rBtn10Clicked);

    connect(ui->rBtn16,&QRadioButton::clicked,this,&gyshzxgbs::rBtn16Clicked);

    connect(ui->rBtnTwo,&QRadioButton::clicked,this,&gyshzxgbs::rBtnTwoClicked);

    connect(ui->rBtnTen,&QRadioButton::clicked,this,&gyshzxgbs::rBtnTenClicked);

    connect(ui->rBtnSixteen,&QRadioButton::clicked,this,&gyshzxgbs::rBtnSixteenClicked);

    connect(ui->rBtnEr,&QRadioButton::clicked,this,&gyshzxgbs::rBtnErClicked);

    connect(ui->rBtnShi,&QRadioButton::clicked,this,&gyshzxgbs::rBtnShiClicked);

    connect(ui->rBtnShiliu,&QRadioButton::clicked,this,&gyshzxgbs::rBtnShiliuClicked);

    connect(ui->ABtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("A");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("A");
    });

    connect(ui->BBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("B");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("B");
    });

    connect(ui->CBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("C");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("C");
    });

    connect(ui->DBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("D");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("D");
    });

    connect(ui->EBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("E");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("E");
    });

    connect(ui->FBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("F");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("F");
    });

    connect(ui->sevenBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("7");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("7");
    });

    connect(ui->eightBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("8");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("8");
    });

    connect(ui->nineBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("9");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("9");
    });

    connect(ui->fourBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("4");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("4");
    });

    connect(ui->fiveBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("5");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("5");
    });

    connect(ui->sixBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("6");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("6");
    });

    connect(ui->oneBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("1");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("1");
    });

    connect(ui->twoBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("2");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("2");
    });

    connect(ui->threeBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("3");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("3");
    });

    connect(ui->gysBtn,&QPushButton::clicked,this,&gyshzxgbs::gysBtnClicked);

    connect(ui->zeroBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert("0");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert("0");
    });

    connect(ui->ClearBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->clear();
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->clear();
    });

    connect(ui->BackspaceBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->backspace();
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->backspace();
    });

    connect(ui->gbsBtn,&QPushButton::clicked,this,&gyshzxgbs::gbsBtnClicked);
}

gyshzxgbs::~gyshzxgbs()
{
    delete ui;
}

int gyshzxgbs::strToInt(std::string str, int n, int jinzhi)
{
    if(jinzhi==10)
    {
        int ret=0;
        for(int i=0;i<n;i++)
            ret=ret*10+str[i]-'0';
        return ret;
    }
    if(jinzhi==2)
    {
        int ret=0;
        for(int i=0;i<n;i++)
            ret+=(str[i]-48)*pow(2,n-i-1);
        return ret;
    }
    if(jinzhi==16)
    {
        int ret=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='0'&&str[i]<='9')
                ret+=(str[i]-48)*pow(16,n-i-1);
            if(str[i]>='A'&&str[i]<='F')
                ret+=(str[i]-55)*pow(16,n-i-1);
            }
        return ret;
    }
}
bool gyshzxgbs::Judge(std::string str, int n,int jinzhi)
{
    if(jinzhi==2)
    {
        for(int i=0;i<n;i++)
            if(str[i]<'0'||str[i]>'1')
                return false;
        return true;
    }
    if(jinzhi==10)
    {
        for(int i=0;i<n;i++)
            if(str[i]<'0'||str[i]>'9')
                return false;
        return true;
    }
    if(jinzhi==16)
    {
        for(int i=0;i<n;i++)
            if((str[i]<'0'||str[i]>'9')&&(str[i]<'A'||str[i]>'F'))
                return false;
        return true;
    }
}
void gyshzxgbs::rBtn2Clicked()
{
    ui->lineEdit1->jinzhi=2;
}

void gyshzxgbs::rBtn10Clicked()
{
    ui->lineEdit1->jinzhi=10;
}

void gyshzxgbs::rBtn16Clicked()
{
    ui->lineEdit1->jinzhi=16;
}

void gyshzxgbs::rBtnTwoClicked()
{
    ui->lineEdit2->jinzhi=2;
}

void gyshzxgbs::rBtnTenClicked()
{
    ui->lineEdit2->jinzhi=10;
}

void gyshzxgbs::rBtnSixteenClicked()
{
    ui->lineEdit2->jinzhi=16;
}

void gyshzxgbs::rBtnErClicked()
{
    QString QStr=ui->lineEdit3->text();
    std::string str=QStr.toStdString();
    int n=QStr.length();
    if(str=="")
    {
        ui->lineEdit3->jinzhi=2;
        return;
    }
    else
    {
        int c=strToInt(str,n,ui->lineEdit3->jinzhi);
        ui->lineEdit3->setText(QString::number(c,2));
        ui->lineEdit3->jinzhi=2;
    }
}

void gyshzxgbs::rBtnShiClicked()
{
    QString QStr=ui->lineEdit3->text();
    std::string str=QStr.toStdString();
    int n=QStr.length();
    if(str=="")
    {
        ui->lineEdit3->jinzhi=10;
        return;
    }
    else
    {
        int c=strToInt(str,n,ui->lineEdit3->jinzhi);
        ui->lineEdit3->setText(QString::number(c));
        ui->lineEdit3->jinzhi=10;
    }
}

void gyshzxgbs::rBtnShiliuClicked()
{
    QString QStr=ui->lineEdit3->text();
    std::string str=QStr.toStdString();
    int n=QStr.length();
    if(str=="")
    {
        ui->lineEdit3->jinzhi=16;
        return;
    }
    else
    {
        int c=strToInt(str,n,ui->lineEdit3->jinzhi);
        ui->lineEdit3->setText(QString::number(c,16).toUpper());
        ui->lineEdit3->jinzhi=16;
    }
}

void gyshzxgbs::gbsBtnClicked()
{
    QString QStr1=ui->lineEdit1->text();
    QString QStr2=ui->lineEdit2->text();
    std::string str1=QStr1.toStdString();
    std::string str2=QStr2.toStdString();
    int n1=QStr1.length();
    int n2=QStr2.length();
    if(!Judge(str1,n1,ui->lineEdit1->jinzhi))
    {
        QMessageBox::critical(this,"错误","左输入框输入有误");
        return;
    }
    else if(!Judge(str2,n2,ui->lineEdit2->jinzhi))
    {
        QMessageBox::critical(this,"错误","右输入框输入有误");
        return;
    }
    else if(str1=="")
    {
        QMessageBox::critical(this,"错误","左输入框输入为空");
        return;
    }
    else if(str2=="")
    {
        QMessageBox::critical(this,"错误","右输入框输入为空");
        return;
    }
    else
    {
        int a=strToInt(str1,n1,ui->lineEdit1->jinzhi);
        int b=strToInt(str2,n2,ui->lineEdit2->jinzhi);
        qDebug()<<a<<" "<<b;
        int c=(a>b)?a:b;
        while(!((c%a==0)&&(c%b==0)))
        {
            c++;
        }
        if(ui->lineEdit3->jinzhi==2)
            ui->lineEdit3->setText(QString::number(c,2));
        if(ui->lineEdit3->jinzhi==10)
            ui->lineEdit3->setText(QString::number(c));
        if(ui->lineEdit3->jinzhi==16)
            ui->lineEdit3->setText(QString::number(c,16));
    }
}

void gyshzxgbs::gysBtnClicked()
{
    QString QStr1=ui->lineEdit1->text();
    QString QStr2=ui->lineEdit2->text();
    std::string str1=QStr1.toStdString();
    std::string str2=QStr2.toStdString();
    int n1=QStr1.length();
    int n2=QStr2.length();
    if(!Judge(str1,n1,ui->lineEdit1->jinzhi))
    {
        QMessageBox::critical(this,"错误","左输入框输入有误");
        return;
    }
    else if(!Judge(str2,n2,ui->lineEdit2->jinzhi))
    {
        QMessageBox::critical(this,"错误","右输入框输入有误");
        return;
    }
    else if(str1=="")
    {
        QMessageBox::critical(this,"错误","左输入框输入为空");
        return;
    }
    else if(str2=="")
    {
        QMessageBox::critical(this,"错误","右输入框输入为空");
        return;
    }
    else
    {
        int a=strToInt(str1,n1,ui->lineEdit1->jinzhi);
        int b=strToInt(str2,n2,ui->lineEdit2->jinzhi);
        qDebug()<<a<<" "<<b;
        int c=b;
        while(a%b!=0)
        {
            c=a%b;
            a=b;
            b=c;
        }
        if(ui->lineEdit3->jinzhi==2)
            ui->lineEdit3->setText(QString::number(c,2));
        if(ui->lineEdit3->jinzhi==10)
            ui->lineEdit3->setText(QString::number(c));
        if(ui->lineEdit3->jinzhi==16)
            ui->lineEdit3->setText(QString::number(c,16));
    }
}
