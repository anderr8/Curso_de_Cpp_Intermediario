#include <iostream>
#include <string.h>

using namespace std;

typedef struct Curso{
    char nome[50];
    double preco;
}t_curso;

typedef struct Estudante{
    char nome[50];
    Curso curso;
}t_estudante;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
/*
    int num = 10;

    if(num > 0){
        //if dentro de outro e chamado de if aninhadado
        if(num >5){
            cout << " Número maior do que 5!!\n";
        }
    }
*/

    t_estudante e;

    strcpy(e.nome, " Felipão");
    strcpy(e.curso.nome, " C++ para iniciantes");
    e.curso.preco = 10;

    cout << " Nome da pessoa: " << e.nome << endl;
    cout << " Curso: " << e.curso.nome << endl;
    cout << " Preço do curso: R$" << e.curso.preco << endl;

    return 0;
}
