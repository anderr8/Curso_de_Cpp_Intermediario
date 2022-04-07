#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
/*
    char nome[] = {'G', 'i', 'o', 'v', 'a', 'n', 'n', 'a','\0'}; //sempre colocar o caractere null (\0)barra zero.

    cout << nome << endl;
*/

/*
    char nome[] = {'G', 'i', 'o', 'v', 'a', 'n', 'n', 'a','\0'};
    int i = 0;

    while(nome[i] != '\0'){
        cout << nome[i];
        i++;
    }
*/
    //Ínicio:

    char nome[] = "Giovanna";
    int i = 0;

    /*while(nome[i] != '\0'){
        cout << nome[i];
        i++;
    }*/
    // Se for só uma linha pode ser removida as aspas:
/*
    while(nome[i] != '\0') // Quando é while a expressão é testada no ínicio do loop.
        cout << nome[i++];
*/
/*
    do{
        cout << nome[i];
    }
    while(nome[i++]); // Quando é (do) while a expressão é testada no final do loop.
*/

    // Mudando o caractere:

    nome[0] = 'A'; // Colocando o número da posição do caractere.
    do{
        cout << nome[i];
    } 
    while(nome[i++]);

    

    return 0;
}


