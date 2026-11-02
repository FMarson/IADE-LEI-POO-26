//
// Created by ferna on 02/11/2026.
//

#ifndef AULA04_HERANCA_GATO_H
#define AULA04_HERANCA_GATO_H
#include "Animal.h"


class Gato : public Animal{
    public:
        Gato();
        void emitirSom();
        void escalar();
};


#endif //AULA04_HERANCA_GATO_H
