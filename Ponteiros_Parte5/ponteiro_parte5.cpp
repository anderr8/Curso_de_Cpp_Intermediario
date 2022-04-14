#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
/*
    int var = 10;
    int* p1, * p2;

    p1 = &var;
    p2 = &var;
*/
/*
    cout << p1 << endl;
    cout << p2 << endl;
    cout << &var << endl;
*/
/*
    if(p1 == p2)
        cout << "p1 contém o mesmo endereço de p2" << endl;
*/
/*
    *p2 = 20;
    *p1 = 15; // Só o valor 15 será impresso, por que a execução é de cima para baixo e quando chega na linha 25 o valor 20 é trocado pelo valor 15.
    cout << var << endl;
*/

    int vet[] = {1, 2, 3};
    int *p1 = &vet[0], *p2 = &vet[1];

    cout << p1 << endl;
    cout << p2 << endl;

    p1 = &vet[2]; // p1 não será impresso.

    if (p1 < p2)
        cout << "p1 será impresso " << endl;
    
    return 0;
}
