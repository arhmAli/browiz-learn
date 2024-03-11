// loggedin.cpp
#include "loggedin.h"
#include "ui_loggedin.h"

LoggedIn::LoggedIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoggedIn)
{
    ui->setupUi(this);
}

LoggedIn::~LoggedIn()
{
    delete ui;
}
