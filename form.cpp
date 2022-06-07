#include "form.h"
#include "ui_form.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDir>
#include <QMetaType>
#include <QString>
#include <QFile>
#include <QLabel>
#include <qDebug>
#include <QString>
#include <QTimer>
#include <QUrl>
#include <QFont>
#include <QPalette>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    setMinimumSize(900, 700);
    setMaximumSize(900, 700);

    QIcon icon1(":/new/pictures/img/11.jpg");
    setWindowIcon(icon1);
    setWindowTitle("音乐播放器");

    ui -> background -> move(0, 0);
    ui -> background -> resize(900, 700);
    ui -> background -> setStyleSheet("background-color : white");
    ui -> background -> setText("");

    effect = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);
    playlist -> setPlaybackMode(QMediaPlaylist::Loop);

    ui -> ListMusic -> move(0, 30);
    ui -> ListMusic -> resize(150, 600);
    ui -> ListMusic -> clear();
    ui -> ListMusic -> setSortingEnabled(true);
    ui -> ListMusic -> setStyleSheet("background-color: rgb(240, 240, 240); "
                                     "border: transparent; ");
    QFont font3;
    font3.setPixelSize(15);
    ui -> ListMusic -> setFont(font3);
    Form::update_music_list();

    ui -> PushAdd -> move(850, 650);
    QIcon icon2(":/new/pictures/img/add music.png");
    ui -> PushAdd -> setText("");
    ui -> PushAdd -> setIcon(icon2);
    ui -> PushAdd -> setIconSize(ui -> PushAdd -> size());
    ui -> PushAdd -> resize(35, 35);

    ui -> SongCnt -> move(70, 18);
    ui -> SongCnt -> setFixedWidth(71);

    ui -> State -> setText("");
    ui -> State -> resize(750, 150);
    ui -> State -> move(150, 480);
    QPalette palette1;
    palette1.setColor(QPalette::Background, QColor(0, 200, 0));
    ui -> State -> setAutoFillBackground(true);
    ui -> State -> setPalette(palette1);

    ui -> StartStop -> setText("");
    ui -> StartStop -> move(480, 525);
    ui -> StartStop -> setAutoFillBackground(true);
    ui -> StartStop -> resize(70, 70);
    ui -> StartStop -> setStyleSheet("background-color: rgb(0, 100, 0); border-radius: 35px;");
    QIcon icon3(":/new/pictures/img/StartStop.png");
    ui -> StartStop -> setIconSize(QSize(40, 40));
    ui -> StartStop -> setIcon(icon3);

    volumn = 100;

    ui -> VolumnButton -> move(830, 535);
    ui -> VolumnButton -> setText("");
    ui -> VolumnButton -> resize(50, 50);
    ui -> VolumnButton -> setStyleSheet("background-color: rgb(0, 100, 0); border-radius: 25px;");
    QIcon icon4(":/new/pictures/img/sound.png");
    ui -> VolumnButton -> setIconSize(QSize(30, 30));
    ui -> VolumnButton -> setIcon(icon4);

    ui -> VolumnSlider -> setMaximumHeight(60);
    ui -> VolumnSlider -> setMaximumWidth(10);
    ui -> VolumnSlider -> move(850, 475);
    ui -> VolumnSlider -> setSliderPosition(100);
    ui -> VolumnSlider -> hide();

    ui -> NextSong -> move(570, 535);
    ui -> NextSong -> setText("");
    ui -> NextSong -> resize(50, 50);
    ui -> NextSong -> setStyleSheet("background-color: rgb(0, 100, 0); border-radius: 25px;");
    QIcon icon5(":/new/pictures/img/NextSong.png");
    ui -> NextSong -> setIconSize(QSize(30, 30));
    ui -> NextSong -> setIcon(icon5);

    ui -> PreviousSong -> move(410, 535);
    ui -> PreviousSong -> setText("");
    ui -> PreviousSong -> resize(50, 50);
    ui -> PreviousSong -> setStyleSheet("background-color: rgb(0, 100, 0); border-radius: 25px;");
    QIcon icon6(":/new/pictures/img/PreviousSong.png");
    ui -> PreviousSong -> setIconSize(QSize(30, 30));
    ui -> PreviousSong -> setIcon(icon6);

    ui -> Mode -> move(670, 535);
    ui -> Mode -> setText("");
    ui -> Mode -> resize(50, 50);
    ui -> Mode -> setStyleSheet("background-color: rgb(0, 100, 0); border-radius: 25px;");
    QIcon icon7(":/new/pictures/img/Loop.png");
    ui -> Mode -> setIconSize(QSize(30, 30));
    ui -> Mode -> setIcon(icon7);

    ui -> ModeLabel -> move(700, 590);
    ui -> ModeLabel -> setText("");
    ui -> ModeLabel -> resize(57, 20);
    ui -> ModeLabel -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
    ui -> ModeLabel -> hide();

    time = new QTimer(this);
    connect(time, SIGNAL(timeout()), ui -> ModeLabel, SLOT(close()));

    ui -> TimeSlider -> move(170, 460);
    ui -> TimeSlider -> setFixedSize(650, 10);

    ui -> Time -> move(830, 460);
    ui -> Time -> setFixedWidth(100);
    ui -> Time -> setText("00:00/00:00");

    connect(effect, SIGNAL(durationChanged(qint64)), this, SLOT(get_Duration(qint64)));
    connect(effect, SIGNAL(positionChanged(qint64)), this, SLOT(broadcast(qint64)));
    connect(effect, SIGNAL(currentMediaChanged(QMediaContent)), this, SLOT(end_of_song(QMediaContent)));
    connect(effect, SIGNAL(currentMediaChanged(QMediaContent)), this, SLOT(change_song(QMediaContent)));

    ui -> Title -> move(375, -20);
    ui -> Title -> setText("我的音乐世界");
    ui -> Title -> setFixedSize(500, 100);
    QFont font1;
    font1.setPointSize(40);
    ui -> Title -> setFont(font1);

    ui -> Playing -> move(150, 480);
    QPalette pal;
    pal.setColor(QPalette::Background, Qt::white);
    ui -> Playing -> setAutoFillBackground(true);
    ui -> Playing -> setPalette(pal);
    ui -> Playing -> resize(200, 30);
    QFont font2;
    font2.setPointSize(15);
    ui -> Playing -> setFont(font2);
    ui -> Playing -> setText("播放中：无");

    ui -> LabelVolumn -> setText("音量");
    ui -> LabelVolumn -> resize(30, 20);
    ui -> LabelVolumn -> move(870, 575);
    ui -> LabelVolumn -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
//    ui -> LabelVolumn -> hide();

    ui -> LabelAdd -> setText("添加音频");
    ui -> LabelAdd -> resize(57, 20);
    ui -> LabelAdd -> move(840, 680);
    ui -> LabelAdd -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
//    ui -> LabelAdd -> hide();

    ui -> LabelMode -> setText("模式");
    ui -> LabelMode -> resize(30, 20);
    ui -> LabelMode -> move(700, 565);
    ui -> LabelMode -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
//    ui -> LabelMode -> hide();

    ui -> LabelNext -> setText("下一首");
    ui -> LabelNext -> resize(42, 20);
    ui -> LabelNext -> move(600, 565);
    ui -> LabelNext -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
//    ui -> LabelNext -> hide();

    ui -> LabelPrevious -> setText("上一首");
    ui -> LabelPrevious -> resize(42, 20);
    ui -> LabelPrevious -> move(440, 565);
    ui -> LabelPrevious -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
//    ui -> LabelPrevious -> hide();

    ui -> LabelSS -> setText("暂停");
    ui -> LabelSS -> resize(30, 20);
    ui -> LabelSS -> move(530, 575);
    ui -> LabelSS -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
//    ui -> LabelSS -> hide();

    ui -> Face -> setText("");
    ui -> Face -> move(297, 80);
    ui -> Face -> resize(456, 370);
    QImage* img = new QImage;
    img -> load(":/new/pictures/img/封面.png");
    ui -> Face -> setPixmap(QPixmap::fromImage((*img).scaled(ui->Face->width(), ui->Face->height(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation)));

    stop = 1;

    ui -> Volumn -> setText("100");
    ui -> Volumn -> setStyleSheet("background-color: rgb(255, 255, 255); border:1px solid #000000");
    ui -> Volumn -> move(860, 500);
    ui -> Volumn -> resize(30, 20);
    ui -> Volumn -> hide();


}

Form::~Form()
{
    delete ui;
}

void Form::update_music_list(){
    QDir dir("./music");
    QFileInfoList list = dir.entryInfoList();
    ui -> ListMusic -> clear();
    int cnt = 0;
    for(int i = 0;i < list.size();i ++){
        QFileInfo fileinfo = list.at(i);
        if(fileinfo.isDir()) continue;
        else{
            if(fileinfo.suffix() == "wav" || fileinfo.suffix() == "mp3"){
                playlist -> insertMedia(playlist->mediaCount(), QUrl(fileinfo.absoluteFilePath()));
                ui -> ListMusic -> insertItem(1, fileinfo.baseName());
                cnt ++;
            }
        }
    }
    ui -> SongCnt -> setText("共有音乐" + QString::number(cnt) + "首");
    effect -> setPlaylist(playlist);
}

void Form::on_PushAdd_clicked()
{
    QFileDialog *fileDialog = new QFileDialog(this);
    fileDialog->setWindowTitle(tr("打开音频"));
    fileDialog->setFileMode(QFileDialog::ExistingFiles);
    fileDialog->setViewMode(QFileDialog::Detail);
    QStringList fileNames;
    if(fileDialog->exec()) fileNames = fileDialog->selectedFiles();
    int cnt1 = 0, cnt2 = 0;
    for(auto tmp : fileNames){
        QString Old = tmp;
        if(Old.right(4).toLower() != ".wav" && Old.right(4).toLower() != ".mp3"){
            cnt2 += 1;
            QMessageBox* msgBox = new QMessageBox(this);
            msgBox -> setText(Old + "文件格式发生错误（正确格式为wav, mp3）");
            msgBox -> setWindowTitle("发生错误");
            msgBox -> exec();
            continue;
        }
        int siz = Old.size();
        int rig = 0;
        for(int i = siz - 1;i >= 0;i --){
            if(Old[i] != '/') rig ++;
            else break;
        }
        QString New = "./music/" + Old.right(rig);
        int x = QFile::rename(Old, New);
        if(x == 0){
            QMessageBox* msgBox = new QMessageBox(this);
            msgBox -> setText(Old + "文件移动失败（可能是因为目标文件已经被打开、新文件目录下已经存在或者新文件路径没有写全等原因）");
            msgBox -> setWindowTitle("发生错误");
            msgBox -> exec();
        }
        cnt1 += x;
    }

    if(cnt1){
        QMessageBox* msgBox = new QMessageBox(this);
        msgBox -> setText("所有合法文件均移动成功");
        msgBox -> setWindowTitle("移动完成");
        msgBox -> show();
        update_music_list();
    }
    ui -> VolumnSlider -> hide();

}

void Form::on_ListMusic_clicked(const QModelIndex &index)
{
    if(playlist -> currentIndex() == index.row() && play) return;
    play = 1;
    playlist -> setCurrentIndex(index.row());
    QIcon icon3(":/new/pictures/img/StartStop2.png");
    ui -> StartStop -> setIcon(icon3);
    effect -> play();
    ui -> VolumnSlider -> hide();
}

void Form::get_Duration(qint64 dur){
    int playtime = dur / 1000;
    duration = dur;
    minute = playtime / 60;
    second = playtime % 60;
    QString minuteStr = QString::number(minute);
    if(minuteStr.size() == 1) minuteStr = "0" + minuteStr;
    QString secondStr = QString::number(second);
    if(secondStr.size() == 1) secondStr = "0" + secondStr;
    if(play) ui -> Time -> setText("00:00/" + minuteStr + ":" + secondStr);
}

void Form::on_StartStop_clicked()
{
    if(effect -> currentMedia().isNull()) return ;
    if(stop){
        qDebug() << 1;
        QIcon icon3(":/new/pictures/img/StartStop.png");
        ui -> StartStop -> setIcon(icon3);
        effect -> pause();
    }else{
        qDebug() << 0;
        QIcon icon3(":/new/pictures/img/StartStop2.png");
        ui -> StartStop -> setIcon(icon3);
        effect -> play();
    }
    if(stop) stop = false; else stop = true;
    ui -> VolumnSlider -> hide();
}

void Form::on_VolumnButton_clicked()
{
    ui -> VolumnSlider -> show();
}

void Form::on_VolumnSlider_sliderMoved(int position)
{
    volumn = position;
    effect -> setVolume(volumn);
    ui -> Volumn -> show();
    ui -> Volumn -> setText(QString::number(position));
}

void Form::mousePressEvent(QMouseEvent *event){
    Q_UNUSED(event);
    ui -> VolumnSlider -> hide();
}

void Form::on_PreviousSong_clicked()
{
    if(!play) return;
    playlist -> previous();
    ui -> VolumnSlider -> hide();
}

void Form::on_NextSong_clicked()
{
    if(!play) return;
    playlist -> next();
    ui -> VolumnSlider -> hide();
}

void Form::on_Mode_clicked()
{
    (mode += 1) %= 3;
    if(mode == 0){
        QIcon icon(":/new/pictures/img/Loop.png");
        ui -> Mode -> setIcon(icon);
        playlist -> setPlaybackMode(QMediaPlaylist::Loop);
        ui -> ModeLabel -> setText("循环模式");
    }else if(mode == 1){
        QIcon icon(":/new/pictures/img/RandLoop.png");
        ui -> Mode -> setIcon(icon);
        playlist -> setPlaybackMode(QMediaPlaylist::Random);
        ui -> ModeLabel -> setText("随机模式");
    }else{
        QIcon icon(":/new/pictures/img/SingleLoop.png");
        ui -> Mode -> setIcon(icon);
        playlist -> setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        ui -> ModeLabel -> setText("单曲模式");
    }
    ui -> ModeLabel -> show();
    time -> start(500);
    ui -> VolumnSlider -> hide();
}

void Form::on_TimeSlider_sliderMoved(int position)
{
    if(!play){
        ui -> TimeSlider -> setSliderPosition(0);
        return;
    }
    effect -> setPosition(1.0 * position / 100 * duration);
}

void Form::broadcast(qint64 now){
    ui -> TimeSlider -> setSliderPosition(int(1.0 * now / duration * 100));
    int length = 1.0 * now / 1000 + 0.5;
    int MinuteNow = length / 60;
    int SecondNow = length % 60;
    QString SMinuteNow = QString::number(MinuteNow);
    QString SSecondNow = QString::number(SecondNow);
    if(SMinuteNow.size() == 1) SMinuteNow = "0" + SMinuteNow;
    if(SSecondNow.size() == 1) SSecondNow = "0" + SSecondNow;
    QString SMinute = QString::number(minute);
    QString SSecond = QString::number(second);
    if(SMinute.size() == 1) SMinute = "0" + SMinute;
    if(SSecond.size() == 1) SSecond = "0" + SSecond;
    ui -> Time -> setText(SMinuteNow + ":" + SSecondNow + "/" + SMinute + ":" + SSecond);
}

void Form::end_of_song(QMediaContent medianow){
    Q_UNUSED(medianow);
    ui -> TimeSlider -> setSliderPosition(0);
}

void Form::change_song(QMediaContent medianow){
    Q_UNUSED(medianow);
    ui -> Playing -> setText("播放中：" + ui -> ListMusic -> item(playlist -> currentIndex()) -> text());
}

void Form::on_VolumnSlider_sliderReleased()
{
    ui -> Volumn -> hide();
}
