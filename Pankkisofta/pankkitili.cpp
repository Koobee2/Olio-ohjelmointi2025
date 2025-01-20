#include "pankkitili.h"
#include <iostream>

pankkitili::pankkitili(string n, string t, double s)
{
    tilinomistaja = n;
    tilinumero = t;
    saldo = s;
}


void pankkitili::talleta(double s)
{
    saldo = saldo + s;
}

void pankkitili::nosta(double s)
{
    saldo = saldo - s;
}

void pankkitili::tulostaTilitiedot()
{
    cout<<"Tilinomistaja = "<<tilinomistaja<<endl;
    cout<<"Tilinumero = "<<tilinumero<<endl;
    cout<<"Saldo = "<<saldo<<endl;
}

string pankkitili::getTilinumero()
{
    return tilinumero;
}

double pankkitili::getSaldo()
{
    return saldo;
}

bool pankkitili::siirra(pankkitili &tili, double s)
{
    if(saldo-s < 0)
    {
        return false;
    }
    else
    {
        tili.talleta(s);
        return true;
    }
    tili.talleta(s);
}
