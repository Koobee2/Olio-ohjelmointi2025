#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QString>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void numberClickHandler();
    void clearClickHandler();
    void operationClickHandler();
    void enterClickHandler();

private:
    Ui::MainWindow *ui;
    QPushButton *N0, *N1, *N2, *N3, *N4, *N5, *N6, *N7, *N8, *N9;
    QPushButton *add, *sub, *mul, *div, *clear, *enter;
    QLineEdit *num1, *num2, *result;
    QLabel *Number1, *Number2, *Result;

    int state = 1;
    int operand = 0;
    QString number1 = "";
    QString number2 = "";
};

#endif // MAINWINDOW_H
