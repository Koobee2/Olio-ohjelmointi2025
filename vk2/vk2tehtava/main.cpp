#include "Game.h"

int main() {
    int isonumero;
    std::cout << "Syötä suurin luku: ";
    std::cin >> isonumero;

    Game game(isonumero);
    game.play();
    game.printGameResult();
    return 0;
}
