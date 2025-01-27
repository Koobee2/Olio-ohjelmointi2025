#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili {
private:
    double luottoRaja;

public:

    Luottotili(const std::string& nimi, const std::string& kayttajaTunnus,
               double alkuSaldo = 0.0, double luottoRaja = 0.0);

    double getLuottoRaja() const;
    void setLuottoRaja(double raja);

    virtual bool withdraw(double maara) override;

    virtual bool deposit(double maara) override;
};

#endif // LUOTTOTILI_H
