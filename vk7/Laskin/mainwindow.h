#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onCountClicked();
    void onResetClicked();

private:
    QLineEdit *lineEdit;
    QPushButton *countButton;
    QPushButton *resetButton;
    int counter;
};

#endif // MAINWINDOW_H
