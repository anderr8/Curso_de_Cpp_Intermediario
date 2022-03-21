#include <iostream>

using namespace std;

/*
int main()
{   // Operadores binário, exemplos: + - * / %

    int n1, n2, resultado;
    n1 = 10;
    n2 = 20;
    resultado = n1 + n2;
    
    // resultado = n1 % n2; → % resto da divisão ou módulo
    // resultado = (float) n1, n2; → cast explícito
    cout << resultado;
    return 0;
}
*/
/*
int main()
{
    // Operdores Unários, exemplos: ++ -- += -= *=

    int n = 10;
    //n++; // igual à n = n + 1
    // n += 1; // igual à n++;

    n = (10 + 20) / 2; // () Operador de Precedência 

    cout << n;
    return 0;
}
*/

int main(int argc, char const *argv[])
{
    /* Operadores Unários: inversão de operadores*/

/*
    int num = 10;
    int num2 = -num; // imprimi -10, se o num fosse -10 imprimiria 10, inverteria o sinal
    cout << num2;
*/

/*
    int num = 10;
    cout << num++; // imprimi 10, pelos sinais estar á frente do num
*/

/*
    int num = 10;
    cout << ++num; // imprimi 11, porque o encremento esta antes do num
*/

    int num = 10;
    //int num2 = num++;
    int num2 = ++num;

    cout << num2;

    return 0;
}
