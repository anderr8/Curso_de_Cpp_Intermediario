#include <iostream>

using namespace std;
/*
void foo(int* n){// Trocando o endereço da variável.
    *n = 20;
}
*/
void foo(int aux[]){// → Nome do vetor é o endereço.
    aux[0] = 100;
}

int main(int argc, char const *argv[])
{
/*    Variáveis Ponteiros, ponteiro é uma variável que contém outro     endereço dentro de outra variável na memória interna do computador. 
*/

/*
    int var = 10;
    int* pvar;
    pvar = &var;
    *pvar = 20;

    cout << *pvar << endl;
    cout << var << endl;
*/

    /* Modificando o valor da variável: */
/*
    int var = 10;
    int* pvar;

    //pvar = &var;

    foo(&var);
    cout << var << endl;
*/

    int* vet = new int[10]; // new serve para alocar memória, neste exemplo foi alocado 10 espaços na memória.
    int aux[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    // Outro exemplo:
    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;


    cout << *(vet + 0) << endl;
    cout << *(vet + 1) << endl;
    cout << *(vet + 2) << endl;

    foo(aux);

    cout << aux[0] << endl;
    cout << *(aux + 0) << endl;
    cout << *(aux) << endl; // Igual a (aux + 0).

    return 0;
}
