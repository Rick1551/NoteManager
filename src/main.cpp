#include "../include/NoteManager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    NoteManager window;
    window.show();
    return app.exec();
}
