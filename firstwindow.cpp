#include "firstwindow.h"
#include "ui_firstwindow.h"
#include <QMessageBox>
FirstWindow::FirstWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
    Window= new SecondWindow;
    secret_window= new widget;
}

FirstWindow::~FirstWindow()
{
    delete ui;
}


void FirstWindow::on_pushButton_clicked()
{
    QString login= ui->lineEdit->text();
    QString password= ui->lineEdit_2->text();
    if(login=="1234" && password=="1234"){
Window->show();
    } else {
        QMessageBox::warning(this,"Autorization","SHUT UP FUCK YOU GANDON SHTOPANNIY");
    }
}

void FirstWindow::on_pushButton_2_clicked()
{ secret_window->show();

}
