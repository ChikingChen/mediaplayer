/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QListWidget *ListMusic;
    QPushButton *PushAdd;
    QLabel *background;
    QLabel *SongCnt;
    QLabel *State;
    QPushButton *StartStop;
    QSlider *VolumnSlider;
    QPushButton *VolumnButton;
    QPushButton *NextSong;
    QPushButton *PreviousSong;
    QPushButton *Mode;
    QLabel *ModeLabel;
    QSlider *TimeSlider;
    QLabel *Time;
    QLabel *Title;
    QLabel *Playing;
    QLabel *LabelMode;
    QLabel *LabelSS;
    QLabel *LabelNext;
    QLabel *LabelPrevious;
    QLabel *LabelAdd;
    QLabel *LabelVolumn;
    QLabel *Face;
    QLabel *Volumn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(697, 463);
        ListMusic = new QListWidget(Form);
        new QListWidgetItem(ListMusic);
        new QListWidgetItem(ListMusic);
        new QListWidgetItem(ListMusic);
        new QListWidgetItem(ListMusic);
        new QListWidgetItem(ListMusic);
        ListMusic->setObjectName(QStringLiteral("ListMusic"));
        ListMusic->setGeometry(QRect(30, 50, 161, 341));
        PushAdd = new QPushButton(Form);
        PushAdd->setObjectName(QStringLiteral("PushAdd"));
        PushAdd->setGeometry(QRect(540, 400, 75, 23));
        background = new QLabel(Form);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(310, 80, 54, 12));
        SongCnt = new QLabel(Form);
        SongCnt->setObjectName(QStringLiteral("SongCnt"));
        SongCnt->setGeometry(QRect(250, 160, 54, 12));
        State = new QLabel(Form);
        State->setObjectName(QStringLiteral("State"));
        State->setGeometry(QRect(400, 200, 54, 12));
        StartStop = new QPushButton(Form);
        StartStop->setObjectName(QStringLiteral("StartStop"));
        StartStop->setGeometry(QRect(330, 340, 75, 23));
        VolumnSlider = new QSlider(Form);
        VolumnSlider->setObjectName(QStringLiteral("VolumnSlider"));
        VolumnSlider->setGeometry(QRect(240, 270, 22, 160));
        VolumnSlider->setOrientation(Qt::Vertical);
        VolumnButton = new QPushButton(Form);
        VolumnButton->setObjectName(QStringLiteral("VolumnButton"));
        VolumnButton->setGeometry(QRect(300, 410, 75, 23));
        NextSong = new QPushButton(Form);
        NextSong->setObjectName(QStringLiteral("NextSong"));
        NextSong->setGeometry(QRect(440, 300, 75, 23));
        PreviousSong = new QPushButton(Form);
        PreviousSong->setObjectName(QStringLiteral("PreviousSong"));
        PreviousSong->setGeometry(QRect(350, 260, 75, 23));
        Mode = new QPushButton(Form);
        Mode->setObjectName(QStringLiteral("Mode"));
        Mode->setGeometry(QRect(490, 220, 75, 23));
        ModeLabel = new QLabel(Form);
        ModeLabel->setObjectName(QStringLiteral("ModeLabel"));
        ModeLabel->setGeometry(QRect(380, 130, 54, 12));
        TimeSlider = new QSlider(Form);
        TimeSlider->setObjectName(QStringLiteral("TimeSlider"));
        TimeSlider->setGeometry(QRect(260, 100, 160, 22));
        TimeSlider->setOrientation(Qt::Horizontal);
        Time = new QLabel(Form);
        Time->setObjectName(QStringLiteral("Time"));
        Time->setGeometry(QRect(400, 50, 54, 12));
        Title = new QLabel(Form);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(260, 30, 54, 12));
        Playing = new QLabel(Form);
        Playing->setObjectName(QStringLiteral("Playing"));
        Playing->setGeometry(QRect(510, 110, 54, 12));
        LabelMode = new QLabel(Form);
        LabelMode->setObjectName(QStringLiteral("LabelMode"));
        LabelMode->setGeometry(QRect(230, 210, 54, 12));
        LabelSS = new QLabel(Form);
        LabelSS->setObjectName(QStringLiteral("LabelSS"));
        LabelSS->setGeometry(QRect(130, 20, 54, 12));
        LabelNext = new QLabel(Form);
        LabelNext->setObjectName(QStringLiteral("LabelNext"));
        LabelNext->setGeometry(QRect(230, 250, 54, 12));
        LabelPrevious = new QLabel(Form);
        LabelPrevious->setObjectName(QStringLiteral("LabelPrevious"));
        LabelPrevious->setGeometry(QRect(200, 300, 54, 12));
        LabelAdd = new QLabel(Form);
        LabelAdd->setObjectName(QStringLiteral("LabelAdd"));
        LabelAdd->setGeometry(QRect(280, 290, 54, 12));
        LabelVolumn = new QLabel(Form);
        LabelVolumn->setObjectName(QStringLiteral("LabelVolumn"));
        LabelVolumn->setGeometry(QRect(210, 90, 54, 12));
        Face = new QLabel(Form);
        Face->setObjectName(QStringLiteral("Face"));
        Face->setGeometry(QRect(320, 170, 54, 12));
        Volumn = new QLabel(Form);
        Volumn->setObjectName(QStringLiteral("Volumn"));
        Volumn->setGeometry(QRect(540, 50, 54, 12));
        background->raise();
        ListMusic->raise();
        PushAdd->raise();
        SongCnt->raise();
        State->raise();
        StartStop->raise();
        VolumnSlider->raise();
        VolumnButton->raise();
        NextSong->raise();
        PreviousSong->raise();
        Mode->raise();
        ModeLabel->raise();
        TimeSlider->raise();
        Time->raise();
        Title->raise();
        Playing->raise();
        LabelMode->raise();
        LabelSS->raise();
        LabelNext->raise();
        LabelPrevious->raise();
        LabelAdd->raise();
        LabelVolumn->raise();
        Face->raise();
        Volumn->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));

        const bool __sortingEnabled = ListMusic->isSortingEnabled();
        ListMusic->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ListMusic->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Form", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        QListWidgetItem *___qlistwidgetitem1 = ListMusic->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Form", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        QListWidgetItem *___qlistwidgetitem2 = ListMusic->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Form", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        QListWidgetItem *___qlistwidgetitem3 = ListMusic->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Form", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        QListWidgetItem *___qlistwidgetitem4 = ListMusic->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Form", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        ListMusic->setSortingEnabled(__sortingEnabled);

        PushAdd->setText(QApplication::translate("Form", "PushButton", 0));
        background->setText(QApplication::translate("Form", "TextLabel", 0));
        SongCnt->setText(QApplication::translate("Form", "TextLabel", 0));
        State->setText(QApplication::translate("Form", "TextLabel", 0));
        StartStop->setText(QApplication::translate("Form", "PushButton", 0));
        VolumnButton->setText(QApplication::translate("Form", "PushButton", 0));
        NextSong->setText(QApplication::translate("Form", "PushButton", 0));
        PreviousSong->setText(QApplication::translate("Form", "PushButton", 0));
        Mode->setText(QApplication::translate("Form", "PushButton", 0));
        ModeLabel->setText(QApplication::translate("Form", "TextLabel", 0));
        Time->setText(QApplication::translate("Form", "TextLabel", 0));
        Title->setText(QApplication::translate("Form", "TextLabel", 0));
        Playing->setText(QApplication::translate("Form", "TextLabel", 0));
        LabelMode->setText(QApplication::translate("Form", "TextLabel", 0));
        LabelSS->setText(QApplication::translate("Form", "TextLabel", 0));
        LabelNext->setText(QApplication::translate("Form", "TextLabel", 0));
        LabelPrevious->setText(QApplication::translate("Form", "TextLabel", 0));
        LabelAdd->setText(QApplication::translate("Form", "TextLabel", 0));
        LabelVolumn->setText(QApplication::translate("Form", "TextLabel", 0));
        Face->setText(QApplication::translate("Form", "TextLabel", 0));
        Volumn->setText(QApplication::translate("Form", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
