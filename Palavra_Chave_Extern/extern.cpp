#include <iostream>
#include "header.h"

// extern => serve para declarar funções e variáveis externas.
// Por padrão para funções (extern) já esta declarada.
// Ao contrário das variáveis que é preciso declarar (extern).

using namespace std;

int var = 10;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    cout << var << endl;

    return 0;
}
