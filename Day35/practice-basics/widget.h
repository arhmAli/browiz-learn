#ifndef WIDGET_H
#define WIDGET_H
#include <QLabel>

#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel *label;
public slots:
    void checkVal();
};
#endif // WIDGET_H
