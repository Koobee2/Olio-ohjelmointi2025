#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string name);
    bool askSecret(string inputPassword, int flour, int water);

private:
    string password = "pizza";
    void makePizza(int flour, int water);


};

#endif // ITALIANCHEF_H
