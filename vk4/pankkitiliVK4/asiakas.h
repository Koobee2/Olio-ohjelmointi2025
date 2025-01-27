#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "pankkitili.h"
#include "luottotili.h"
#include <string>

class Asiakas {
private:
    std::string nimi;
    Pankkitili* pankkitili;
    Luottotili* luottotili;

public:
    Asiakas(const std::string& nimi);

    ~Asiakas();

    std::string getNimi() const;

    void setPankkitili(Pankkitili* tili);
    void setLuottotili(Luottotili* tili);
    bool talletaSaldo(double maara);
    bool nostaSaldo(double maara);
    double getSaldo() const;
};

#endif // ASIAKAS_H
