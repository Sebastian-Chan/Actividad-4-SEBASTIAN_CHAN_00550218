#ifndef VACA_HPP
#define VACA_HPP

#include "Mamifero.hpp"
#include <iostream>
#include <string>

class Vaca : public Mamifero {
private:
    double litrosDeLeche;

public:
    Vaca(std::string n, double p, double l);
    void imprimirV();
};

#endif