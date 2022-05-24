/*
 Operador Ternário (?):
<condição> ? <operação 1> : <operação 2>;

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int num = 10;
/*
    if(num > 10)
        cout << "Número maior que 10." << endl;
    else
        cout << "Número menor ou igual a 10." << endl;
*/

    num > 10 ? cout << " Maior" : cout << " Menor ou igual"; 

    return 0;
}
