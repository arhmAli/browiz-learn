// loggedin.h
#ifndef LOGGEDIN_H
#define LOGGEDIN_H

#include <QWidget>

namespace Ui {
class LoggedIn;
}

class LoggedIn : public QWidget
{
    Q_OBJECT

public:
    explicit LoggedIn(QWidget *parent = nullptr);
    ~LoggedIn();

private:
    Ui::LoggedIn *ui;
};

#endif // LOGGEDIN_H
