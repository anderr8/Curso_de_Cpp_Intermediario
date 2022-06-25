#include <iostream>
#include "aluno.h"

void construirAluno(Aluno& aluno, string nome, string universidade);
void exibirAluno(Aluno& aluno);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    t_aluno aluno;
    t_aluno * ptr_aluno;

    ptr_aluno = &aluno;

    ptr_aluno->setNome(" Anderson");
    ptr_aluno->setUniversidade(" USP");

    cout << " Aluno: "<< ptr_aluno->obterNome() << endl;
    cout << " Universidade: " << ptr_aluno->obterUniversidade() << endl;

    Aluno aluno2;
    construirAluno(aluno2, " Felipão", " Havard");
    exibirAluno(aluno2);

    Aluno aluno3;
    construirAluno(aluno3, " Giovanna", " USP");
    exibirAluno(aluno3);

    return 0;
}

void construirAluno(Aluno& aluno, string nome, string universidade){
    aluno.setNome(nome);
    aluno.setUniversidade(universidade);
}

void exibirAluno(Aluno& aluno){
    cout << "\n Aluno: " << aluno.obterNome() << endl;
    cout << " Universidade: " << aluno.obterUniversidade() << endl;
}