#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/rec/img/new.png"), "Alex");
    ui->comboBox->addItem(QIcon(":/rec/img/close.jpg"),"Max");
    ui->comboBox->addItem(QIcon(":/rec/img/open_file.png"), "Daniel");
    ui->comboBox->addItem("John");

    for(int i = 0; i < 10; i++)
        ui->comboBox->addItem(QString::number(i) + " name");

    ui->comboBox->insertItem(3, "NEW TEXT");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // QMessageBox::information(this, "Title", ui->comboBox->currentText());
    QMessageBox::information(this, "Title", QString::number(ui->comboBox->currentIndex()));
}

