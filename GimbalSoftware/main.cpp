#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::MSWindowsFixedSizeDialogHint); //Set window to fixed size
    w.setWindowFlags(Qt::CustomizeWindowHint); //Set window with no title bar
    w.setWindowFlags(Qt::FramelessWindowHint); //Set a frameless window
    w.show();
    return a.exec();
}
