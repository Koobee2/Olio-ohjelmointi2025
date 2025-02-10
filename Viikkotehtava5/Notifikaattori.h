#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"

class Notifikaattori {
public:
    Notifikaattori();
    void lisaa(Seuraaja* seuraaja);
    void poista(Seuraaja* seuraaja);
    void tulosta() const;
    void postita(const std::string& viesti);

private:
    Seuraaja* seuraajat;
};

#endif // NOTIFIKAATTORI_H
