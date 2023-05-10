#ifndef WIDGET_H
#define WIDGET_H

#include <QDialog>
#include <QMainWindow>
#include <QWidget>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QSlider>

namespace Ui {
class widget;
}

class widget : public QDialog
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);
    ~widget();
private slots:
    void on_btn_add_clicked();
    void slotSetMediaPosition(int);

    void on_m_psldPosition_sliderMoved(int position);
    void on_positionChanged(qint64 position);
    void on_durationChanged(qint64 position);

    void on_h_slider_sliderMoved(int position);
    QString gett_time(qint64 n);
    void on_pushButton_clicked();

    void on_sl_volume_sliderMoved(int position);

    void on_sl_volume_windowIconTextChanged(const QString &iconText);


private:
    Ui::widget *ui;
    QStandardItemModel *m_playListModel;
        QMediaPlayer *m_player;
        QMediaPlaylist *m_playlist;
        QSlider* m_psldPosition;
};

#endif // WIDGET_H
