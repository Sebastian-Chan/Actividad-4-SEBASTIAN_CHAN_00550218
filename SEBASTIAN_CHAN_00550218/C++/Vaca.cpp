#include "Vaca.hpp"
#include <string>
#include <iostream>
using namespace std;
// Constructor
Vaca::Vaca(string n, double p, double l) : Mamifero(n, p), litrosDeLeche(l) {}

// Método para imprimir detalles de la vaca
void Vaca::imprimirV(){
    cout << "Nombre de la vaca: " << getNombre() << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Litros de leche: " << litrosDeLeche << endl;
}
