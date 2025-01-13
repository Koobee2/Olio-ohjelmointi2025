#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {
private:
    int isonumero;
    int haluttunumero;
    int arvausmaara;

public:
    Game(int isonumero);
    void play();
    void printGameResult() const;
};

#endif // GAME_H
