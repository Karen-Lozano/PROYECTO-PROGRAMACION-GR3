/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txtEspecie;
    QLineEdit *txtDueno;
    QLineEdit *txtNombre;
    QLineEdit *txtEnfermedad;
    QLineEdit *txtEdit;
    QPushButton *btnBuscar;
    QPushButton *btnActualizar;
    QPushButton *btnAgregar;
    QPushButton *btnEliminar;
    QPushButton *btnMostrar;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1019, 641);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 40, 63, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 70, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 130, 63, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 100, 63, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(142, 160, 91, 20));
        txtEspecie = new QLineEdit(centralwidget);
        txtEspecie->setObjectName("txtEspecie");
        txtEspecie->setGeometry(QRect(240, 120, 113, 26));
        txtDueno = new QLineEdit(centralwidget);
        txtDueno->setObjectName("txtDueno");
        txtDueno->setGeometry(QRect(240, 90, 113, 26));
        txtNombre = new QLineEdit(centralwidget);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(240, 60, 113, 26));
        txtEnfermedad = new QLineEdit(centralwidget);
        txtEnfermedad->setObjectName("txtEnfermedad");
        txtEnfermedad->setGeometry(QRect(240, 150, 113, 26));
        txtEdit = new QLineEdit(centralwidget);
        txtEdit->setObjectName("txtEdit");
        txtEdit->setGeometry(QRect(240, 30, 113, 26));
        btnBuscar = new QPushButton(centralwidget);
        btnBuscar->setObjectName("btnBuscar");
        btnBuscar->setGeometry(QRect(260, 220, 93, 29));
        btnActualizar = new QPushButton(centralwidget);
        btnActualizar->setObjectName("btnActualizar");
        btnActualizar->setGeometry(QRect(370, 220, 93, 29));
        btnAgregar = new QPushButton(centralwidget);
        btnAgregar->setObjectName("btnAgregar");
        btnAgregar->setGeometry(QRect(130, 220, 93, 29));
        btnEliminar = new QPushButton(centralwidget);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(480, 220, 93, 29));
        btnMostrar = new QPushButton(centralwidget);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setGeometry(QRect(600, 220, 93, 29));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(120, 261, 581, 201));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1019, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Especie:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Dueno:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enfermedad:", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        btnAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        btnMostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
