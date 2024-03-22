#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>

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
    QString file_name = QFileDialog::getOpenFileName(this, "Title", QDir::homePath());
    QMessageBox::information(this, "Title", file_name);
}


void MainWindow::on_write_pushButton_clicked()
{
    QFile file("/home/alexander/QtCreator_Applications/QFileDialogDemo/myText.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "File not open", "File not open");
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_read_pushButton_clicked()
{
    QString filter = "All Files (*) ;; Text (*.txt)";
    QString file_name = QFileDialog::getOpenFileName(this, "Open File", QDir::homePath(), filter);
    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "File not open", "File not open");
    }
    else{
        QTextStream in(&file);
        QString text = in.readAll();
        ui->plainTextEdit->setPlainText(text);
        file.close();
    }
}

