#include <iostream>
#include <string.h>

using namespace std;

class Estudante{

protected:
    char* nome;

public:
    Estudante(const char* nome){
        cout << " Construíndo objetos: " << nome << endl;
        int tam = strlen(nome) + 1;
        this->nome = new char[tam];
        strcpy(this->nome, nome);
    }

    Estudante(const Estudante& e){
        cout << " Construíndo cópia do " << e.nome << endl;
        int tam = strlen(e.nome) + strlen(" Cópia do") + 1; // Retorna o tamanho da string, (+ 1) para o caractere nulo. 
        this->nome = new char[tam]; //  Para alocar espaço
        strcpy(this->nome, " Cópia do"); // Para copiar
        strcat(this->nome, e.nome); // Função para Concatenar
    }


    // Desconstrutor iniciar com um ~:
    ~Estudante(){
        cout << " Destruíndo... " << nome << endl;
        delete[] nome;
        nome = 0;
    }

    const char* getNome(){
        return nome;
    }
};

    void foo3(Estudante c){

    }

    void foo2(Estudante e){

    }    

    void foo(){
        Estudante estudante(" Objeto");
        foo2(estudante);
        foo3(estudante);
        cout << " Estudante " << estudante.getNome() << endl;
    }


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    foo();

    return 0;
}

