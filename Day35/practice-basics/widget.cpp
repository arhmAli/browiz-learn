#include "widget.h"
#include <QPushButton>
#include <QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn=new QPushButton(this);
    btn->setText("Click me");
    // I can use this approach by creating a local instance and then assigning it to our headers private
    //     variable

    // QLabel *lbl=new QLabel(this);
    // lbl->setText("arham");
    // label=lbl;

    // or we can simply do
    label=new QLabel("arham",this);
    // The basic concept here is that im accessing the variable "label"
    // of my class which is connected with this file that is widget.h
    // so if i try to access it directly i can also do that and i can
    // also do indirect accessing

    connect(btn,SIGNAL(clicked()),this,SLOT(checkVal()));

}

Widget::~Widget() {}

void Widget::checkVal(){
    if(label->text()=="arham"){
        label->setText("Success");
    }
}
