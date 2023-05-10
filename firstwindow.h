#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>
#include <secondwindow.h>
#include <QMessageBox>
#include <widget.h>
QT_BEGIN_NAMESPACE
namespace Ui { class FirstWindow; }
QT_END_NAMESPACE

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    FirstWindow(QWidget *parent = nullptr);
    ~FirstWindow();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FirstWindow *ui;
    SecondWindow *Window;
    widget *secret_window;
};
#endif // FIRSTWINDOW_H
