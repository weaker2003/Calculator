#include "compare.h"
#include "ui_compare.h"
#include<mylineedit.h>

Compare::Compare(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Compare)
{
    ui->setupUi(this);

    ui->lineEdit3->setReadOnly(true);

    ui->lineEdit1->setAlignment(Qt::AlignRight);

    ui->lineEdit2->setAlignment(Qt::AlignRight);

    ui->rBtn10->setChecked(true);

    ui->rBtnTen->setChecked(true);

    ui->rBtn2->setFocusPolicy(Qt::NoFocus);

    ui->rBtn10->setFocusPolicy(Qt::NoFocus);

    ui->rBtn16->setFocusPolicy(Qt::NoFocus);

    ui->rBtnTwo->setFocusPolicy(Qt::NoFocus);

    ui->rBtnTen->setFocusPolicy(Qt::NoFocus);

    ui->rBtnSixteen->setFocusPolicy(Qt::NoFocus);

    ui->sevenBtn->setFocusPolicy(Qt::NoFocus);

    ui->eightBtn->setFocusPolicy(Qt::NoFocus);

    ui->nineBtn->setFocusPolicy(Qt::NoFocus);

    ui->fourBtn->setFocusPolicy(Qt::NoFocus);

    ui->fiveBtn->setFocusPolicy(Qt::NoFocus);

    ui->sixBtn->setFocusPolicy(Qt::NoFocus);

    ui->oneBtn->setFocusPolicy(Qt::NoFocus);

    ui->twoBtn->setFocusPolicy(Qt::NoFocus);

    ui->threeBtn->setFocusPolicy(Qt::NoFocus);

    ui->pointBtn->setFocusPolicy(Qt::NoFocus);

    ui->zeroBtn->setFocusPolicy(Qt::NoFocus);

    ui->ClearBtn->setFocusPolicy(Qt::NoFocus);

    ui->BackspaceBtn->setFocusPolicy(Qt::NoFocus);

    ui->ABtn->setFocusPolicy(Qt::NoFocus);

    ui->BBtn->setFocusPolicy(Qt::NoFocus);

    ui->CBtn->setFocusPolicy(Qt::NoFocus);

    ui->DBtn->setFocusPolicy(Qt::NoFocus);

    ui->EBtn->setFocusPolicy(Qt::NoFocus);

    ui->FBtn->setFocusPolicy(Qt::NoFocus);

    connect(ui->rBtn2,&QRadioButton::clicked,this,&Compare::rBtn2Clicked);

    connect(ui->rBtn10,&QRadioButton::clicked,this,&Compare::rBtn10Clicked);

    connect(ui->rBtn16,&QRadioButton::clicked,this,&Compare::rBtn16Clicked);

    connect(ui->rBtnTwo,&QRadioButton::clicked,this,&Compare::rBtnTwoClicked);

    connect(ui->rBtnTen,&QRadioButton::clicked,this,&Compare::rBtnTenClicked);

    connect(ui->rBtnSixteen,&QRadioButton::clicked,this,&Compare::rBtnSixteenClicked);

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

    connect(ui->pointBtn,&QPushButton::clicked,[=](){
        if(ui->lineEdit1->hasFocus())
            ui->lineEdit1->insert(".");
        else if(ui->lineEdit2->hasFocus())
            ui->lineEdit2->insert(".");
    });

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

    connect(ui->cmpBtn,&QPushButton::clicked,this,&Compare::cmpBtnClicked);
}

Compare::~Compare()
{
    delete ui;
}

double Compare::strToDouble(std::string str, int n, int jinzhi)
{
    if(jinzhi==10)
    {
        double ret=0;
        int dotMarker=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='.')
                dotMarker=i;
            else
                ret=ret*10+str[i]-'0';
        }
        if (dotMarker!=0)
            for(int i=1;i<n-dotMarker;i++)
                ret/=10;
        return ret;
    }
    if(jinzhi==2)
    {
        double ret=0;
        int dotMarker=0;
        for(int i=0;i<n;i++)
            if(str[i]=='.')
                dotMarker=i;
        if(dotMarker!=0)
        {
            for(int i=0;i<dotMarker;i++)
                ret+=(str[i]-48)*pow(2,dotMarker-i-1);
            for(int i=dotMarker+1;i<n;i++)
                ret+=(str[i]-48)*pow(2,i-n);
        }
        else
        {
            for(int i=0;i<n;i++)
                ret+=(str[i]-48)*pow(2,n-i-1);
        }
        return ret;
    }
    if(jinzhi==16)
    {
        double ret=0;
        int dotMarker=0;
        for(int i=0;i<n;i++)
            if(str[i]=='.')
                dotMarker=i;
        if(dotMarker!=0)
        {
            for(int i=0;i<dotMarker;i++)
            {
                if(str[i]>='0'&&str[i]<='9')
                    ret+=(str[i]-48)*pow(16,dotMarker-i-1);
                if(str[i]>='A'&&str[i]<='F')
                    ret+=(str[i]-55)*pow(16,dotMarker-i-1);
            }
            for(int i=dotMarker+1;i<n;i++)
            {
                if(str[i]>='0'&&str[i]<='9')
                    ret+=(str[i]-48)*pow(16,i-n);
                if(str[i]>='A'&&str[i]<='F')
                    ret+=(str[i]-55)*pow(16,i-n);
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(str[i]>='0'&&str[i]<='9')
                    ret+=(str[i]-48)*pow(16,n-i-1);
                if(str[i]>='A'&&str[i]<='F')
                    ret+=(str[i]-55)*pow(16,n-i-1);
            }
        }
        return ret;
    }
}
bool Compare::Judge(std::string str, int n,int jinzhi)
{
    int dot=0;
    for(int i=0;i<n;i++)
        if(str[i]=='.')
            dot++;
    if(dot>1)
        return false;
    for(int i=0;i<n;i++)
        if(str[0]=='.'||str[n-1]=='.')
            return false;
    if(jinzhi==2)
    {
        for(int i=0;i<n;i++)
            if((str[i]<'0'||str[i]>'1')&&str[i]!='.')
                return false;
        return true;
    }
    if(jinzhi==10)
    {
        for(int i=0;i<n;i++)
            if((str[i]<'0'||str[i]>'9')&&str[i]!='.')
                return false;
        return true;
    }
    if(jinzhi==16)
    {
        for(int i=0;i<n;i++)
            if((str[i]<'0'||str[i]>'9')&&(str[i]<'A'||str[i]>'F')&&str[i]!='.')
                return false;
        return true;
    }
}
void Compare::rBtn2Clicked()
{
    ui->lineEdit1->jinzhi=2;
}

void Compare::rBtn10Clicked()
{
    ui->lineEdit1->jinzhi=10;
}

void Compare::rBtn16Clicked()
{
    ui->lineEdit1->jinzhi=16;
}

void Compare::rBtnTwoClicked()
{
    ui->lineEdit2->jinzhi=2;
}

void Compare::rBtnTenClicked()
{
    ui->lineEdit2->jinzhi=10;
}

void Compare::rBtnSixteenClicked()
{
    ui->lineEdit2->jinzhi=16;
}

void Compare::cmpBtnClicked()
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
        double a=strToDouble(str1,n1,ui->lineEdit1->jinzhi);
        double b=strToDouble(str2,n2,ui->lineEdit2->jinzhi);
        qDebug()<<a<<" "<<b;
        if(a>b)
            ui->lineEdit3->setText(">");
        else if(a<b)
            ui->lineEdit3->setText("<");
        else
            ui->lineEdit3->setText("=");
        return;
    }
}

