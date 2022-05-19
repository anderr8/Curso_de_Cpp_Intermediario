#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese");
/*
    Pilha<int> p(100);

    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12);

    p.desempilhar();

    cout << " Pilha Vazia: " << p.vazia() << endl; 
    cout << " Topo: " << p.getTopo() << endl;
*/
/*
    Pilha<float> p(100);

    p.empilhar(10.25);
    p.empilhar(11.14);
    p.empilhar(12.05);

    p.desempilhar();

    cout << " Pilha Vazia: " << p.vazia() << endl; 
    cout << " Topo: " << p.getTopo() << endl;
*/

    Pilha<const char*> p(100);

    p.empilhar("Python");
    p.empilhar("Haskell");
    p.empilhar("C++");

    
    p.desempilhar();
/*
    cout << " Pilha Vazia: " << p.vazia() << endl; 
    cout << " Topo: " << p.getTopo() << endl;
*/

    if(p.vazia())
        cout << "PIlha vazia!\n";
    else
        cout << "Pilha N�o Alocada!\n";
    if(p.getTopo() != NULL)
        cout << "Topo: " << p.getTopo() << endl;
    else
        cout << " A pilha est� vazia!\n";


    //system("pause");

    return 0;
}