# PROYECTO-PROGRAMACION-GR3
*LOGIN.H
#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H


*MAINWINDOW.H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// Estructura Mascota
struct Mascota {
    int id;
    QString nombre;
    QString dueno;
    QString especie;
    QString enfermedad;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAgregar_clicked();
    void on_btnBuscar_clicked();
    void on_btnMostrar_clicked();
    void on_btnActualizar_clicked();
    void on_btnEliminar_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<Mascota> listaMascotas;
};

#endif // MAINWINDOW_H
*LOGIN.CPP
#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->txtPass->setEchoMode(QLineEdit::Password); // 🔒 ocultar contraseña
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnLogin_clicked()
{
    QString user = ui->txtUser->text();
    QString pass = ui->txtPass->text();

    if (user == "admin" && pass == "1234") {
        accept();
    } else {
        QMessageBox::warning(this, "Error", "Usuario o contraseña incorrectos");
    }
}
*MAIN.CPP
#include "login.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login login;
    if (login.exec() == QDialog::Accepted) {
        MainWindow w;
        w.show();
        return a.exec();
    }

    return 0;
}
*MAINWINDOW.CPP
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QTableWidget>
#include <QTableWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(
        {"ID", "Nombre", "Dueño", "Especie", "Enfermedad"}
        );
}

MainWindow::~MainWindow()
{
    delete ui;
}

// AGREGAR
void MainWindow::on_btnAgregar_clicked()
{
    Mascota m;
    m.id = ui->txtEdit->text().toInt();
    m.nombre = ui->txtNombre->text();
    m.dueno = ui->txtDueno->text();
    m.especie = ui->txtEspecie->text();
    m.enfermedad = ui->txtEnfermedad->text();

    listaMascotas.push_back(m);

    QMessageBox::information(this, "OK", "Mascota registrada");
}

// MOSTRAR
void MainWindow::on_btnMostrar_clicked()
{
    ui->tableWidget->setRowCount(listaMascotas.size());

    for (int i = 0; i < listaMascotas.size(); i++) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(listaMascotas[i].id)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(listaMascotas[i].nombre));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(listaMascotas[i].dueno));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(listaMascotas[i].especie));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(listaMascotas[i].enfermedad));
    }
}

// BUSCAR
void MainWindow::on_btnBuscar_clicked()
{
    int id = ui->txtEdit->text().toInt();

    for (const Mascota &m : listaMascotas) {
        if (m.id == id) {
            ui->txtNombre->setText(m.nombre);
            ui->txtDueno->setText(m.dueno);
            ui->txtEspecie->setText(m.especie);
            ui->txtEnfermedad->setText(m.enfermedad);
            return;
        }
    }
    QMessageBox::warning(this, "Error", "Mascota no encontrada");
}

// ACTUALIZAR
void MainWindow::on_btnActualizar_clicked()
{
    int id = ui->txtEdit->text().toInt();

    for (int i = 0; i < listaMascotas.size(); i++) {
        if (listaMascotas[i].id == id) {
            listaMascotas[i].nombre = ui->txtNombre->text();
            listaMascotas[i].dueno = ui->txtDueno->text();
            listaMascotas[i].especie = ui->txtEspecie->text();
            listaMascotas[i].enfermedad = ui->txtEnfermedad->text();

            QMessageBox::information(this, "OK", "Actualizado");
            return;
        }
    }
}

// ELIMINAR
void MainWindow::on_btnEliminar_clicked()
{
    int id = ui->txtEdit->text().toInt();

    for (int i = 0; i < listaMascotas.size(); i++) {
        if (listaMascotas[i].id == id) {
            listaMascotas.erase(listaMascotas.begin() + i);
            QMessageBox::information(this, "OK", "Eliminado");
            return;
        }
    }
}
