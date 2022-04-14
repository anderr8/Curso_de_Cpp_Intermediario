#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    /* Percorrendo os vetores*/

/*
    int aux[3];

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;

    for(int i = 0; i <sizeof(aux)/sizeof(int); i++) // Percorre os vetores
        cout << aux[i] << endl;
*/
/*
    int aux[3];

    // Entrada de dados:
    
    cout << "Dígite um número: ";
    //cin >> aux[0];
    cin >> *(aux);
    cout << "Você digitou: " << aux[0] << endl;

    cout << "Dígite outro número: ";
    cin >> *(aux + 1);
    cout << "Você digitou: " << aux[1] << endl;
*/
/*
    int* vet = new int[10]; // Reserva espaço na memória.

    cout << "Dígite um número: ";
    cin >> *(vet);
    cout << "Você digitou: " << *(vet) << endl;

    cout << "Dígite outro número: ";
    cin >> *(vet + 1);
    cout << "Você digitou: " << *(vet + 1) << endl;
*/
/*

    int* parray = new int[10];


    cout << "Dígite um número: ";
    cin >> *(parray);
    cout << "Você digitou: " << *(parray) << endl;


    delete[] parray; // Delete ? comando para retornar a memória à pilha, é um hábito importante.
    parray = NULL; // Sempre usar este comando, é us4ado como boa prática de programação.
*/

    int var = 10;
    int* pvar;

    pvar = &var;
    cout << *pvar << endl;

    delete pvar;
    pvar = NULL;

    return 0;
}
