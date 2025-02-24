#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);

    player1Time = 0;
    player2Time = 0;
    totalTime = 0;
    isPlayer1Active = true;
    isGameRunning = false;

    ui->progressBarPlayer1->setValue(100);
    ui->progressBarPlayer2->setValue(100);
    ui->labelStatus->setText("Valitse peliaika ja aloita peli.");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonStartGame_clicked()
{
    if (totalTime == 0) {
        QMessageBox::warning(this, "Virhe", "Valitse peliaika ennen pelin aloittamista.");
        return;
    }

    startGame();
}

void MainWindow::on_pushButtonSwitchPlayer1_clicked()
{
    if (isGameRunning && isPlayer1Active) {
        switchPlayer();
    }
}

void MainWindow::on_pushButtonSwitchPlayer2_clicked()
{
    if (isGameRunning && !isPlayer1Active) {
        switchPlayer();
    }
}

void MainWindow::on_pushButton5Min_clicked()
{
    totalTime = 5 * 60;
    player1Time = totalTime;
    player2Time = totalTime;
    ui->progressBarPlayer1->setValue(100);
    ui->progressBarPlayer2->setValue(100);
    ui->labelStatus->setText("Peliaika valittu: 5 minuuttia. Aloita peli.");
}

void MainWindow::on_pushButton10Min_clicked()
{
    totalTime = 2 * 60;
    player1Time = totalTime;
    player2Time = totalTime;
    ui->progressBarPlayer1->setValue(100);
    ui->progressBarPlayer2->setValue(100);
    ui->labelStatus->setText("Peliaika valittu: 2 minuuttia. Aloita peli.");
}

void MainWindow::updateTime()
{
    if (isPlayer1Active) {
        player1Time--;
        if (player1Time <= 0) {
            endGame("Pelaaja 2 voitti! Pelaajan 1 aika loppui.");
            return;
        }
    } else {
        player2Time--;
        if (player2Time <= 0) {
            endGame("Pelaaja 1 voitti! Pelaajan 2 aika loppui.");
            return;
        }
    }

    int player1Progress = (player1Time * 100) / totalTime;
    int player2Progress = (player2Time * 100) / totalTime;

    ui->progressBarPlayer1->setValue(player1Progress);
    ui->progressBarPlayer2->setValue(player2Progress);
}

void MainWindow::startGame()
{
    isGameRunning = true;
    isPlayer1Active = true;
    timer->start(1000);
    ui->labelStatus->setText("Peli on käynnissä. Pelaaja 1 vuoro.");
}

void MainWindow::switchPlayer()
{
    isPlayer1Active = !isPlayer1Active;
    ui->labelStatus->setText(isPlayer1Active ? "Pelaaja 1 vuoro." : "Pelaaja 2 vuoro.");
}

void MainWindow::endGame(const QString &message)
{
    timer->stop();
    isGameRunning = false;
    QMessageBox::information(this, "Peli ohi", message);
    ui->labelStatus->setText("Peli päättyi. Aloita uusi peli valitsemalla peliaika.");
}
void MainWindow::on_pushButtonStopGame_clicked()
{
    if (isGameRunning) {
        timer->stop();
        isGameRunning = false;
        ui->labelStatus->setText("Peli pysäytetty. Aloita uusi peli valitsemalla peliaika.");
    } else {
        QMessageBox::information(this, "Peli ei käynnissä", "Peli ei ole käynnissä, joten sitä ei voi pysäyttää.");
    }
}
