//
// Created by ferna on 02/11/2026.
//

#include "Cachorro.h"

Cachorro::Cachorro() {
    setEspecie("Cachorro");
}

void Cachorro::emitirSom() {
    cout << "Au au..." << endl;
}

void Cachorro::babar() {
    cout << "O cachorro esta babando!" << endl;
}
