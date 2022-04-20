#include <iostream>
#include <string.h>


using namespace std;

typedef struct pessoa {// Agrupamentos de dados:
    char nome[100];
    int idade;
}t_pessoa;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

/*
    char pessoas[3][100] = {"Manuella", "Anderson", "Giovanna"};
    int idades[3] = {26, 30, 26};

    cout << "Nome: " << pessoas[2] << endl;
    cout << "Idade: " << idades[2] << endl;
*/
/*
    t_pessoa p;

    strcpy(p.nome, "Giovanna");
    p.idade = 26;

    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
*/

/*
    t_pessoa p[10]; // vetor para dez espaços.

    strcpy(p[0].nome, "Anderson");
    p[0].idade = 43;    

    strcpy(p[1].nome,"Giovanna");
    p[1].idade = 26;

    cout << "Nome: " << p[0].nome << endl;
    cout << "Idade: " << p[0].idade << endl;

    cout << "Nome: " << p[1].nome << endl;
    cout << "Idade: " << p[1].idade << endl;
*/

    t_pessoa pessoas[100];
    t_pessoa* p;

    p = &pessoas[0];

    pessoas[0].idade = 10;
    pessoas[1].idade = 11;
    pessoas[2].idade = 12;

    cout << p->idade << endl;
    cout << (p + 1)->idade << endl;
    cout << (p + 2)->idade << endl;

    return 0;
}


