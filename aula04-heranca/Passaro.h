//
// Created by ferna on 02/11/2026.
//

#ifndef AULA04_HERANCA_PASSARO_H
#define AULA04_HERANCA_PASSARO_H
#include "Animal.h"


class Passaro : public Animal{
    public:
        Passaro();
        void emitirSom();
        void voar();
};


#endif //AULA04_HERANCA_PASSARO_H
