#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*!this prints pushbotton when you press*/
void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

/*!this prints hello when you brees button*/
void MainWindow::on_pushButton_2_clicked()
{
    std::cout << " HEllo" << std::endl;
}

/*!this prints on when your press*/
void MainWindow::on_checkBox_clicked()
{
     std::cout << " on" << std::endl;
}

/*! this prints out goodby when you press*/
void MainWindow::on_pushButton_3_clicked()
{
    std::cout << " Goodbye" << std::endl;
}
