#include <iostream>

using namespace std;

/*
 Exceções => Serve para reportar um erro, e para tratar o erro.
 try => tenta excutar um bloco  do código.
 catch => irá pegar algo para tratar.
 throw => irá lançar um erro.
*/

int fat(int n){
    if(n < 0)
        throw "N�mero negativo!!";
    if(n == 0 || n == 1)
        return 1;
    return n * fat(n - 1);

}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    try{
        cout << " Fatorial de 5: " << fat(5) << endl;
        cout << " Fatorial de -5: " << fat(-5) << endl;
    }
    catch(const char* e){
        cerr << " Erro: " << e << endl;
    }
    catch(...){// Retic�ncias => pagar� qualquer erro definido.
        cerr << " Erro inesperado.\n";
    }
    return 0;
}


