#ifndef ADDSONG_H
#define ADDSONG_H

#include <QDialog>

namespace Ui {
class AddSong;
}

class AddSong : public QDialog
{
    Q_OBJECT

public:
    explicit AddSong(QWidget *parent = 0);
    ~AddSong();

private:
    Ui::AddSong *ui;
};

#endif // ADDSONG_H
