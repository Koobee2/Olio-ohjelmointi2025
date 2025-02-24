#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonStartGame_clicked();
    void on_pushButtonSwitchPlayer1_clicked();
    void on_pushButtonSwitchPlayer2_clicked();
    void on_pushButton5Min_clicked();
    void on_pushButton10Min_clicked();
    void on_pushButtonStopGame_clicked();
    void updateTime();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    int player1Time;
    int player2Time;
    int totalTime;
    bool isPlayer1Active;
    bool isGameRunning;

    void startGame();
    void switchPlayer();
    void endGame(const QString &message);
};

#endif // MAINWINDOW_H
