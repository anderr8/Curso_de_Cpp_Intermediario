#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Program para somar */

    setlocale(LC_ALL, "Portuguese");

    int A, B;

    cout << " D�gite o primeiro n�mero: "; // Coloquei n�o precisava
    cin >> A;
    cout << " D�gite o segundo n�mero: ";  // Coloquei n�o precisava
    cin >> B;

    int soma = A + B;

    cout << " SOMA = " << soma << endl;


    return 0;
}

