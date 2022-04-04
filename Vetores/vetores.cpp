#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
/*
    int vetor[101]; // Começa a ser contado a partir do 0.

    for(int i = 0; i < 101; i++)
        vetor[i] = i;
    for(int i = 0; i <101; i++)
        cout << vetor[i] << endl;
*/

    int vetor[4] = {1, 2, 3, 4};
    for(
        //int i = 0; i < 4; i++)
        char vetor[5] = {'1', '2', '3', '4', '5'}; // para cada caractere char tem 1 byte.
        
        cout << "Segundo elemento: " << vetor[1] << endl;
        cout << sizeof(vetor) << endl; //→ mostra o tamanho do vetor, cada vetor tem 4 bits.


        //cout << vetor[i] << endl;

    return 0;
}