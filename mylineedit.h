#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QLineEdit>
#include<QEvent>
#include<QFocusEvent>

class myLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit myLineEdit(QWidget *parent = nullptr);
    int jinzhi=10;

signals:

public slots:

protected:

};

#endif // MYLINEEDIT_H
