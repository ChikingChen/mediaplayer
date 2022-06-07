#include "dialog.h"
#include "form.h"
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog dlg;
    dlg.setModal(true);
    dlg.show();

    if(dlg.exec() == QDialog::Accepted){
        Form* wgt = new Form();
        wgt -> show();
    }

    return a.exec();

}
