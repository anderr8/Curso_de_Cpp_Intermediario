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
    
    cout << "D�gite um n�mero: ";
    //cin >> aux[0];
    cin >> *(aux);
    cout << "Voc� digitou: " << aux[0] << endl;

    cout << "D�gite outro n�mero: ";
    cin >> *(aux + 1);
    cout << "Voc� digitou: " << aux[1] << endl;
*/
/*
    int* vet = new int[10]; // Reserva espa�o na mem�ria.

    cout << "D�gite um n�mero: ";
    cin >> *(vet);
    cout << "Voc� digitou: " << *(vet) << endl;

    cout << "D�gite outro n�mero: ";
    cin >> *(vet + 1);
    cout << "Voc� digitou: " << *(vet + 1) << endl;
*/
/*

    int* parray = new int[10];


    cout << "D�gite um n�mero: ";
    cin >> *(parray);
    cout << "Voc� digitou: " << *(parray) << endl;


    delete[] parray; // Delete ? comando para retornar a mem�ria � pilha, � um h�bito importante.
    parray = NULL; // Sempre usar este comando, � us4ado como boa pr�tica de programa��o.
*/

    int var = 10;
    int* pvar;

    pvar = &var;
    cout << *pvar << endl;

    delete pvar;
    pvar = NULL;

    return 0;
}
