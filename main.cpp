#include "mainwindow.h"
#include <QApplication>

/**
 * @brief Main function to start the Qt application.
 * @param argc Argument count
 * @param argv Argument vector
 * @return Application exit status
 */
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}
