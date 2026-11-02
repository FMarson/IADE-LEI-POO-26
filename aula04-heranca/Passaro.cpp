//
// Created by ferna on 02/11/2026.
//

#include "Passaro.h"

Passaro::Passaro() {
    altura = 0.10f;
    setAltura(0.10f);
    setEspecie("Passaro");
}

void Passaro::emitirSom() {
    cout << "Piu piu.." << endl;
}

void Passaro::voar() {
    cout << "O passaro esta voando!\n";
}
