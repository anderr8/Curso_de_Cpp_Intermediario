#include <iostream>
#include <math.h>

using namespace std;

typedef struct Pessoa{
    string nome;
    int idade;
    double peso, altura;
}t_pessoa;

double& calcular_imc(t_pessoa & pessoa){
    double result = pessoa.peso / pow(pessoa.altura, 2);
    double& imc = result;
    return imc;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    t_pessoa pessoa = {" Sofia", 20, 92.45, 1.75};

    cout << " IMC: " << calcular_imc(pessoa) << endl;
    return 0;
}
