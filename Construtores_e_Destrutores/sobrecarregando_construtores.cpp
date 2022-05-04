#include <iostream>

using namespace std;

class Carro{

public:
    int ano;
    double preco;

    Carro(){
        ano = 0;
        preco = 0.0;
    }

    Carro(int ano){
        this->ano = ano;
        this->preco = 0.0;
    }

    Carro(int ano, double preco){
        this->ano = ano;
        this->preco = preco;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Carro carro;
    Carro carro2(2022);
    Carro carro3(2021, 200000);

    cout << "Preço da Mercedes: " << carro.preco << endl;
    cout << "Preço da McLaren: " << carro2.preco << endl;
    cout << "Preço da Ferrari: " << carro3.preco << endl;
    
    return 0;
}
