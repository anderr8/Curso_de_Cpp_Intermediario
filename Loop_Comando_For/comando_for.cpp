#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Separando por (;) quando quiser deixar oculta(s), exemplo: parte1; patre2;parte3, colocar o nomes das partes é opcional. */
/*
    parte1 → é executada um vez.
    parte2 → é a condição, expressão, teste da expressão.
    parte3 → é colocado o encremento.
*/  
/*  Contador
    Exemplo 1:
*/


/*
    int i;
    //for(parte1; parte2; parte3)
    for(i =1; i <= 100; i++) // Esta é a melhor forma. 
    {
        cout << i << endl;
    }
      return 0;
*/

/*  Contador 
    Exemplo 2:
*/
/*
    int i = 1;
    for (; i <= 100 ; i++)
    {
        cout << i << endl;
    }
    return 0; 
*/    

/*  Contador
    Exemplo 3:
*/
/*
    int i = 1;
    for (; i <= 100;)
    {
        cout << i << endl;
        i++;
    }
    return 0;
*/

/*  Contador 
    Exemplo 4:
*/
/*
    int i = 1;
    for (;;)
    {   
        if (i > 100)
            break;
        cout << i << endl;
        i++;
    }
    return 0;    
*/

/*  Contador
    Exemplo 5:
*/
    int i, j;
    for (i = 1, j = 1; i <= 10; i++, j++)
    {
        cout << "i: " << i << endl;
        cout << "j: " << j << endl;
    }
    return 0;

}
