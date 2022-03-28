#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{   

    /* Contagem de 1 até 100: */


/*
    int n = 1;
    //while(expressao)
    
    while(n <= 100)
    {
        cout << n << endl;
        n++;
    }

    return 0;
*/

/*    
    int n = 1;
    while(n <= 100)
    {   
        if(n > 50) // Será imprimido até 50. 
        {
            break; // Saí do Loop.
        }
        
        cout << n << endl;
        
        n++;

    }
    return 0;
*/

/*  
    int n = 1;
    while(n <= 100)
    {
        if(n % 2 != 0) // Imprimi os números pares.
        {
            n++;
            continue; // Retorna para o Ínicio do Loop.
        }
        cout << n << endl;
        n++;

    }
        return 0;
*/
    int n = 1;
    while(n <= 10)
    {
        int i = 0; // (i) = Variável de controle.
        while(i < 3) // Loop dentro de outro loop.
            {
                cout << "Numero: " << n << endl;
                i++;
            }
            n++;
    }
    return 0;
    
}
