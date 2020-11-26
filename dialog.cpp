#include "dialog.h"
#include "ui_dialog.h"
#include "dialog1.h"
#include "mainwindow.h"
#include "dialog3.h"
#include <QMessageBox>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;

}
void Dialog::on_pushButton_clicked()
{
    Dialog1 Dialog1 ;
    Dialog1.setModal(true);
    Dialog1.exec();

}









