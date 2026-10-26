//
// Created by ferna on 26/10/2026.
//

#include "Dado.h"

#include <cstdlib>
#include <ctime>
#include <iostream>

Dado::Dado()
{
    srand(time(0));
    nFaces = 6;
}

Dado::Dado(int nFaces)
{
    srand(time(0));
    this->nFaces = nFaces;
}

Dado::~Dado()
{
   std::cout << "Morreu!\n";
}

int Dado::sortear()
{
    faceSorteada = rand() % nFaces + 1;
    return faceSorteada;
}
