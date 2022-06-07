#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include <QLineEdit>
#include <QtWidgets>
#include <qDebug>
#include <QImage>
#include <QPixmap>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    setMinimumSize(400, 300);
    setMaximumSize(400, 300);

    QIcon icon(":/new/pictures/img/1.jpg");
    setWindowIcon(icon);
    setWindowTitle("登录");

    ui -> Button1 -> setText(tr("确定"));
    ui -> Button1 -> move(165, 230);
    ui -> Label1 -> setText(tr("账号："));
    ui -> Label1 -> move(100, 80);
    ui -> Label2 -> setText(tr("密码："));
    ui -> Label2 -> move(100, 160);
    ui -> Line1 -> move(140, 76);
    ui -> Line1 -> setFixedWidth(150);
    ui -> Line2 -> move(140, 156);
    ui -> Line2 -> setFixedWidth(150);
    ui -> Line2 -> setEchoMode(ui -> Line2 -> Password);
    ui -> Label -> setText("");
    ui -> Label -> setFixedWidth(100);

    ui -> LabelBack -> move(0, 0);
    ui -> LabelBack -> setFixedSize(400, 300);
    QPixmap img;
    img.load(":/new/pictures/img/4.png");
    img.scaled(ui -> LabelBack -> size(), Qt::KeepAspectRatio);
    ui -> LabelBack -> setScaledContents(true);
    ui -> LabelBack -> setPixmap(img);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Button1_clicked()
{
    QString account = ui -> Line1 -> text();
    QString password = ui -> Line2 -> text();
    if(account == "" && password == ""){
        ui -> Label -> setText("请输入账号密码");
    }else if(account == ""){
        ui -> Line2 -> clear();
        ui -> Label -> setText("请输入账号");
    }else if(password == ""){
        ui -> Label -> setText("请输入密码");
    }else if(account == "123" && password == "123"){
        close();
        accept();
    }else{
        ui -> Line2 -> clear();
        ui -> Label -> setText("账号或密码错误！！！");
        ui -> Label -> move(230, 190);
        ui -> Label -> setFixedSize(100, 50);
    }

}
