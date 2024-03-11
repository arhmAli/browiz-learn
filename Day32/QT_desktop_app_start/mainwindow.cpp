#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loggedin.h"
#include "windows.h"
#include <QTimer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginBtn_clicked()
{
    QString value = ui->username->text();

    if(value == "Arham")
    {
        ui->result->setText("Success");
        // Sleep(3000);
        QTimer::singleShot(3000,this,&MainWindow::close);
        // this->close();
    }
}
