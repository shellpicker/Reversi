#include "reversi.h"
#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    //w.pBoard->Play({3,4});
    return a.exec();
}
