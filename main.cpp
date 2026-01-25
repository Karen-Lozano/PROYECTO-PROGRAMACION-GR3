#include "login.h"
#include "mainwindow.h"
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login login;
    // Se ejecuta el diálogo de login primero
    if (login.exec() == QDialog::Accepted) {
        MainWindow w;
        w.show();
        return a.exec();
    }

    return 0; // Si el login falla o se cierra, la app no inicia
}
