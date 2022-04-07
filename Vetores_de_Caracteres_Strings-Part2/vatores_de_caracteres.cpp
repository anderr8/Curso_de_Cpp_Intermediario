#include <iostream>
#include <string.h>

//https://www.cplusplus.com/reference/

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    //char nome[] = "Giovanna";
    //char nome2[] = "Tavares";
/*
    if(isalpha(nome[0])){ // Função para saber ser é alfabético ou numérico.
        //cout << "Caractere Alfabético" << endl;
        cout << "Letra" << endl;
    }
    else{
        //cout << "Caractere Numérico" << endl;
        cout << "Número" << endl;
    }
*/
/*
    if(isupper(nome[0])){// Verifica se é a primeira palavra é Maiúcula ou Minúscula.
        cout << "Maiúscula" << endl;
    }    
    else{
        cout << "Minúscula" << endl;
    }
*/

/*
    if(isspace(nome[0])){// Verifica se tem ou espaço.
        cout << "Tem espaço." << endl;
    }
    else{
        cout << "Não tem espaço." << endl;
    }

*/   

/*
    if(isdigit(nome[0])){ // verifica se a primeira letra é um dígito.
        cout << "Número" << endl;
    }
    else{
        cout << "Letra" << endl;
    }
*/

/*
    if(islower(nome[0])){ // Verifica se a primeira letra é minúscula.
        cout << "Minúscula" << endl;
    }
    else{
        cout << "Maíuscula" << endl;
    }
*/

/*
    if(strcmp(nome, nome2) == 0){ // Compara duas strings
        cout << "strings iguais" << endl;
    }
    else{
        cout << "strings diferentes" << endl;
    }
*/

/*
    char c = 'M';
    c = tolower(c); // Modifica o tamanho da letra.
    //c = toupper(c); // Modifica o tamanho da letra.
    cout << c << endl;
*/

    // Concatena a string:
/*
    char nome[100], sobrenome[100];

    cout << "Dígite o seu nome: ";
    cin >> nome;
    cout << "Dígite seu sobrenome: ";
    cin >> sobrenome;

    strcat(nome, sobrenome); 
    cout << "Seu nome: " << nome;
*/

    char str1[100], str2[100];

    cout << "Dígite a primeira string: ";
    cin >> str1;
    cout << "Dígite a segunda string: ";
    cin >> str2;

    if(strstr(str1, str2)) // Verifica se a mesma string ocorre na outra.
        cout << "é substring" << endl;
    else
        cout << "não é substring" << endl;

    return 0;
}
