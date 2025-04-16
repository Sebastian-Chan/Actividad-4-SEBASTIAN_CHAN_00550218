#include "Gato.hpp"
#include <string>
#include <iostream>
using namespace std;

// Constructor
Gato::Gato(string nombre, double peso, int b) : Mamifero(nombre, peso), nBigotes(b) {}

// Método para imprimir detalles del gato
void Gato::imprimirG(){
    cout << "Nombre del gato: " << getNombre() << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Número de bigotes: " << nBigotes <<endl;
}