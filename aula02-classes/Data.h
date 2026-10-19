//
// Created by ferna on 19/10/2026.
//

#ifndef AULA02_CLASSES_DATA_H
#define AULA02_CLASSES_DATA_H


class Data {
private:
    int dia;
    int mes;
    int ano;

public:
    Data(int dia, int mes, int ano);

    int getDia() const;
    void setDia(int dia);

    int getMes() const;
    void setMes(int mes);

    int getAno() const;
    void setAno(int ano);
};


#endif //AULA02_CLASSES_DATA_H
