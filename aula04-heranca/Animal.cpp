//
// Created by ferna on 02/11/2026.
//

#include "Animal.h"

Animal::Animal() {
    especie = "Indefinida";
}

void Animal::comer() {
    cout << "Comendo.\n";
}

void Animal::dormir() {
    cout << "Dormindo.\n";
}

void Animal::emitirSom() {
    cout << "Emitindo som.\n";
}

void Animal::locomover() {
    cout << "Locomovendo.\n";
}

void Animal::setAltura(float altura) {
    this->altura = altura;
}

void Animal::setEspecie(string especie) {
    this->especie = especie;
}

void Animal::setIdade(int idade) {
    this->idade = idade;
}

void Animal::setPeso(float peso) {
    this->peso = peso;
}

void Animal::setSexo(char sexo) {
    this->sexo = sexo;
}

string Animal::getEspecie() {
    return especie;
}

float Animal::getAltura() {
    return altura;
}

float Animal::getPeso() {
    return peso;
}

int Animal::getIdade() {
    return idade;
}

char Animal::getSexo() {
    return sexo;
}
