#include <iostream>
#include "chef.h"
using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << chefName << " constructor" << endl;
}
Chef::~Chef() {
    cout << chefName << " destructor" << endl;
}


string Chef::getChefName() {
    return chefName;
}

int Chef::makeSalad(int ainekset) {
    int portions = ainekset / 5;
    cout << chefName << " makes " << portions << " salad portions with " << ainekset << " ingredients." << endl;
    return portions;
}

int Chef::makeSoup(int ainekset) {
    int portions = ainekset / 3;
    cout << chefName << " makes " << portions << " soup portions with " << ainekset << " ingredients." << endl;
    return portions;
}
