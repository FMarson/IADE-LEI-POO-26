//
// Created by ferna on 19/10/2026.
//

#include "Data.h"

Data::Data(int dia, int mes, int ano)
    : dia(dia), mes(mes), ano(ano) {
}

int Data::getDia() const {
    return dia;
}

void Data::setDia(int dia) {
    this->dia = dia;
}

int Data::getMes() const {
    return mes;
}

void Data::setMes(int mes) {
    this->mes = mes;
}

int Data::getAno() const {
    return ano;
}

void Data::setAno(int ano) {
    this->ano = ano;
}
