#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Pilha p;

    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12);

    p.desempilhar();

    cout << " Pilha Vazia: " << p.vazia() << endl; 
    cout << " Topo: " << p.getTopo() << endl;

    system("pause");

    return 0;
}

/* Para criar o arquivo .exe, tem que usar o terminal vs code dentro da pasta dos arquivos:

g++ main_pilha.cpp pilha.cpp -o pilha.exe 

 Pode clicar no arquivo .exe para testa-lo ou copiar o caminho e colar no CMD do Windows.
 
 */