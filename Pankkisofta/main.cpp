#include <iostream>
#include "pankkitili.h"

using namespace std;

int main()
{
    pankkitili tili1("Pekka Virtanen","1111",1000.5);
    pankkitili tili2("Masa Mainio","2222",100.9);

    cout<<"tulostetaan tilitiedot"<<endl;
    tili1.tulostaTilitiedot();
    tili2.tulostaTilitiedot();

    return 0;
}
