#include "Seuraaja.h"
#include <iostream>

Seuraaja::Seuraaja(const std::string& nimi) : nimi(nimi), next(nullptr) {}

std::string Seuraaja::getNimi() const {
    return "Seuraaja " + nimi;
}

void Seuraaja::paivitys(const std::string& viesti) {
    std::cout << "Seuraaja " << nimi << " sai viestin " << viesti << std::endl;
}
