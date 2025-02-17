#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), counter(0)
{
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    lineEdit = new QLineEdit("0", this);
    lineEdit->setAlignment(Qt::AlignCenter);
    lineEdit->setReadOnly(true);

    countButton = new QPushButton("Count", this);
    resetButton = new QPushButton("Reset", this);

    connect(countButton, &QPushButton::clicked, this, &MainWindow::onCountClicked);
    connect(resetButton, &QPushButton::clicked, this, &MainWindow::onResetClicked);

    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);
    QHBoxLayout *buttonLayout = new QHBoxLayout();

    buttonLayout->addWidget(countButton);
    buttonLayout->addWidget(resetButton);

    mainLayout->addWidget(lineEdit);
    mainLayout->addLayout(buttonLayout);

    setWindowTitle("Counter App");
    resize(300, 100);
}

MainWindow::~MainWindow()
{
}

void MainWindow::onCountClicked()
{
    counter++;
    lineEdit->setText(QString::number(counter));
}

void MainWindow::onResetClicked()
{
    counter = 0;
    lineEdit->setText(QString::number(counter));
}
