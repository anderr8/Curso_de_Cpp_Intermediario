// Sobrecarga de nomes de fun√ß√µes.

#include <iostream>
#include <locale.h>

using namespace std;


/*
// Exemplo 1:
void mensagem(int n){
    cout << "n˙mero: " << n << endl;
}

void mensagem(){
    cout << "Hello World!" << endl;
}

int main(int argc, char const *argv[])
{   
    setlocale(LC_ALL,"Portuguese");

    mensagem(10);
    mensagem();

    return 0;
}
*/


// Exemplo 2:
/*
void mensagem(int n){
    cout << "n˙mero: " << n << endl;
}

void mensagem(char c){
    cout << "Caractere: " << c << endl;
}

int main(int argc, char const *argv[])
{   
    setlocale(LC_ALL,"Portuguese");

    mensagem(10);
    mensagem('A');

    return 0;
}
*/

// Exemplo 3:

int soma(int n1, int n2){
    return n1 + n2;
}
int soma(int n1, int n2, int n3){
    return n1 + n2 + n3;
}

int main(int argc, char const *argv[])
{   
    setlocale(LC_ALL,"Portuguese");

    cout << soma(1, 2) << endl;
    cout << soma(1, 2, 3) << endl;

    return 0;
}