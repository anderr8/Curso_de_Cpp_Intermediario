#include <iostream>
#include <string.h>

using namespace std;

// Agrupando Dados:

class Pessoa{
    public:
        char nome[100];
        char cpf[20];
        int idade;
};

int getIdade(Pessoa pessoas[], const char nome[]){
    int tam = sizeof(pessoas);
    

    for(int i = 0; i < tam; i++){
        if(strcmp(nome, pessoas[i].nome) == 0)
            return pessoas[i].idade;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
/*
    Pessoa p1; // p1 é um objeto da classe Pessoa.
    strcpy(p1.nome, "Giovanna");
    strcpy(p1.cpf, "111.111.111-11");
    p1.idade = 26;

    cout << " Nome: " << p1.nome << "\n CPF: " << p1.cpf << "\n Idade:  " << p1.idade << endl;
*/

    // Vetor para 3 pessoas:

    Pessoa pessoas[3] = {
        {"Giovanna", "11111111111", 26},
        {"Anderson", "11111111111", 43},
        {"Noeli","11111111111", 23},

    };


    cout << "Nome: " << pessoas[0].nome << endl;
    cout << "Nome: " << pessoas[1].nome << endl;
    cout << "Nome: " << pessoas[2].nome << endl;

    int idade = getIdade(pessoas, "Noeli");

    if(idade != -1){
        cout << "Idade da Noeli: " << idade << endl;
    }else {
        cout << "Pessoa não encontrada." << endl;
    }
    return 0;
}

