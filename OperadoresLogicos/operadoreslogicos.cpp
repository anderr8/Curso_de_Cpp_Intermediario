#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

/* Operadores Lógicos: 
(&& = E)  = se as duas ou mais condições forem verdadeiras.
(|| = OU) = se uma condição for verdadeira. 
(! = Não) = se o argumento da direita for par.
*/
/*   
    //int n = 10;
    int n = 11;
    //if((n % 2 == 0) && n < 20){// Expressão condicional composta
    
    // if((n % 2 == 0) || n < 20){
    
    if(!(n % 2 == 0)){

        //cout << "Numero par e menor do que 20";
        cout << "Numero impar!";
    }
*/
/*
    {// True / False
        bool var = 10 < 20;
        if(var != 0){// expressão Verdadeira
        //if(!var)// expressão False
            cout <<"Verdadeiro";
        }
    }
*/

    {
        bool var1 = false;
        bool var2 = true;

        if(!var1 && var2)
        {
            cout << "apredendo c++" << endl;;
        }
    }
    return 0;
}
