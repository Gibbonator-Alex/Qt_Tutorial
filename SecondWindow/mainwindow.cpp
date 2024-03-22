#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    /*
     * SecDialog sD;
     * sD.setModal(true);
     * sD.exec();
     */

    //hide();

    sD = new SecDialog(this);
    sD->show();
}

