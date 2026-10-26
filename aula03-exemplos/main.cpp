#include <iostream>
#include <ctime> // C++
//#include <time.h> // C
#include "Dado.h"
#include "Classe2.h"

using namespace std;

int main()
{
    int numero, seed = 1, faceDado;
    int valor;

    //srand(seed);
    srand(time(0));

    for (int i = 0; i < 20; i++)
    {
        numero = rand() ;
        //cout << numero << endl;

        faceDado = rand() % 6 + 1; // 1 .. 6
        //cout << "Face sorteada: " << faceDado << endl;

        valor = rand() % 28 + 15; // 15 + 0 até 27 -> 15 e 42
        //cout << valor << endl;
    }

    int vetor[10];
    int *pVetor;

    pVetor = new int[20];

    pVetor[0] = 19;
    pVetor[19] = 8273;
    delete pVetor;

    pVetor = new int[200];

    pVetor[0] = 19;
    pVetor[199] = 8273;
    delete pVetor;
    

    Dado dado1, dado2(20), *dado3;

    dado3 = new Dado();

    cout << dado1.sortear() << endl;
    cout << dado2.sortear() << endl;  // usa o operador . pq é um objeto estático
    cout << dado3->sortear() << endl; // usa o operador -> pq é um ponteiro


    return 0;
}
