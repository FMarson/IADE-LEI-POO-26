//
// Created by ferna on 19/10/2026.
//

#include "ContaBancaria.h"

#include <iostream>

using namespace std;

ContaBancaria::ContaBancaria(
    int agencia,
    int numero,
    Cliente cliente,
    Data dataAbertura,
    string senha,
    TipoConta tipo
)
    : agencia(agencia),
      numero(numero),
      cliente(cliente),
      dataAbertura(dataAbertura),
      senha(senha),
      tipo(tipo),
      saldo(0.0),
      limiteContratado(0.0),
      limiteUtilizado(0.0),
      ativa(true) {
}

ContaBancaria::ContaBancaria(
    int agencia,
    int numero,
    Cliente cliente,
    Data dataAbertura,
    string senha,
    TipoConta tipo,
    double limiteContratado
)
    : agencia(agencia),
      numero(numero),
      cliente(cliente),
      dataAbertura(dataAbertura),
      senha(senha),
      tipo(tipo),
      saldo(0.0),
      limiteContratado(0.0),
      limiteUtilizado(0.0),
      ativa(true) {

    if (tipo == TipoConta::CONTA_CORRENTE) {
        this->limiteContratado = limiteContratado;
    }
}

bool ContaBancaria::autenticar(string senha) const {
    return senha == this->senha;
}

void ContaBancaria::depositar(double valor) {
    if (valor <= 0.0) {
        cout << "O valor do deposito deve ser superior a zero."
             << endl;
        return;
    }

    cout << "Deposito de €$ " << valor << " efetuado!"
         << endl;

    if (limiteUtilizado > 0.0) {
        limiteUtilizado -= valor;

        if (limiteUtilizado < 0.0) {
            saldo = -limiteUtilizado;
            limiteUtilizado = 0.0;
        }
    } else {
        saldo += valor;
    }
}

double ContaBancaria::sacar(
    double valor,
    string senha
) {
    if (valor <= 0.0) {
        cout << "O valor do levantamento deve ser superior "
                "a zero."
             << endl;
        return 0.0;
    }

    if (estaBloqueada()) {
        cout << "A conta esta bloqueada!" << endl;
        return 0.0;
    }

    if (!autenticar(senha)) {
        cout << "Senha incorreta!" << endl;
        return 0.0;
    }

    double valorDisponivel =
        saldo + (limiteContratado - limiteUtilizado);

    if (valorDisponivel < valor) {
        cout << "Saldo e limite contratado nao sao suficientes "
                "para efetuar o levantamento."
             << endl;
        return 0.0;
    }

    saldo -= valor;

    if (saldo < 0.0) {
        limiteUtilizado -= saldo;
        saldo = 0.0;
    }

    cout << "Foi efetuado um levantamento de $ "
         << valor << endl;

    return valor;
}

void ContaBancaria::consultarSaldo(string senha) const {
    if (estaBloqueada()) {
        cout << "A conta esta bloqueada!" << endl;
        return;
    }

    if (!autenticar(senha)) {
        cout << "Senha incorreta!" << endl;
        return;
    }

    cout << "Saldo: $ " << saldo << endl;

    if (limiteContratado > 0.0) {
        cout << "Limite contratado: $ "
             << limiteContratado << endl;

        cout << "Limite utilizado: $ "
             << limiteUtilizado << endl;
    }
}

void ContaBancaria::alterarSenha(
    string senhaAtual,
    string novaSenha
) {
    if (estaBloqueada()) {
        cout << "A conta esta bloqueada!" << endl;
        return;
    }

    if (!autenticar(senhaAtual)) {
        cout << "Senha incorreta!" << endl;
        return;
    }

    if (autenticar(novaSenha)) {
        cout << "A nova senha eh igual a senha anterior!"
             << endl;
        return;
    }

    senha = novaSenha;

    cout << "A senha foi modificada!" << endl;
}

void ContaBancaria::bloquear(string senha) {
    if (estaBloqueada()) {
        cout << "A conta ja esta bloqueada!" << endl;
        return;
    }

    if (!autenticar(senha)) {
        cout << "Senha incorreta!" << endl;
        return;
    }

    bloquear();
}

void ContaBancaria::bloquear() {
    if (estaBloqueada()) {
        cout << "A conta ja esta bloqueada!" << endl;
    } else {
        ativa = false;
        cout << "A conta foi bloqueada." << endl;
    }
}

void ContaBancaria::desbloquear(string senha) {
    if (!estaBloqueada()) {
        cout << "A conta ja esta desbloqueada!" << endl;
        return;
    }

    if (!autenticar(senha)) {
        cout << "Senha incorreta!" << endl;
        return;
    }

    desbloquear();
}

void ContaBancaria::desbloquear() {
    if (!estaBloqueada()) {
        cout << "A conta ja esta desbloqueada!" << endl;
    } else {
        ativa = true;
        cout << "A conta foi desbloqueada." << endl;
    }
}

bool ContaBancaria::estaBloqueada() const {
    return !ativa;
}