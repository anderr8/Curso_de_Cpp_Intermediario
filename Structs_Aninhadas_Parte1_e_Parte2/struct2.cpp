#include <iostream>

using namespace std;

typedef struct Pessoa{
    struct Carro{
        double preco;
    };

    struct Casa{
        double preco;
    };

    struct Carro carro;
    struct Casa casa;
}t_pessoa;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    t_pessoa pessoa;

    pessoa.carro.preco = 25000;
    pessoa.casa.preco = 200000;

    cout << " Preço do carro: R$" << pessoa.carro.preco << endl;
    cout << " Preço da casa: R$" << pessoa.casa.preco << endl;
    return 0;
}
