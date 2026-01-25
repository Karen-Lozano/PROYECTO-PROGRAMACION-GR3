#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog> // Librería necesaria para usar QDialog

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
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
