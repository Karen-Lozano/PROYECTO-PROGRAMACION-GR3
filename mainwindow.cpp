#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTableWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels({"ID", "Nombre", "Dueño", "Especie", "Enfermedad"});
}

MainWindow::~MainWindow()
{
    delete ui;
}

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

void MainWindow::on_btnMostrar_clicked()
{
    ui->tableWidget->setRowCount(0); // Limpiar tabla antes de mostrar
    for (const auto &m : listaMascotas) {
        int fila = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(fila);
        ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(QString::number(m.id)));
        ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(m.nombre));
        ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(m.dueno));
        ui->tableWidget->setItem(fila, 3, new QTableWidgetItem(m.especie));
        ui->tableWidget->setItem(fila, 4, new QTableWidgetItem(m.enfermedad));
    }
}

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

void MainWindow::on_btnActualizar_clicked()
{
    int id = ui->txtEdit->text().toInt();
    for (auto &m : listaMascotas) {
        if (m.id == id) {
            m.nombre = ui->txtNombre->text();
            m.dueno = ui->txtDueno->text();
            m.especie = ui->txtEspecie->text();
            m.enfermedad = ui->txtEnfermedad->text();
            QMessageBox::information(this, "OK", "Actualizado");
            return;
        }
    }
}

void MainWindow::on_btnEliminar_clicked()
{
    int id = ui->txtEdit->text().toInt();
    for (auto it = listaMascotas.begin(); it != listaMascotas.end(); ++it) {
        if (it->id == id) {
            listaMascotas.erase(it);
            QMessageBox::information(this, "OK", "Eliminado");
            return;
        }
    }
}
