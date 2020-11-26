#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog2.h"
#include "dialog4.h"


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
    Dialog Dialog ;
    Dialog.setModal(true);
    Dialog.exec();

}






void MainWindow::on_pushButton_2_clicked()
{
    Dialog4 Dialog4 ;
    Dialog4.setModal(true);
    Dialog4.exec();

}
