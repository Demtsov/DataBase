#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QSqlTableModel>
#include<QString>
#include <QtCore>
#include <db_add1.h>
namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SecondWindow *ui;
    QSqlDatabase database;
        QSqlQuery *qry;
        QSqlTableModel *model;
        db_add1 *Window;
};

#endif // SECONDWINDOW_H
