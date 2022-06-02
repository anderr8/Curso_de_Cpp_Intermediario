// Sobrecarga do Operador (=) igual

#include <iostream>
#include <string.h>
#include <locale.h>


using namespace std;

class Pessoa{
private:
    char* nome;
    int id;

public:

    // Cópia profunda:
    void inicializar(const char* novoNome, int novoID){
        int tam = strlen(novoNome) + 1;
        nome = new char[tam];
        strcpy(nome, novoNome);
        id = novoID;
    }

    void destruir(){
        delete[] nome;
        nome = 0;
    }

    // Cópia superficial:
    Pessoa(const char* novoNome, int novoID){
/*
        int tam = strlen(novoNome) + 1;
        nome = new char[tam];
        strcpy(nome, novoNome);
        id = novoID;
*/
        inicializar(novoNome, novoID);
    }

    Pessoa(Pessoa& p){
        inicializar(p.nome, p.id);
    }

    virtual ~Pessoa(){
        destruir();
    }

    Pessoa& operator=(Pessoa& p){
        if(this != &p){
            destruir();

            inicializar(p.nome, p.id);
        }
        return *this;
    }

    const char* getNome(){
        return nome;
    }

    int getID(){
        return id;
    }

    void mudarNome(char){
        nome[0] = 1;
    }

};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Pessoa p1("Giovanna", 1), p2("Anderson", 2);

    p1 = p2;

    p1.mudarNome('A');

    cout << " Nome: " << p1.getNome() << endl << " ID: " << p1.getID() << endl;
    cout << " Nome: " << p2.getNome() << endl << " ID: " << p2.getID() << endl;

    return 0;
}
