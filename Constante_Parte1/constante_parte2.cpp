#include <iostream>

using namespace std;

// Vetor aloca espaço para Objetos.
// Ponteiro aloca espaço para endereço. 

int main(int argc, char const *argv[])
{
    const int vet[] = {1, 2, 3};
    const int* p1 = &vet[0];
    int const* p2 = &vet[1];
    int* const p3 = new int[3];
    const char* const p4 = "Marcos";

    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;

    cout << "P3: " << endl;
    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl; 

    cout << *(p4 + 1) << endl; // Imprimindo a segunda letra.

    *p3 = 10; // Modificando o valor.

    cout << "Valor modificado: " << *p3 << endl;

    return 0;
}
