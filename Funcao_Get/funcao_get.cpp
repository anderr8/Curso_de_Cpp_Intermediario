#include <iostream>
#define MAX 100

// Função get => ela pega até os espaços vazios.

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    char nome[MAX];

    cout << " Dígite o seu nome: ";
    cin.get(nome, MAX);
    cout << " Oi " << nome << endl;
    
    return 0;
}
