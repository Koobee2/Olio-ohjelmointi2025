#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <string>

class Seuraaja {
public:
    Seuraaja(const std::string& nimi);
    std::string getNimi() const;
    void paivitys(const std::string& viesti);
    Seuraaja* next;

private:
    std::string nimi;
};

#endif // SEURAAJA_H
