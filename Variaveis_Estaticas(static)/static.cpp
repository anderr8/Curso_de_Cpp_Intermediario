#include <iostream>

using namespace std;

int gerarID(){
    static int ID = 0;
    return ID++;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    string nome;

    while(true){
        cout << " D�gite o nome da pessoa: ";
        cin >> nome;
        cout << " ID gerado para o usu�rio " << nome << ": " << gerarID() << "\n\n";
    }
    return 0;
}
