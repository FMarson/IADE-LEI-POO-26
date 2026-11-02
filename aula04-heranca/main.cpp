#include <iostream>
#include <string>
#include "Cachorro.h"
#include "Gato.h"
#include "Passaro.h"

using namespace std;

int main() {
    Animal animal;
    Gato gato;
    Cachorro cachorro;
    Passaro passaro;

    animal.setAltura(50.2f);
    cout << "Altura: " << animal.getAltura() << endl;

    animal.comer();
    animal.dormir();
    animal.emitirSom();
    animal.locomover();

    gato.emitirSom();
    cachorro.emitirSom();
    passaro.emitirSom();

    gato.escalar();
    passaro.voar();
    cachorro.babar();

    passaro.locomover();

    cout << animal.getEspecie() << endl;
    cout << gato.getEspecie() << endl;
    cout << passaro.getEspecie() << endl;
    cout << cachorro.getEspecie() << endl;

    return 0;
}