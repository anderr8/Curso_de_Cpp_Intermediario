/*
 Operador Tern�rio (?):
<condi��o> ? <opera��o 1> : <opera��o 2>;

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int num = 10;
/*
    if(num > 10)
        cout << "N�mero maior que 10." << endl;
    else
        cout << "N�mero menor ou igual a 10." << endl;
*/

    num > 10 ? cout << " Maior" : cout << " Menor ou igual"; 

    return 0;
}
