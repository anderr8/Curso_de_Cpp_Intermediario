// iostream => serve para executar o fluxo de (cin >> entrada) e (cout << saÃ­da).

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    int num;

    cout << " Dígite um número: ";
    cin >> num;
    cout << " Você dígitou: " << num << endl;
    return 0;
}
