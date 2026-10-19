#include <iostream>

#include "Cliente.h"
#include "ContaBancaria.h"
#include "Data.h"
#include "TipoConta.h"

using namespace std;

int main() {
    Data dataNascimento(15, 8, 1990);

    Cliente cliente(
        "Ana Martins",
        "123456789",
        dataNascimento,
        "Rua Principal, Lisboa"
    );

    Data dataAbertura(19, 10, 2026);

    ContaBancaria conta(
        1234,
        56789,
        cliente,
        dataAbertura,
        "1234",
        TipoConta::CONTA_CORRENTE,
        1000.0
    );

    conta.depositar(500.0);

    conta.consultarSaldo("1234");

    conta.sacar(300.0, "1234");

    conta.consultarSaldo("1234");

    conta.alterarSenha("1234", "5678");

    conta.bloquear("5678");

    conta.consultarSaldo("5678");

    conta.desbloquear("5678");

    conta.consultarSaldo("5678");

    return 0;
}