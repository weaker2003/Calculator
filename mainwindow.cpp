#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->Display->setAlignment(Qt::AlignRight);

    ui->rBtn10->setChecked(true);

    ui->rBtn2->setFocusPolicy(Qt::NoFocus);

    ui->rBtn10->setFocusPolicy(Qt::NoFocus);

    ui->rBtn16->setFocusPolicy(Qt::NoFocus);

    ui->LeftBracketBtn->setFocusPolicy(Qt::NoFocus);

    ui->RightBracketBtn->setFocusPolicy(Qt::NoFocus);

    ui->SevenBtn->setFocusPolicy(Qt::NoFocus);

    ui->EightBtn->setFocusPolicy(Qt::NoFocus);

    ui->NineBtn->setFocusPolicy(Qt::NoFocus);

    ui->FourBtn->setFocusPolicy(Qt::NoFocus);

    ui->FiveBtn->setFocusPolicy(Qt::NoFocus);

    ui->SixBtn->setFocusPolicy(Qt::NoFocus);

    ui->OneBtn->setFocusPolicy(Qt::NoFocus);

    ui->TwoBtn->setFocusPolicy(Qt::NoFocus);

    ui->ThreeBtn->setFocusPolicy(Qt::NoFocus);

    ui->PointBtn->setFocusPolicy(Qt::NoFocus);

    ui->ZeroBtn->setFocusPolicy(Qt::NoFocus);

    ui->ClearBtn->setFocusPolicy(Qt::NoFocus);

    ui->BackspaceBtn->setFocusPolicy(Qt::NoFocus);

    ui->ABtn->setFocusPolicy(Qt::NoFocus);

    ui->BBtn->setFocusPolicy(Qt::NoFocus);

    ui->CBtn->setFocusPolicy(Qt::NoFocus);

    ui->DBtn->setFocusPolicy(Qt::NoFocus);

    ui->EBtn->setFocusPolicy(Qt::NoFocus);

    ui->FBtn->setFocusPolicy(Qt::NoFocus);

    ui->MSBtn->setFocusPolicy(Qt::NoFocus);

    ui->MRBtn->setFocusPolicy(Qt::NoFocus);

    ui->MplusBtn->setFocusPolicy(Qt::NoFocus);

    ui->MsubBtn->setFocusPolicy(Qt::NoFocus);

    ui->MCBtn->setFocusPolicy(Qt::NoFocus);

    ui->DivBtn->setFocusPolicy(Qt::NoFocus);

    ui->MulBtn->setFocusPolicy(Qt::NoFocus);

    ui->RecBtn->setFocusPolicy(Qt::NoFocus);

    ui->SubBtn->setFocusPolicy(Qt::NoFocus);

    ui->AddBtn->setFocusPolicy(Qt::NoFocus);

    ui->LeftCursorBtn->setFocusPolicy(Qt::NoFocus);

    ui->RightCursorBtn->setFocusPolicy(Qt::NoFocus);

    ui->DoubleZeroBtn->setFocusPolicy(Qt::NoFocus);

    ui->EqualBtn->setFocusPolicy(Qt::NoFocus);

    connect(ui->actionaboutWriter,&QAction::triggered,[=](){
        QMessageBox::information(this,"关于作者","姓名：葛瑞\n学号：920106970118\n学校：南京理工大学\n学院：网络空间安全学院\n专业：网络空间安全专业\n指导老师：张浩峰");
    });

    connect(ui->actioncompare,&QAction::triggered,[=](){
        cmp.show();
    });

    connect(ui->actiongongyueshu,&QAction::triggered,[=](){
        gg.show();
    });

    connect(ui->rBtn2,&QRadioButton::clicked,this,&MainWindow::rBtn2Clicked);

    connect(ui->rBtn10,&QRadioButton::clicked,this,&MainWindow::rBtn10Clicked);

    connect(ui->rBtn16,&QRadioButton::clicked,this,&MainWindow::rBtn16Clicked);

    connect(ui->LeftBracketBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("(");
    });

    connect(ui->RightBracketBtn,&QPushButton::clicked,[=](){
        ui->Display->insert(")");
    });

    connect(ui->ClearBtn,&QPushButton::clicked,[=](){
        ui->Display->clear();
    });

    connect(ui->DivBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("/");
    });

    connect(ui->MulBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("*");
    });

    connect(ui->BackspaceBtn,&QPushButton::clicked,[=](){
        ui->Display->backspace();
    });

    connect(ui->RecBtn,&QPushButton::clicked,[=](){
        QString str=ui->Display->text();
        ui->Display->setText("1/(");
        ui->Display->insert(str);
        ui->Display->insert(")");
    });

    connect(ui->MSBtn,&QPushButton::clicked,this,&MainWindow::MSBtnClicked);

    connect(ui->MRBtn,&QPushButton::clicked,this,&MainWindow::MRBtnClicked);

    connect(ui->MplusBtn,&QPushButton::clicked,this,&MainWindow::MplusBtnClicked);

    connect(ui->MsubBtn,&QPushButton::clicked,this,&MainWindow::MsubBtnClicked);

    connect(ui->MCBtn,&QPushButton::clicked,this,&MainWindow::MCBtnClicked);

    connect(ui->SevenBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("7");
    });

    connect(ui->EightBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("8");
    });

    connect(ui->NineBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("9");
    });

    connect(ui->SubBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("-");
    });

    connect(ui->FourBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("4");
    });

    connect(ui->FiveBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("5");
    });

    connect(ui->SixBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("6");
    });

    connect(ui->AddBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("+");
    });

    connect(ui->OneBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("1");
    });

    connect(ui->TwoBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("2");
    });

    connect(ui->ThreeBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("3");
    });

    connect(ui->LeftCursorBtn,&QPushButton::clicked,[=](){
        ui->Display->cursorBackward(false);
    });

    connect(ui->RightCursorBtn,&QPushButton::clicked,[=](){
        ui->Display->cursorForward(false);
    });

    connect(ui->ZeroBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("0");
    });

    connect(ui->PointBtn,&QPushButton::clicked,[=](){
        ui->Display->insert(".");
    });

    connect(ui->DoubleZeroBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("00");
    });

    connect(ui->ABtn,&QPushButton::clicked,[=](){
        ui->Display->insert("A");
    });

    connect(ui->BBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("B");
    });

    connect(ui->CBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("C");
    });

    connect(ui->DBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("D");
    });

    connect(ui->EBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("E");
    });

    connect(ui->FBtn,&QPushButton::clicked,[=](){
        ui->Display->insert("F");
    });

    connect(ui->EqualBtn,&QPushButton::clicked,this,&MainWindow::EqualBtnClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rBtn2Clicked()
{
    ui->Display->jinzhi=2;
    ui->ABtn->setEnabled(false);
    ui->BBtn->setEnabled(false);
    ui->CBtn->setEnabled(false);
    ui->DBtn->setEnabled(false);
    ui->EBtn->setEnabled(false);
    ui->FBtn->setEnabled(false);
    ui->SevenBtn->setEnabled(false);
    ui->EightBtn->setEnabled(false);
    ui->NineBtn->setEnabled(false);
    ui->FourBtn->setEnabled(false);
    ui->FiveBtn->setEnabled(false);
    ui->SixBtn->setEnabled(false);
    ui->TwoBtn->setEnabled(false);
    ui->ThreeBtn->setEnabled(false);
}

void MainWindow::rBtn10Clicked()
{
    ui->Display->jinzhi=10;
    ui->ABtn->setEnabled(false);
    ui->BBtn->setEnabled(false);
    ui->CBtn->setEnabled(false);
    ui->DBtn->setEnabled(false);
    ui->EBtn->setEnabled(false);
    ui->FBtn->setEnabled(false);
    ui->SevenBtn->setEnabled(true);
    ui->EightBtn->setEnabled(true);
    ui->NineBtn->setEnabled(true);
    ui->FourBtn->setEnabled(true);
    ui->FiveBtn->setEnabled(true);
    ui->SixBtn->setEnabled(true);
    ui->TwoBtn->setEnabled(true);
    ui->ThreeBtn->setEnabled(true);
}

void MainWindow::rBtn16Clicked()
{
    ui->Display->jinzhi=16;
    ui->ABtn->setEnabled(true);
    ui->BBtn->setEnabled(true);
    ui->CBtn->setEnabled(true);
    ui->DBtn->setEnabled(true);
    ui->EBtn->setEnabled(true);
    ui->FBtn->setEnabled(true);
    ui->SevenBtn->setEnabled(true);
    ui->EightBtn->setEnabled(true);
    ui->NineBtn->setEnabled(true);
    ui->FourBtn->setEnabled(true);
    ui->FiveBtn->setEnabled(true);
    ui->SixBtn->setEnabled(true);
    ui->TwoBtn->setEnabled(true);
    ui->ThreeBtn->setEnabled(true);
}

void MainWindow::MSBtnClicked()
{
    QString str=ui->Display->text();
    if(str=="")
        return;
    int jinzhi=ui->Display->jinzhi;
    if(!Judge(str,jinzhi))
    {
        QMessageBox::critical(this,"错误","格式错误");
        return;
    }
    else
    {
        memory=Answer(str,jinzhi);
    }
}

void MainWindow::MRBtnClicked()
{
    int jinzhi=ui->Display->jinzhi;
    if(jinzhi==2)
    {
        char a[2]={'0','1'};
        QString memory2="";
        char b[1000];
        int i=memory;
        int j=0;
        while(i)
        {
            b[j]=a[i%2];
            i/=2;
            j++;
        }
        for(int i=j-1;i>=0;i--)
            memory2.append(b[i]);
        ui->Display->setText(memory2);
    }
    else if(jinzhi==10)
        ui->Display->setText(QString::number(memory));
    else
    {
        char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        QString memory16="";
        char b[1000];
        int i=memory;
        int j=0;
        while(i)
        {
            b[j]=a[i%16];
            i/=16;
            j++;
        }
        for(int i=j-1;i>=0;i--)
            memory16.append(b[i]);
        ui->Display->setText(memory16);
    }
}

void MainWindow::MplusBtnClicked()
{
    QString str=ui->Display->text();
    if(str=="")
        return;
    int jinzhi=ui->Display->jinzhi;
    if(!Judge(str,jinzhi))
    {
        QMessageBox::critical(this,"错误","格式错误");
        return;
    }
    else
    {
        memory+=Answer(str,jinzhi);
    }
}

void MainWindow::MsubBtnClicked()
{
    QString str=ui->Display->text();
    if(str=="")
        return;
    int jinzhi=ui->Display->jinzhi;
    if(!Judge(str,jinzhi))
    {
        QMessageBox::critical(this,"错误","格式错误");
        return;
    }
    else
    {
        memory-=Answer(str,jinzhi);
    }
}

void MainWindow::MCBtnClicked()
{
    memory=0;
}

void MainWindow::EqualBtnClicked()
{
    QString str=ui->Display->text();
    if(str=="")
        return;
    int jinzhi=ui->Display->jinzhi;
    if(!Judge(str,jinzhi))
    {
        QMessageBox::critical(this,"错误","格式错误");
        return;
    }
    else
    {
        double answer=Answer(str,jinzhi);
        if(jinzhi==2)
        {
            char a[2]={'0','1'};
            QString answer2="";
            char b[1000];
            int i=answer;
            int j=0;
            double k=answer-i;
            if(i>0)
            {
                while(i)
                {
                    b[j]=a[i%2];
                    i/=2;
                    j++;
                }
                for(int i=j-1;i>=0;i--)
                    answer2.append(b[i]);
            }
            else if(i==0)
            {
                answer2.append('0');
            }
            else
            {
                i=0-i;
                k=0-k;
                answer2.append('-');
                while(i)
                {
                    b[j]=a[i%2];
                    i/=2;
                    j++;
                }
                for(int i=j-1;i>=0;i--)
                    answer2.append(b[i]);
            }
            if(k!=0)
            {
                answer2.append('.');
                for(int i=0;i<6;i++)
                {
                    int l=k*2;
                    k=k*2-l;
                    answer2.append(a[l]);
                }
            }
            ui->Display->setText(answer2);
        }
        else if(jinzhi==10)
            ui->Display->setText(QString::number(answer));
        else
        {
            char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
            QString answer16="";
            char b[1000];
            int i=answer;
            int j=0;
            double k=answer-i;
            if(i>0)
            {
                while(i)
                {
                    b[j]=a[i%16];
                    i/=16;
                    j++;
                }
                for(int i=j-1;i>=0;i--)
                    answer16.append(b[i]);
            }
            else if(i==0)
            {
                answer16.append('0');
            }
            else
            {
                k=0-k;
                i=0-i;
                answer16.append('-');
                while(i)
                {
                    b[j]=a[i%16];
                    i/=16;
                    j++;
                }
                for(int i=j-1;i>=0;i--)
                    answer16.append(b[i]);
            }
            if(k!=0)
            {
                answer16.append('.');
                for(int i=0;i<6;i++)
                {
                    int l=k*16;
                    k=k*16-l;
                    answer16.append(a[l]);
                }
            }
            ui->Display->setText(answer16);
        }
    }
}

bool MainWindow::Judge(QString str,int jinzhi)
{
    int n=str.length();
    if(str[0]==')'||str[0]=='.'||str[0]=='*'||str[0]=='/'||str[n-1]=='.'||str[n-1]=='+'||str[n-1]=='-'||str[n-1]=='*'||str[n-1]=='/'||str[n-1]=='(')
        return false;
    int n1=0,n2=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')
            n1++;
        if(str[i]==')')
            n2++;
    }
    if(n1!=n2)
        return false;
    for(int i=0;i<n-1;i++)
    {
        if(((str[i]>='0'&&str[i]<='9')||(str[i]>='A'&&str[i]<='F')||str[i]=='.')&&str[i+1]=='(')
            return false;
        else if((str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='(')&&str[i+1]=='(')
            continue;
        else if(str[i]=='('&&(str[i+1]=='+'||str[i+1]=='-'||str[i+1]=='('))
            continue;
        else if(str[i]==')'&&(str[i+1]=='+'||str[i+1]=='-'||str[i+1]=='*'||str[i+1]=='/'||str[i+1]==')'))
            continue;
        else if((str[i]=='.'||str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='('||str[i]==')')&&(str[i+1]=='.'||str[i+1]=='+'||str[i+1]=='-'||str[i+1]=='*'||str[i+1]=='/'||str[i+1]=='('||str[i+1]==')'))
            return false;
    }
    if(jinzhi==2)
    {
        for(int i=0;i<n;i++)
        {
            if(str[i]!='0'&&str[i]!='1'&&str[i]!='.'&&str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='('&&str[i]!=')')
                return false;
        }
    }
    else if(jinzhi==10)
    {
        for(int i=0;i<n;i++)
        {
            if((str[i]<'0'||str[i]>'9')&&str[i]!='.'&&str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='('&&str[i]!=')')
                return false;
        }
    }
    else if(jinzhi==16)
    {
        for(int i=0;i<n;i++)
        {
            if((str[i]<'0'||str[i]>'9')&&(str[i]<'A'||str[i]>'F')&&str[i]!='.'&&str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='('&&str[i]!=')')
                return false;
        }
    }
    return true;
}

QString MainWindow::zhongToHou(QString Qzhong)
{
    std::string zhong=Qzhong.toStdString();
    int n=Qzhong.length();
    QStack<char> fu;
    QString hou=0;
    int ln=0;
    for(int i=0;i<n;i++)
    {
        if((zhong[i]>='0'&&zhong[i]<='9')||(zhong[i]>='A'&&zhong[i]<='F')||zhong[i]=='.')
            hou.append(zhong[i]);
        else if(zhong[i]=='(')
        {
            ln++;
            fu.push(zhong[i]);
        }
        else if(zhong[i]==')')
        {
            while(true)
            {
                if(fu.top()=='(')
                    break;
                else
                    hou.append(fu.pop());
            }
            ln--;
            fu.pop();
        }
        else
        {
            hou.append('|');
            if(fu.isEmpty())
            {
                fu.push(zhong[i]);
            }
            else
            {
                if(ln!=0)
                {
                    if(fu.top()=='(')
                    {
                        fu.push(zhong[i]);
                    }
                    else
                    {
                        if(getPriority(zhong[i],fu.top())=='>')
                            fu.push(zhong[i]);
                        else
                        {
                            while((!fu.top()=='(')&&(getPriority(zhong[i],fu.top())!='>'))
                            {
                                hou.append(fu.pop());
                            }
                            fu.push(zhong[i]);
                        }
                    }
                }
                else
                {
                    if(getPriority(zhong[i],fu.top())=='>')
                        fu.push(zhong[i]);
                    else
                    {
                        while((!fu.isEmpty())&&(getPriority(zhong[i],fu.top())!='>'))
                        {
                            hou.append(fu.pop());
                        }
                        fu.push(zhong[i]);
                    }
                }
            }
        }
    }
    while(!fu.isEmpty())
        hou.append(fu.pop());
    return hou;
}

char MainWindow::getPriority(char c1, char c2)
{
    char Priority[4][4]={'=','=','<','<','=','=','<','<','>','>','=','=','>','>','=','='};
    int i,j;
    switch (c1)
    {
    case '+':i=0;break;
    case '-':i=1;break;
    case '*':i=2;break;
    case '/':i=3;break;
    default:break;
    }
    switch (c2)
    {
    case '+':j=0;break;
    case '-':j=1;break;
    case '*':j=2;break;
    case '/':j=3;break;
    default:break;
    }
    return Priority[i][j];
}

double MainWindow::Answer(QString zhong, int jinzhi)
{
    if(zhong[0]=='+'||zhong[0]=='-')
        zhong.insert(0,'0');
    for(int i=0;i<zhong.length()-1;i++)
    {
        if(zhong[i]=='('&&(zhong[i+1]=='+'||zhong[i+1]=='-'))
            zhong.insert(i+1,'0');
    }
    QString hou=zhongToHou(zhong);
    qDebug()<<hou;
    int n=hou.length();
    QStack<double> s;
    QString shu="";
    int i=0;
    while(i<n)
    {
        if((hou[i]>='0'&&hou[i]<='9')||(hou[i]>='A'&&hou[i]<='F')||hou[i]=='.')
            shu.append(hou[i]);
        else
        {
            if(shu!="")
            {
                double num=strToDouble(shu,jinzhi);
                qDebug()<<num;
                s.push(num);
                shu="";
            }
            if(hou[i]=='|')
            {
                i++;
                continue;
            }
            else if(hou[i]=='+')
            {
                double b=s.pop();
                double a=s.pop();
                double c=a+b;
                s.push(c);
            }
            else if(hou[i]=='-')
            {
                double b=s.pop();
                double a=s.pop();
                double c=a-b;
                s.push(c);
            }
            else if(hou[i]=='*')
            {
                double b=s.pop();
                double a=s.pop();
                double c=a*b;
                s.push(c);
            }
            else if(hou[i]=='/')
            {
                double b=s.pop();
                if(b==0)
                {
                    QMessageBox::critical(this,"错误","数学错误");
                }
                else
                {
                    double a=s.pop();
                    double c=a/b;
                    s.push(c);
                }
            }
        }
        i++;
    }
    if(s.isEmpty())
        s.push(strToDouble(shu,jinzhi));
    double answer=s.pop();
    return answer;
}

double MainWindow::strToDouble(QString QStr, int jinzhi)
{
    std::string str=QStr.toStdString();
    int n=str.length();
    if(jinzhi==10)
    {
        double ret=0;
        int dotMarker=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='.')
                dotMarker=i;
            else
                ret=ret*10+(str[i]-'0');
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
                ret+=(str[i]-'0')*pow(2,dotMarker-i-1);
            for(int i=dotMarker+1;i<n;i++)
                ret+=(str[i]-'0')*pow(2,i-n);
        }
        else
        {
            for(int i=0;i<n;i++)
                ret+=(str[i]-'0')*pow(2,n-i-1);
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
                    ret+=(str[i]-'0')*pow(16,dotMarker-i-1);
                if(str[i]>='A'&&str[i]<='F')
                    ret+=(str[i]-'A'+10)*pow(16,dotMarker-i-1);
            }
            for(int i=dotMarker+1;i<n;i++)
            {
                if(str[i]>='0'&&str[i]<='9')
                    ret+=(str[i]-'0')*pow(16,i-n);
                if(str[i]>='A'&&str[i]<='F')
                    ret+=(str[i]-'A'+10)*pow(16,i-n);
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(str[i]>='0'&&str[i]<='9')
                    ret+=(str[i]-'0')*pow(16,n-i-1);
                if(str[i]>='A'&&str[i]<='F')
                    ret+=(str[i]-'A'+10)*pow(16,n-i-1);
            }
        }
        return ret;
    }
}
