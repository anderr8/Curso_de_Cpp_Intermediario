#include <iostream>
#include "lista.h"

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Lista<string> l;

    l.inserir_final(" Python");
    l.inserir_final(" C++");
    l.inserir_final(" Ruby");
    l.inserir_inicio(" Haskell");

    l.mostrar();

    if(l.vazia())
        cout << " Lista vazia!!\n";
    else
        cout << "\n Removendo o último elemento...\n";

    l.remover();

    l.mostrar();

    cout << " Tamanho da lista: " << l.tamanho() << endl;

    return 0;
}

