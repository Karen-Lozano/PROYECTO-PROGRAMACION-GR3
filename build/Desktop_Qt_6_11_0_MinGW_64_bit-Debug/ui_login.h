/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnLogin;
    QTextEdit *txtUser;
    QTextEdit *txtPass;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 40, 91, 21));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 80, 91, 20));
        btnLogin = new QPushButton(Login);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(230, 110, 93, 29));
        txtUser = new QTextEdit(Login);
        txtUser->setObjectName("txtUser");
        txtUser->setGeometry(QRect(270, 30, 111, 31));
        txtPass = new QTextEdit(Login);
        txtPass->setObjectName("txtPass");
        txtPass->setGeometry(QRect(280, 70, 101, 31));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login", "Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Contrasena:", nullptr));
        btnLogin->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
