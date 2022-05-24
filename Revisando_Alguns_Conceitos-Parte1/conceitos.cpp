/*
 Procedural => é um paradgma de programação baseada no conceito de chamadas a procedimentos  => conhecidos como métodos, funções, etcs. 
*/

#include <iostream>

using namespace std;

class Pessoa{
private:
    int idade;
    int* vet;
public:
/*
 Construtor são implicitamente chamados quando um objeto é criado, se nenhum construtor é incluído o compilador inclui um trivial.
*/
    // Construtor:
    Pessoa(int idade){
        this->idade = idade;
        vet = new int[10];
    }
    // Destrutor:
    ~Pessoa(){
        delete [] vet;
    }
    int obterIdade(){
        return idade;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Pessoa* p = new Pessoa(26);
    // Quando é usado Ponteiro tem que ser usado (->) a seta, não pode ser usado o (.) ponto.
    cout << p->obterIdade() << endl;
    // Libera a memória:
    delete p;

    return 0;
}
