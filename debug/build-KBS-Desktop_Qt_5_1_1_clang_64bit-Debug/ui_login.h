/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *SystemName;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QFrame *line;
    QLabel *username;
    QLabel *password;
    QPushButton *LoginButton;
    QLabel *Logo;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(429, 230);
        SystemName = new QLabel(Login);
        SystemName->setObjectName(QStringLiteral("SystemName"));
        SystemName->setGeometry(QRect(220, 30, 161, 51));
        usernameInput = new QLineEdit(Login);
        usernameInput->setObjectName(QStringLiteral("usernameInput"));
        usernameInput->setGeometry(QRect(100, 140, 171, 21));
        passwordInput = new QLineEdit(Login);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setGeometry(QRect(100, 180, 171, 21));
        passwordInput->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordInput->setEchoMode(QLineEdit::Password);
        line = new QFrame(Login);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 100, 381, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        username = new QLabel(Login);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(20, 140, 62, 19));
        password = new QLabel(Login);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(20, 180, 62, 19));
        LoginButton = new QPushButton(Login);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(280, 140, 101, 71));
        QFont font;
        font.setPointSize(18);
        LoginButton->setFont(font);
        Logo = new QLabel(Login);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(40, -20, 141, 141));
        Logo->setMaximumSize(QSize(1000, 2000));
        Logo->setAutoFillBackground(false);
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/logo_96.png")));
        Logo->setScaledContents(true);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        SystemName->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0098ff;\">\351\207\221\347\261\263</span><span style=\" font-size:18pt; font-weight:600;\">\344\270\232\345\212\241\346\224\257\346\214\201\347\263\273\347\273\237</span></p><p><span style=\" font-size:10pt; font-weight:600; color:#999999;\">Kimi Business Support System</span></p></body></html>", 0));
        usernameInput->setPlaceholderText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\346\210\226\347\224\265\345\255\220\351\202\256\347\256\261", 0));
        passwordInput->setText(QString());
        passwordInput->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", 0));
        username->setText(QApplication::translate("Login", "Username:", 0));
        password->setText(QApplication::translate("Login", "Password", 0));
        LoginButton->setText(QApplication::translate("Login", "Login", 0));
#ifndef QT_NO_TOOLTIP
        Logo->setToolTip(QApplication::translate("Login", "<html><head/><body><p><img src=\":/system/images/logo_96.png\"/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
