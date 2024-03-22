#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

QString USERNAME = "alex";
QString PASSWORD = "123";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QPixmap pix("/home/alexander/QtCreator_Applications/LoginApp/erdbeere.jpg"); // absolute path
    QPixmap pix(":/resources/img/erdbeere.jpg"); // relative path
    ui->pic_label->setPixmap(pix.scaled(ui->pic_label->width(),ui->pic_label->height(),Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->status_label);
    ui->statusbar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_pushButton_clicked()
{
    QString username = ui->username_lineEdit->text();
    QString password = ui->password_lineEdit->text();

    if(username == USERNAME && password == PASSWORD)
    {
        // QMessageBox::information(this, "Login", "Logged in!");
        // hide();        
        // sD = new SecDialog(this);
        // sD->show();

        ui->statusbar->showMessage("Logged in!", 5000);
        ui->status_label->setText("Logged in!");
    }
    else
    {
        // QMessageBox::warning(this, "Login", "Password or username incorrect!");
        ui->statusbar->showMessage("Password or username incorrect!", 5000);
        ui->status_label->setText("Password or username incorrect!");
    }
}

