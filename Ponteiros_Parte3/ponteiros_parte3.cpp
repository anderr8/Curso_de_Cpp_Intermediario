#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
/*
    int array[] = {1, 2, 3, 4, 5};
    int* parray = &array[0];

    cout << *parray << endl;
*/
/*
    int array[] = {1, 2, 3, 4, 5};
    //int* parray = &array[0];
    int* parray = &array[4];
    //int i = 0;
    int i = 4; // Imprimindo frente para trás. 

    // Loop:
    //while(i < 5)
    while(i >=0){
        cout << *parray << endl;
        //parray = parray + 1;
        //parray += 2; // para pular de 2 em 2.
        parray--;
        //i++;
        //i += 2;
        i--;
    }
*/

/*
    // De Ponteiro para Ponteiro:
    int array[] = {1, 2, 3, 4, 5};
    int* parray = &array[4];
    int** pparray = &parray;
    int*** ppparray = &pparray;

    cout << **pparray << endl;
*/

/*
    // Indexação, para mostrar um determinado número:
    int array[] = {1, 2, 3, 4, 5};
    int* parray = &array[0];

    //cout << array[0] << endl;
    cout << *(parray + 1) << endl; // Operador (*) asterisco unário.
*/

    char nome[100];
    int tam;
    char* p;
    char* pini;

    cout << "D�gite um nome: ";
    cin >> nome;

    tam = strlen(nome);
    p = &nome[tam - 1];
    pini = &nome[0];

    while(true){
        cout << *p;
        if(p == pini)
            break;
        p--;
    }
    cout << endl;

    return 0;
}
