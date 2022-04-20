#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //char* array = new char[100]; // Reserva 100 espaços na memória.
/*
    cout << "argc: " << argc << endl; // O primeiro argumento é o nome do programa.
    cout << "argv[0]: " << argv[0] << endl; // É um array de ponteiros para strings de caracteres.
*/
    // Array de ponteiros:
/*
    int n1 = 10, n2 = 20, n3 = 30;
    int* parray[3] = {&n1, &n2, &n3};

    //cout << *parray[2] << endl; // [3] → índice.

    parray[0] // → Ponteiro para inteiro
    parray[1] // → Ponteiro para inteiro
    parray[2] // → Ponteiro para inteiro


    cout << *parray[0] << endl;
    cout << *parray[1] << endl;
    cout << *parray[2] << endl;
*/

    cout << "Quantidade de argumentos: " << argc << endl;
    cout << "\n Argumentos passados: " << endl;

    for(int i = 0; i , argc; i++)
        cout << argv[i] << endl;

    return 0;
}
