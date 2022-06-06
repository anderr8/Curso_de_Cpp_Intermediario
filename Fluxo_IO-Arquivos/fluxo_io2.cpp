// Abrir um arquivo para entrada e ler o conteúdo do arquivo:

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    ifstream in("fluxo_io2.txt");

    string texto;
    char c = in.get();
    texto.push_back(c);

    cout << "\n Mostrando cada caractere:\n";

    while(in.good()){
        cout << c;
        c = in.get();
        texto.push_back(c);
    }

    cout << "\n\n Mostrando a string:\n" << texto << endl;

    return 0;
}
