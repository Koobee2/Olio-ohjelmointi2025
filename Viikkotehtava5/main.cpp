<<<<<<< HEAD
#include "Notifikaattori.h"
#include "Seuraaja.h"
#include <iostream>

int main() {
    std::cout << "Luodaan notifikaattori" << std::endl;
    Notifikaattori n;

    std::cout << "Luodaan seuraaja A" << std::endl;
    Seuraaja a("A");

    std::cout << "Luodaan seuraaja B" << std::endl;
    Seuraaja b("B");

    std::cout << "Luodaan seuraaja C" << std::endl;
    Seuraaja c("C");

    std::cout << "Notifikaattori lisaa seuraajan A" << std::endl;
    n.lisaa(&a);

    std::cout << "Notifikaattori lisaa seuraajan B" << std::endl;
    n.lisaa(&b);

    std::cout << "Notifikaattori lisaa seuraajan C" << std::endl;
    n.lisaa(&c);

    std::cout << "Notifikaattorin seuraajat: " << std::endl;
    n.tulosta();

    std::cout << "Notifikaattori postaa viestin Tama on viesti 1" << std::endl;
    n.postita("Tama on viesti 1");

    std::cout << "Notifikaattori poistaa seuraajan B" << std::endl;
    n.poista(&b);

    std::cout << "Notifikaattori postaa viestin Tama on viesti 2" << std::endl;
    n.postita("Tama on viesti 2");

    return 0;
}
=======
#include "Notifikaattori.h"
#include "Seuraaja.h"
#include <iostream>

int main() {
    std::cout << "Luodaan notifikaattori" << std::endl;
    Notifikaattori n;

    std::cout << "Luodaan seuraaja A" << std::endl;
    Seuraaja a("A");

    std::cout << "Luodaan seuraaja B" << std::endl;
    Seuraaja b("B");

    std::cout << "Luodaan seuraaja C" << std::endl;
    Seuraaja c("C");

    std::cout << "Notifikaattori lisaa seuraajan A" << std::endl;
    n.lisaa(&a);

    std::cout << "Notifikaattori lisaa seuraajan B" << std::endl;
    n.lisaa(&b);

    std::cout << "Notifikaattori lisaa seuraajan C" << std::endl;
    n.lisaa(&c);

    std::cout << "Notifikaattorin seuraajat: " << std::endl;
    n.tulosta();

    std::cout << "Notifikaattori postaa viestin Tama on viesti 1" << std::endl;
    n.postita("Tama on viesti 1");

    std::cout << "Notifikaattori poistaa seuraajan B" << std::endl;
    n.poista(&b);

    std::cout << "Notifikaattori postaa viestin Tama on viesti 2" << std::endl;
    n.postita("Tama on viesti 2");

    return 0;
}
>>>>>>> origin/main
