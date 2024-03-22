#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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
     * void             about
     * void             aboutQt
     * StandardButton   critical
     * StandardButton   information
     * StandardButton   question
     * StandardButton   warning
     */
    QMessageBox::about(this, "My Title", "THIS IS THE MESSAGE!");
    QMessageBox::aboutQt(this, "My Title");
    QMessageBox::critical(this, "Critical Error", "ERROR!");
    QMessageBox::information(this, "My Title", "Information!");
    QMessageBox::warning(this, "Warning", "Warning!");

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Question", "Yes or No?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
        QApplication::quit();
    else
        qDebug() << "No is  clicked!";
}

