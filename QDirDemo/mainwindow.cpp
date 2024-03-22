#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
     * QDir dir("/home/alexander/QtCreator_Applications/QDirDemo");
     * if(dir.exists())
     * {
     *    QMessageBox::information(this, "Title", "True");
     * }
     * else
     * {
     *    QMessageBox::information(this, "Title", "False");
     * }
     */

    QDir dir;
    foreach(QFileInfo var, dir.drives())
        ui->comboBox->addItem(var.absoluteFilePath());

    QDir dir_2("/home/alexander/QtCreator_Applications");
    foreach(QFileInfo var, dir_2.entryInfoList())
    {
        if(var.isDir())
            ui->listWidget->addItem("Dir: " + var.absoluteFilePath());
        if(var.isFile())
            ui->listWidget->addItem("File: " + var.absoluteFilePath());

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QDir dir("/home/alexander/YYY");
    if(dir.exists()){
        QMessageBox::information(this, "Title", "Exists");
    }
    else{
        dir.mkpath("YYY");
    }

}

