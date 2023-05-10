#include "db_add1.h"
#include "ui_db_add1.h"
#include <QString>
#include <QSqlQuery>
#include<QTableView>
#include <QDebug>
#include <QMessageBox>

db_add1::db_add1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::db_add1)
{
    ui->setupUi(this);
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:\\testDB.db");


}

db_add1::~db_add1()
{
    delete ui;
}

void db_add1::on_pushButton_clicked()
{ QString roadnum,trainum,starts,ends,times,timee;
   roadnum=ui->lineEdit->text();
   trainum=ui->lineEdit_2->text();
   starts=ui->lineEdit_3->text();
   ends=ui->lineEdit_4->text();
   times=ui->lineEdit_5->text();
   timee=ui->lineEdit_6->text();
   QSqlQuery qry;
   qry.prepare("insert into RoadMAp (Road_num, Train_num, Start_station, End_station, Start_time, End_time) "
               "values ('"+roadnum+"','"+trainum+"','"+starts+"','"+ends+"','"+times+"','"+timee+"')");
if(qry.exec()){
QMessageBox::information(this,"TITTLE","Saved");
} else{
QMessageBox::critical(this,"TITTLE","NOT SAVES");
}
     }


