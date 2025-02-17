#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    num1 = findChild<QLineEdit*>("num1");
    num2 = findChild<QLineEdit*>("num2");
    result = findChild<QLineEdit*>("result");

    Number1 = findChild<QLabel*>("Number1");
    Number2 = findChild<QLabel*>("Number2");
    Result = findChild<QLabel*>("Result");

    N0 = findChild<QPushButton*>("N0");
    N1 = findChild<QPushButton*>("N1");
    N2 = findChild<QPushButton*>("N2");
    N3 = findChild<QPushButton*>("N3");
    N4 = findChild<QPushButton*>("N4");
    N5 = findChild<QPushButton*>("N5");
    N6 = findChild<QPushButton*>("N6");
    N7 = findChild<QPushButton*>("N7");
    N8 = findChild<QPushButton*>("N8");
    N9 = findChild<QPushButton*>("N9");

    add = findChild<QPushButton*>("add");
    sub = findChild<QPushButton*>("sub");
    mul = findChild<QPushButton*>("mul");
    div = findChild<QPushButton*>("div");
    clear = findChild<QPushButton*>("clear");
    enter = findChild<QPushButton*>("enter");

    connect(N0, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N1, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N2, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N3, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N4, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N5, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N6, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N7, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N8, SIGNAL(clicked()), this, SLOT(numberClickHandler()));
    connect(N9, SIGNAL(clicked()), this, SLOT(numberClickHandler()));

    connect(add, SIGNAL(clicked()), this, SLOT(operationClickHandler()));
    connect(sub, SIGNAL(clicked()), this, SLOT(operationClickHandler()));
    connect(mul, SIGNAL(clicked()), this, SLOT(operationClickHandler()));
    connect(div, SIGNAL(clicked()), this, SLOT(operationClickHandler()));
    connect(clear, SIGNAL(clicked()), this, SLOT(clearClickHandler()));
    connect(enter, SIGNAL(clicked()), this, SLOT(enterClickHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    QString digit = button->text();

    if (state == 1) {
        number1.append(digit);
        num1->setText(number1);
        qDebug() << "Number1: " << number1;
    } else if (state == 2) {
        number2.append(digit);
        num2->setText(number2);
        qDebug() << "Number2: " << number2;
    }
}

void MainWindow::operationClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    if (button == add) {
        operand = 0;
    } else if (button == sub) {
        operand = 1;
    } else if (button == mul) {
        operand = 2;
    } else if (button == div) {
        operand = 3;
    }

    state = 2;
}

void MainWindow::clearClickHandler()
{
    state = 1;
    number1 = "";
    number2 = "";
    num1->clear();
    num2->clear();
    result->clear();
}

void MainWindow::enterClickHandler()
{
    if (number1.isEmpty() || number2.isEmpty()) {
        return;
    }

    bool ok1, ok2;
    float n1 = number1.toFloat(&ok1);
    float n2 = number2.toFloat(&ok2);

    if (!ok1 || !ok2) {
        result->setText("Error");
        return;
    }

    float res = 0;

    switch (operand) {
    case 0:
        res = n1 + n2;
        break;
    case 1:
        res = n1 - n2;
        break;
    case 2:
        res = n1 * n2;
        break;
    case 3:
        if (n2 == 0) {
            result->setText("Error: Division by zero");
            return;
        }
        res = n1 / n2;
        break;
    }

    result->setText(QString::number(res));
}
