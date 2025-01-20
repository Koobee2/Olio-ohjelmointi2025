#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>
using namespace std;


class pankkitili
{
public:
    pankkitili(string,string,double);
    void talleta(double);
    void nosta(double);
    void tulostaTilitiedot();
    string getTilinumero();
    double getSaldo();
    bool siirra(pankkitili&,double);

private:
    string tilinumero;
    string tilinomistaja;
    double saldo;


};

#endif // PANKKITILI_H
