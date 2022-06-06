// Abrir um arquivo de saída:

#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    ofstream output("saida_io3.txt");
    output << "\n Aprendendo C++\n";
    output << "\n\n www.GeeksBR.com\n";

    return 0;
}
