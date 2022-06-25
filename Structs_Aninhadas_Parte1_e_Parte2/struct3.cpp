#include <iostream>
#include <string>

using namespace std;

typedef struct Univesidade{
    string nome;
}t_universidade;

typedef struct Aluno{
    string nome;
    t_universidade universidade;
}t_aluno;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    t_aluno aluno = {"Anderson", {"USP"}};
    t_aluno* ptr_aluno;

    ptr_aluno = &aluno;

    cout << " Aluno: " << ptr_aluno->nome << endl;
    cout << " Universidade: " << ptr_aluno->universidade.nome << endl;

    return 0;
}

