#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Pilha.p;

    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12);

    p.desempilhar();

    cout << "Pilha vazia: " << p.vazia() << endl;
    cout << "Topo: " << p.getTopo() << endl;

    return 0;
}

