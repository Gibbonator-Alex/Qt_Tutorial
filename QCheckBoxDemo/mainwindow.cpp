#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox_2->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this, "CHECKED", "Yes user likes apples");
    }
    else
    {
        QMessageBox::information(this, "CHECKED", "No user doesnt like apples");
    }
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1)
    {
        QMessageBox::information(this, "CHECKED", "Yes user likes apples");
    }
    else
    {
        QMessageBox::information(this, "CHECKED", "No user doesnt like apples");
    }
}

