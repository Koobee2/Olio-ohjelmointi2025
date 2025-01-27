#include "luottotili.h"

Luottotili::Luottotili(const std::string& nimi, const std::string& kayttajaTunnus,
                       double alkuSaldo, double luottoRaja)
    : Pankkitili(nimi, kayttajaTunnus, alkuSaldo), luottoRaja(luottoRaja) {}

double Luottotili::getLuottoRaja() const {
    return luottoRaja;
}

void Luottotili::setLuottoRaja(double raja) {
    if (raja >= 0) {
        luottoRaja = raja;
    }
}

bool Luottotili::withdraw(double maara) {
    if (maara <= 0) {
        return false;
    }

    if (saldo - maara >= -luottoRaja) {
        saldo -= maara;
        return true;
    }
    return false;
}

bool Luottotili::deposit(double maara) {
    return Pankkitili::deposit(maara);
}
