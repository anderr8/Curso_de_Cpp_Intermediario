#include <iostream>
#include "header.h"

// extern => serve para declarar fun��es e vari�veis externas.
// Por padr�o para fun��es (extern) j� esta declarada.
// Ao contr�rio das vari�veis que � preciso declarar (extern).

using namespace std;

int var = 10;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    cout << var << endl;

    return 0;
}
