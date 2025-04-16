#ifndef GATO_HPP
#define GATO_HPP

#include "Mamifero.hpp"
#include <iostream>
#include <string>

using namespace std;

class Gato : public Mamifero {
private:
    int nBigotes;

public:
    Gato(std::string nombre, double peso, int b);
    void imprimirG();
};

#endif