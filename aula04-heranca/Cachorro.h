//
// Created by ferna on 02/11/2026.
//

#ifndef AULA04_HERANCA_CACHORRO_H
#define AULA04_HERANCA_CACHORRO_H
#include "Animal.h"


class Cachorro : public Animal{
    public:
        Cachorro();
        void emitirSom();
        void babar();
};


#endif //AULA04_HERANCA_CACHORRO_H
