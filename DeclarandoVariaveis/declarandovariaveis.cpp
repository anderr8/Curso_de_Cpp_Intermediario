#include <iostream>


// cout => imprimi na tela.
using namespace std;

int main()
{
    //int idade, idade2, idade3; // Para declarar mais que uma variável é preciso colocar (,) vírgula.
    int Idade; // A variável Idade com a letra maiúscula é diferente da variável idade com a letra minúscula, porque o c++ é case sensitive. 
    /*
        Uma variável pode ser começada com uma letra (a z)minúscula, maisúcula (A Z) ou anderline.
        Números só depois da primeira letra da variável.Exemplo:
        int idade910;

        int 1idade; → variável não aceita, porque o número 1 começou a variável. 
        int i dade ; → variável não aceita, por causa do espaço. 

    */
    Idade = 20;
    cout << Idade;    

    return 0;
}