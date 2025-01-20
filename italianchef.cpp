#include "italianchef.h"
using namespace std;
#include <iostream>

ItalianChef::ItalianChef(string name) : Chef(name) {}

void ItalianChef::makePizza(int flour, int water) {
    int pizzaCount = min(flour / 5, water / 5);
    cout << chefName << " with " << flour << " flour and " << water
         << " water can make " << pizzaCount << " pizzas." << endl;
}
bool ItalianChef::askSecret(string inputPassword, int flour, int water) {
    if (inputPassword == password) {
        makePizza(flour, water);
        return true;
    } else {
        cout << "Wrong password!" << endl;
        return false;
    }
}
