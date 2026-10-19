//
// Created by ferna on 19/10/2026.
//
#include "Cliente.h"

Cliente::Cliente(
    string nome,
    string CPF,
    Data dataNascimento,
    string endereco
)
    : nome(nome),
      CPF(CPF),
      dataNascimento(dataNascimento),
      endereco(endereco) {
}

string Cliente::getNome() const {
    return nome;
}

void Cliente::setNome(string nome) {
    this->nome = nome;
}

string Cliente::getCPF() const {
    return CPF;
}

void Cliente::setCPF(string CPF) {
    this->CPF = CPF;
}

string Cliente::getEndereco() const {
    return endereco;
}

void Cliente::setEndereco(string endereco) {
    this->endereco = endereco;
}

Data Cliente::getDataNascimento() const {
    return dataNascimento;
}

void Cliente::setDataNascimento(Data dataNascimento) {
    this->dataNascimento = dataNascimento;
}