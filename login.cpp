#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnLogin_clicked()
{
    // Obtenemos el texto de los QLineEdit
    QString usuario = ui->txtUser->text();
    QString password = ui->txtPass->text();

    // Validación de credenciales
    if (usuario == "admin" && password == "1234") {
        accept(); // Cierra el diálogo y retorna QDialog::Accepted
    } else {
        QMessageBox::warning(this, "Error de acceso", "Usuario o contraseña incorrectos");
    }
}
