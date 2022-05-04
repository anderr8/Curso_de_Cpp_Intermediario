#include <iostream>
#include <string.h>

using namespace std;

class Estudante{

protected:
    char* nome;

public:
    Estudante(const char* nome){
        cout << " Constru�ndo objetos: " << nome << endl;
        int tam = strlen(nome) + 1;
        this->nome = new char[tam];
        strcpy(this->nome, nome);
    }

    Estudante(const Estudante& e){
        cout << " Constru�ndo c�pia do " << e.nome << endl;
        int tam = strlen(e.nome) + strlen(" C�pia do") + 1; // Retorna o tamanho da string, (+ 1) para o caractere nulo. 
        this->nome = new char[tam]; //  Para alocar espa�o
        strcpy(this->nome, " C�pia do"); // Para copiar
        strcat(this->nome, e.nome); // Fun��o para Concatenar
    }


    // Desconstrutor iniciar com um ~:
    ~Estudante(){
        cout << " Destru�ndo... " << nome << endl;
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

