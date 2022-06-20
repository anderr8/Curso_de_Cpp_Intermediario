#include <iostream>
#include "fila.h"

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Fila<double> f1;

    cout << " ANTES de inserir elementos...\n";

    if(f1.vazia())
        cout << " Fila vazia!!\n";
    else
        cout << " Fila NÂO vazia!!\n";

    try{
        double e = f1.remover();
        cout << " Removido o elemento: " << e << endl;
    } 
    catch(const char* msg){
        cerr << " Erro: " << msg << endl;
    }

    f1.inserir(5.67);
    f1.inserir(9.23);
    f1.inserir(1.45);

    cout << "\n DEPOIS de inserir elementos...\n";

    if(f1.vazia())
        cout << " Fila vazia!!\n";
    else
        cout << " Fila NÃO vazia!!\n";

    try{
        cout << " Elemento da frente: " << f1.frente() << endl;
    }
    catch(const char * msg){
        cerr << " Erro: " << msg << endl;
    }

    try{
        cout << " Elemento do final: " <<f1.final() << endl;
    }
    catch(const char * msg){
        cerr << " Erro: " << msg << endl;
    }

    try{
        double e = f1.remover();
        cout << " Removido o elemento: " << e << endl;
    }
    catch(const char* msg){
        cerr << " Erro: " << msg << endl;
    }

    try{
        cout << " Elemento da frente: " << f1.frente() << endl;
    }
    catch(const char * msg){
        cerr << " Erro: " << msg << endl;
    }

    Fila<string> f2;

    f2.inserir("C++");
    f2.inserir("Python");
    f2.inserir("Ruby");
    cout << "\n\n Fila de strings...\n";

    try{
        cout << " Elemento de frente: " << f2.frente() << endl;
    }
    catch(const char* msg){
        cerr << " Erro: " << msg << endl;
    }

    try{
        cout << " Elemento do final: " << f2.final() << endl;
    }
    catch(const char* msg){
        cerr << " Erro: " << msg << endl;
    }
 
    return 0;
}
