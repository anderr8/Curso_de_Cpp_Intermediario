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
    if(isalpha(nome[0])){ // Fun��o para saber ser � alfab�tico ou num�rico.
        //cout << "Caractere Alfab�tico" << endl;
        cout << "Letra" << endl;
    }
    else{
        //cout << "Caractere Num�rico" << endl;
        cout << "N�mero" << endl;
    }
*/
/*
    if(isupper(nome[0])){// Verifica se � a primeira palavra � Mai�cula ou Min�scula.
        cout << "Mai�scula" << endl;
    }    
    else{
        cout << "Min�scula" << endl;
    }
*/

/*
    if(isspace(nome[0])){// Verifica se tem ou espa�o.
        cout << "Tem espa�o." << endl;
    }
    else{
        cout << "N�o tem espa�o." << endl;
    }

*/   

/*
    if(isdigit(nome[0])){ // verifica se a primeira letra � um d�gito.
        cout << "N�mero" << endl;
    }
    else{
        cout << "Letra" << endl;
    }
*/

/*
    if(islower(nome[0])){ // Verifica se a primeira letra � min�scula.
        cout << "Min�scula" << endl;
    }
    else{
        cout << "Ma�uscula" << endl;
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

    cout << "D�gite o seu nome: ";
    cin >> nome;
    cout << "D�gite seu sobrenome: ";
    cin >> sobrenome;

    strcat(nome, sobrenome); 
    cout << "Seu nome: " << nome;
*/

    char str1[100], str2[100];

    cout << "D�gite a primeira string: ";
    cin >> str1;
    cout << "D�gite a segunda string: ";
    cin >> str2;

    if(strstr(str1, str2)) // Verifica se a mesma string ocorre na outra.
        cout << "� substring" << endl;
    else
        cout << "n�o � substring" << endl;

    return 0;
}
