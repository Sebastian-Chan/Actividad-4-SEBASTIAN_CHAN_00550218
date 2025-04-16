#include "Mamifero.hpp"
#include <string>

using namespace std;

// Constructor
Mamifero::Mamifero(string nombre, double peso) : nombre(nombre), peso(peso) {}

// Métodos
void Mamifero::setNombre(string nombre) {
    this->nombre = nombre;
}

string Mamifero::getNombre() {
    return nombre;
}

// ✅ Implementación del método getPeso()
void Mamifero::setPeso(double peso){
    this->peso=peso;
}
double Mamifero::getPeso() {
    return peso;
}