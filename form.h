#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMouseEvent>
#include <QTimer>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);

    void update_music_list();

    ~Form();

private slots:
    void on_PushAdd_clicked();

    void on_ListMusic_clicked(const QModelIndex &index);

    void on_StartStop_clicked();

    void on_VolumnButton_clicked();

    void on_VolumnSlider_sliderMoved(int position);

    void mousePressEvent(QMouseEvent* event);

    void on_PreviousSong_clicked();

    void on_NextSong_clicked();

    void on_Mode_clicked();

    void on_TimeSlider_sliderMoved(int position);

    void get_Duration(qint64 dur);

    void broadcast(qint64 now);

    void end_of_song(QMediaContent medianow);

    void change_song(QMediaContent medianow);

    void on_VolumnSlider_sliderReleased();

private:
    Ui::Form *ui;

    QMediaPlayer* effect;

    QMediaPlaylist* playlist;

    bool stop, play;

    int mode, volumn, minute, second, duration;

    QTimer* time;
};

#endif // FORM_H
