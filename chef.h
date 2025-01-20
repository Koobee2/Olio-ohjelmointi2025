#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;


class Chef
{
protected:
    string chefName;
public:
    Chef(string name);
    string getChefName();
    int makeSalad(int ainekset);
    int makeSoup(int ainekset);
    virtual ~Chef();
};

#endif // CHEF_H
