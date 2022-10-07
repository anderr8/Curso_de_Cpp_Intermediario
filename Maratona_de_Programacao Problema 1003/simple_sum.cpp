#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Program para somar */

    setlocale(LC_ALL, "Portuguese");

    int A, B;

    cout << " Dígite o primeiro número: "; // Coloquei não precisava
    cin >> A;
    cout << " Dígite o segundo número: ";  // Coloquei não precisava
    cin >> B;

    int soma = A + B;

    cout << " SOMA = " << soma << endl;


    return 0;
}

