#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QPixmap pixmap("images/logo_96.png");
    ui->Logo->setPixmap(pixmap);
    ui->Logo->show();
   // QObject::connect(LoginButton, SINGAL(clicked()), &app, ShowMain(quit()));
}

Login::~Login()
{
    delete ui;
}
