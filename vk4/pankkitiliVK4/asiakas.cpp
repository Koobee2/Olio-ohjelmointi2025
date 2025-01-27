#include "asiakas.h"

Asiakas::Asiakas(const std::string& nimi)
    : nimi(nimi), pankkitili(nullptr), luottotili(nullptr) {}

Asiakas::~Asiakas() {
    delete pankkitili;
    delete luottotili;
}

std::string Asiakas::getNimi() const {
    return nimi;
}

void Asiakas::setPankkitili(Pankkitili* tili) {
    if (pankkitili) {
        delete pankkitili;
    }
    pankkitili = tili;
}

void Asiakas::setLuottotili(Luottotili* tili) {
    if (luottotili) {
        delete luottotili;
    }
    luottotili = tili;
}

bool Asiakas::talletaSaldo(double maara) {
    if (pankkitili) {
        return pankkitili->deposit(maara);
    }
    return false;
}

bool Asiakas::nostaSaldo(double maara) {
    if (pankkitili) {
        return pankkitili->withdraw(maara);
    }
    return false;
}

double Asiakas::getSaldo() const {
    if (pankkitili) {
        return pankkitili->getBalance();
    }
    return 0.0;
}
