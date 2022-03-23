#include <iostream>

using namespace std;

int main(int argc, char const *argv[])


{

    /* O comando switch é composto por cases. */
/*
int num = 13;

switch(num){
    case 9:
        cout << "numero 9" << endl; // endl pula uma linha
        break;
    case 10:
        cout << "numero 10" << endl;
        break;
    case 11:
        cout << "numero 11" << endl;
        break;
    default:
        cout << "Numero nao encontrado.";
*/

// Se tirar o comando break o programa entra em loop infinito.

char op = 'Q';
    switch(op){
    case 'Q':
        cout << "Voce saiu do sistema." << endl;
    case 'q':
        cout << "Voce saiu do sistema." << endl;
    default:
        cout << "Comando inexistente." << endl;
}

    return 0;

}





