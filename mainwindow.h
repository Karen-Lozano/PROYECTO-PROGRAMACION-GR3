#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

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
