// iostream => serve para executar o fluxo de (cin >> entrada) e (cout << saída).

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    int num;

    cout << " D�gite um n�mero: ";
    cin >> num;
    cout << " Voc� d�gitou: " << num << endl;
    return 0;
}
