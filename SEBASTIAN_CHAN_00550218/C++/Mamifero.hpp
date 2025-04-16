#ifndef MAMIFERO_HPP
#define MAMIFERO_HPP

#include <string>
using namespace std;

class Mamifero {
private:
    string nombre;

protected:
    double peso;

public:
    Mamifero(std::string nombre, double peso);
    void setNombre(std::string nombre);
    void setPeso(double peso);
    std::string getNombre();
    double getPeso();  
};

#endif