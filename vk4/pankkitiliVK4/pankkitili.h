#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>

class Pankkitili {
protected:
    std::string nimi;
    std::string kayttajaTunnus;
    double saldo;

public:
    Pankkitili(const std::string& nimi, const std::string& kayttajaTunnus, double alkuSaldo = 0.0);
    virtual ~Pankkitili() = default;
    std::string getNimi() const;
    std::string getKayttajaTunnus() const;
    double getBalance() const;
    virtual bool deposit(double maara);
    virtual bool withdraw(double maara);
    virtual bool transfer(Pankkitili& kohde, double maara);
};
#endif
