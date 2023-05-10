#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>
#include <QDebug>
#include<QTableView>
#include <QSqlError>

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    Window= new db_add1;
    database= QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:\\testDB.db");

    if(database.open())
    {
        model = new QSqlTableModel(this,database);
        model->setTable("Middle_stations");
        model->select();
        ui->tableView->setModel(model); }
    else {
        QMessageBox::warning(this,"Database","Ошибка, база данных не открыта");}

}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_pushButton_clicked()
{ Window->show();

}

void SecondWindow::on_pushButton_2_clicked()
{ QString roadnum,trainum,starts,ends,times,timee;
    roadnum=ui->lineEdit->text();
    trainum=ui->lineEdit_2->text();
    starts=ui->lineEdit_3->text();
    ends=ui->lineEdit_4->text();
    times=ui->lineEdit_5->text();
    timee=ui->lineEdit_6->text();
    QSqlQuery qry;
    qry.prepare("INSERT INTO RoadMAp (Road_num, Train_num, Start_station, End_station, Start_time, End_time) VALUES (:Road_num, :Train_num, :Start_station, :End_station, :Start_time, :End_time);");
    qry.bindValue(":Road_num", roadnum);
    qry.bindValue(":Train_num", trainum);
    qry.bindValue(":Start_station", starts);
    qry.bindValue(":End_station", ends);
    qry.bindValue(":Start_time", times);
    qry.bindValue(":End_time", timee);
 if(qry.exec()){
 QMessageBox::information(this,"TITTLE","Saved");
 } else{
 QMessageBox::critical(this,"TITTLE",qry.lastError().text());
 }

}
