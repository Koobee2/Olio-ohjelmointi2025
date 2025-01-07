<<<<<<< HEAD
#include <iostream>
#include <cstdlib>
#include <ctime>

//int game(){
int game(int maxnum) {
    srand(time(0));

    int arvottuluku = rand() % maxnum + 1;
    int arvaus;
    int arvauslaskuri = 0;

    while (arvaus != arvottuluku) {
        std::cout << "Arvaa luku 1-" << maxnum << ": ";
        std::cin >> arvaus;
        arvauslaskuri++;

        if (arvaus < arvottuluku) {
            std::cout << "Luku on suurempi" << std::endl;
        }
        else if (arvaus > arvottuluku) {
            std::cout << "Luku on pienempi" << std::endl;
        }
        else {
            std::cout << "Luku on oikein!" << std::endl;
        }
    }

    return arvauslaskuri;
}
int main(){
    int maxnum;
    std::cout << "Syota suurin luku: ";
    std::cin >> maxnum;

    int arvauslaskuri = game(maxnum);
    std::cout << "Arvasit oikein " << arvauslaskuri <<  "  kertaa arvattu" << std::endl;

    return 0;
}
=======
#include <iostream>
#include <cstdlib>
#include <ctime>

//int game(){
int game(int maxnum) {
    srand(time(0));

    int arvottuluku = rand() % maxnum + 1;
    int arvaus;
    int arvauslaskuri = 0;

    while (arvaus != arvottuluku) {
        std::cout << "Arvaa luku 1-" << maxnum << ": ";
        std::cin >> arvaus;
        arvauslaskuri++;

        if (arvaus < arvottuluku) {
            std::cout << "Luku on suurempi" << std::endl;
        }
        else if (arvaus > arvottuluku) {
            std::cout << "Luku on pienempi" << std::endl;
        }
        else {
            std::cout << "Luku on oikein!" << std::endl;
        }
    }

    return arvauslaskuri;
}
int main(){
    int maxnum;
    std::cout << "Syota suurin luku: ";
    std::cin >> maxnum;

    int arvauslaskuri = game(maxnum);
    std::cout << "Arvasit oikein " << arvauslaskuri <<  "  kertaa arvattu" << std::endl;

    return 0;
}
>>>>>>> f05b95f9559b93b235ff540f3388d0fb271d3131
