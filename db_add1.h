#ifndef DB_ADD1_H
#define DB_ADD1_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class db_add1;
}

class db_add1 : public QDialog
{
    Q_OBJECT

public:
    explicit db_add1(QWidget *parent = nullptr);
    ~db_add1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::db_add1 *ui;
     QSqlDatabase database;
      QSqlQuery *qry;
};

#endif // DB_ADD1_H
