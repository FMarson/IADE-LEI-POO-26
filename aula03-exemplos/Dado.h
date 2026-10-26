//
// Created by ferna on 26/10/2026.
//

#ifndef AULA03_EXEMPLOS_DADO_H
#define AULA03_EXEMPLOS_DADO_H


class Dado
{
    private:
        int nFaces;
        int nJogadas;
        int faceSorteada;

    public:
        Dado();
        Dado(int nFaces);
        ~Dado();

        int sortear();
};


#endif //AULA03_EXEMPLOS_DADO_H
