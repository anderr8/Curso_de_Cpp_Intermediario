#include <iostream>
#define MAX 100

// Fun��o get => ela pega at� os espa�os vazios.

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    char nome[MAX];

    cout << " D�gite o seu nome: ";
    cin.get(nome, MAX);
    cout << " Oi " << nome << endl;
    
    return 0;
}
