#include "pankkitili.h"

Pankkitili::Pankkitili(const std::string& nimi, const std::string& kayttajaTunnus, double alkuSaldo)
    : nimi(nimi), kayttajaTunnus(kayttajaTunnus), saldo(alkuSaldo) {}

std::string Pankkitili::getNimi() const {
    return nimi;
}

std::string Pankkitili::getKayttajaTunnus() const {
    return kayttajaTunnus;
}

double Pankkitili::getBalance() const {
    return saldo;
}

bool Pankkitili::deposit(double maara) {
    if (maara <= 0) return false;
    saldo += maara;
    return true;
}

bool Pankkitili::withdraw(double maara) {
    if (maara <= 0 || maara > saldo) return false;
    saldo -= maara;
    return true;
}

bool Pankkitili::transfer(Pankkitili& kohde, double maara) {
    if (withdraw(maara)) {
        if (kohde.deposit(maara)) return true;
        deposit(maara); // Return money if deposit fails
    }
    return false;
}
