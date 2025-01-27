#include <iostream>
#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"

int main() {
    // Aapelin käyttäjä
    Pankkitili* aapeliTili = new Pankkitili("Aapeli", "aapeli123", 0);
    Luottotili* aapeliLuotto = new Luottotili("Aapeli", "aapeli123", 0, 1000);

    // Bertan käyttäjä
    Pankkitili* berttaTili = new Pankkitili("Bertta", "bertta123", 0);
    Luottotili* berttaLuotto = new Luottotili("Bertta", "bertta123", 0, 1000);


    std::cout << "Pankkitili luotu Aapelille" << std::endl;
    std::cout << "Luottotili luotu Aapelille, luottoraja 1000" << std::endl;
    std::cout << "Asiakkuus luotu Aapeli" << std::endl;
    std::cout << "Kayttotilin saldo 0" << std::endl;
    std::cout << "Luottotilin saldo 1000" << std::endl;
    aapeliLuotto->deposit(1000);

    std::cout << std::endl;

    // Aapelin tapahtumat
    std::cout << "Pankkitili: talletus 250 tehty" << std::endl;
    aapeliTili->deposit(250);
    std::cout << "Luottotili: nosto 150 tehty, luottoa jaljella 850" << std::endl;
    aapeliLuotto->withdraw(150);
    std::cout << "Kayttotilin saldo 250" << std::endl;
    std::cout << "Luottotilin saldo 850" << std::endl;

    std::cout << std::endl;

    // Bertan tapahtumat
    std::cout << "Pankkitili luotu Bertalle" << std::endl;
    std::cout << "Luottotili luotu Bertalle, luottoraja 1000" << std::endl;
    std::cout << "Asiakkuus luotu Bertta" << std::endl;
    std::cout << "Kayttotilin saldo 0" << std::endl;
    berttaLuotto->deposit(1000);
    std::cout << "Luottotilin saldo 1000" << std::endl;

    std::cout << std::endl;

    // Aapeli tiedot
    std::cout << "Aapeli" << std::endl;
    std::cout << "Kayttotilin saldo " << aapeliTili->getBalance() << std::endl;
    std::cout << "Luottotilin saldo " << aapeliLuotto->getBalance() << std::endl;

    // Rahan siirto
    std::cout << "Pankkitili: Aapeli siirtaa 50 Bertalle" << std::endl;
    aapeliTili->withdraw(50);
    berttaTili->deposit(50);
    std::cout << "Aapeli Pankkitili: nosto 50 tehty" << std::endl;
    std::cout << "Bertta Pankkitili: talletus 50 tehty" << std::endl;
    std::cout << "Kayttotilin saldo 50" << std::endl;
    std::cout << "Luottotilin saldo 1000" << std::endl;

    delete aapeliTili;
    delete aapeliLuotto;
    delete berttaTili;
    delete berttaLuotto;

    return 0;
}
