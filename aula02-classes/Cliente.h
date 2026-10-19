//
// Created by ferna on 19/10/2026.
//

#ifndef AULA02_CLASSES_CLIENTE_H
#define AULA02_CLASSES_CLIENTE_H

#include <string>
#include "Data.h"

using namespace std;

class Cliente
{
private:
    string nome;
    string CPF;
    Data dataNascimento;
    string endereco;

public:
    Cliente(
        string nome,
        string CPF,
        Data dataNascimento,
        string endereco
    );

    string getNome() const;
    void setNome(string nome);

    string getCPF() const;
    void setCPF(string CPF);

    string getEndereco() const;
    void setEndereco(string endereco);

    Data getDataNascimento() const;
    void setDataNascimento(Data dataNascimento);
};


#endif //AULA02_CLASSES_CLIENTE_H
