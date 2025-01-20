#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef chef("Masa");
    chef.makeSalad(15);
    chef.makeSoup(9);

    ItalianChef italianChef("Pablo");


    italianChef.askSecret("pizza", 10, 10);

    return 0;
}
