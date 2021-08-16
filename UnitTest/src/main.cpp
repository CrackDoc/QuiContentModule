#include <QtWidgets/QApplication>
#include "QuiContentModule.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CQuiContentModule w;
    w.show();
    return a.exec();
}
