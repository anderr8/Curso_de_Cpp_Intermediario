#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
/*
    const double PI = 3.1415; // Constante não pode ser alterada.
    cout << PI << endl;
*/
    // A palavra (const) também pode ser usada como ponteiro.

    const int vet[] = {1, 2, 3};
    const int* p1 = &vet[0];
    int const* p2 = &vet[1];
    int* const p3 = new int[3];

    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;

    cout << "P3: "<< endl;
    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl;


    return 0;
}
