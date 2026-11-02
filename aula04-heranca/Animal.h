#ifndef AULA04_HERANCA_ANIMAL_H
#define AULA04_HERANCA_ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal {
    protected:
        string especie;
        float peso;
        int idade;
        char sexo;
        float altura;
        void setEspecie(string especie);

    public:
        Animal();
        void comer();
        void dormir();
        void emitirSom();
        void locomover();

        void setPeso(float peso);
        void setIdade(int idade);
        void setSexo(char sexo);
        void setAltura(float altura);

        string getEspecie();
        float getPeso();
        int getIdade();
        char getSexo();
        float getAltura();

        void imprimirInfo();
};


#endif //AULA04_HERANCA_ANIMAL_H
