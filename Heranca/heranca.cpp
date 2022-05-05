#include <iostream>
#include <string.h>

using namespace std;

// Classe Animal => classe m√£e:
class Animal{ 

protected:
    char* nome;

public:
    Animal(const char* nome){
        cout << " ConstruÌndo animal..." << endl;
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome, nome);
    }

// Destrutor:
    ~Animal(){ 
        delete[]nome;
        nome = 0;
    }

    const char* getNome(){
        return nome;
    }
};

// Classe Cachorro => classe filho:
class Cachorro: public Animal{ 
protected:
    int idade;

public:
    Cachorro(const char* nome): Animal(nome){
        cout << " ConstruÌndo cachorro..." << endl;
        idade = 0;
    }

    int getIdade(){
        return idade;
    }

    void setIdade(int idade){
        this->idade = idade;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Cachorro c("Yankee");
    c.setIdade(5);

    cout << " Nome: " << c.getNome() << endl;
    cout << " Idade: " << c.getIdade() << endl;

    return 0;
}
