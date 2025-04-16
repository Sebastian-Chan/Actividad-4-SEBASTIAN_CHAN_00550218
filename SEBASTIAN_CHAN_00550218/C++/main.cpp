#include "Gato.hpp"
#include "Vaca.hpp"
#include "Ballena.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Gato meow("Cleo", 4.3, 8);
    meow.imprimirG();

    Vaca moo("Lola", 557.65, 26);
    moo.imprimirV();

    Ballena moby("Moby Dick", 3000.0);
    cout << "\nBallena:" << endl;
    cout << "Nombre: " << moby.getNombre() << endl;
    cout << "Peso: " << moby.getPeso() << endl;

    return 0;
}