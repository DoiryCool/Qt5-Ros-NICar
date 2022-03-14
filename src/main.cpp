/***********************************************
 *            Copyright(C), 2022
 * Version:         1.0.0
 * Auther:          顾俊玮
 * Date             2022/3/14
 * Description:   Ros Control System
 * ********************************************/
#include <QApplication>
#include <string.h>
#include "../include/mainWindow.h"

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    mainWindow mainWin;
    mainWin.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    return app.exec();
}