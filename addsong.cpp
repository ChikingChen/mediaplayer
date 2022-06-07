#include "addsong.h"
#include "ui_addsong.h"

AddSong::AddSong(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSong)
{
    ui->setupUi(this);

    setMinimumSize(400, 300);
    setMaximumSize(400, 300);



}

AddSong::~AddSong()
{
    delete ui;
}
