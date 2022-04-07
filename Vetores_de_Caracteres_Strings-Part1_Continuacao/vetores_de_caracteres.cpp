#include <iostream>

using namespace std;

void inverte(char nome[]){
    // Primeiro tem que obter o tamanho do caractere para saber aonde está o caractere null:
    int tam;
    for(tam = 0; nome[tam]; tam++);
    for(int i = tam - 1; i >= 0; i--) //tam -1 // Para acessar o último caractere
        cout << nome[i];
    
    //cout << "tamanho: " << tam << endl;
}

int main(int argc, char const *argv[])
{
    char nome[] = "Giovanna";
    inverte(nome);
    return 0;
}

