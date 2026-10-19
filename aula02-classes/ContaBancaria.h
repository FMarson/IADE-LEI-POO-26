//
// Created by ferna on 19/10/2026.
//

#ifndef AULA02_CLASSES_CONTABANCARIA_H
#define AULA02_CLASSES_CONTABANCARIA_H


#include <string>
#include "Cliente.h"
#include "Data.h"
#include "TipoConta.h"

using namespace std;

class ContaBancaria {
private:
    int agencia;
    int numero;
    Cliente cliente;
    Data dataAbertura;
    string senha;
    TipoConta tipo;
    double saldo;
    double limiteContratado;
    double limiteUtilizado;
    bool ativa;

public:
    ContaBancaria();

    ContaBancaria(
        int agencia,
        int numero,
        Cliente cliente,
        Data dataAbertura,
        string senha,
        TipoConta tipo
    );

    ContaBancaria(
        int agencia,
        int numero,
        Cliente cliente,
        Data dataAbertura,
        string senha,
        TipoConta tipo,
        double limiteContratado
    );

    bool autenticar(string senha) const;

    void depositar(double valor);

    double sacar(double valor, string senha);

    void consultarSaldo(string senha) const;

    void alterarSenha(
        string senhaAtual,
        string novaSenha
    );

    void bloquear(string senha);

    void desbloquear(string senha);

    bool estaBloqueada() const;

private:
    void bloquear();
    void desbloquear();
};


#endif //AULA02_CLASSES_CONTABANCARIA_H
