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
        cout << "p1 cont�m o mesmo endere�o de p2" << endl;
*/
/*
    *p2 = 20;
    *p1 = 15; // S� o valor 15 ser� impresso, por que a execu��o � de cima para baixo e quando chega na linha 25 o valor 20 � trocado pelo valor 15.
    cout << var << endl;
*/

    int vet[] = {1, 2, 3};
    int *p1 = &vet[0], *p2 = &vet[1];

    cout << p1 << endl;
    cout << p2 << endl;

    p1 = &vet[2]; // p1 n�o ser� impresso.

    if (p1 < p2)
        cout << "p1 ser� impresso " << endl;
    
    return 0;
}
