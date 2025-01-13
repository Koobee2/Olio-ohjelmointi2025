#include "Game.h"


Game::Game(int isonumero) : isonumero(isonumero), arvausmaara(0) {
    srand(time(0));
    haluttunumero = rand() % isonumero + 1;
}

void Game::play() {
    int guess;
    while (true) {
        std::cout << "Arvaa luku 1-" << isonumero << ": ";
        std::cin >> guess;
        arvausmaara++;

        if (guess < haluttunumero) {
            std::cout << "Luku on suurempi\n";
        } else if (guess > haluttunumero) {
            std::cout << "Luku on pienempi\n";
        } else {
            std::cout << "Luku on oikein!\n";
            break;
        }
    }
}
void Game::printGameResult() const {
    std::cout << "Arvottu luku oli: " << haluttunumero << "\n";
    std::cout << "" << arvausmaara << " kertaa arvattu\n";
}
