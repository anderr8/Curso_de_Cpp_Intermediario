#include <iostream>

/* Calculando o Fatorial:
    0! = 1! = 1
    3! = 3 * 2 * 1 = 6
    4! = 4 * 3 * 2 * 1 = 24
    5! = 5 * 4 * 3 * 2 * = 120
*/

using namespace std;

int main(int argc, char const *argv[])
{
    int num, fat = 1;
    cout << "Digite um numero: ";
    cin >> num;
    for (int i = 1; i < num; i++)
    
        fat = fat * (i + 1); // Por ser uma linha pode ser retirada as chaves({}).
    
    cout << "Fatorial: " << fat << endl;
    
    return 0;
}
