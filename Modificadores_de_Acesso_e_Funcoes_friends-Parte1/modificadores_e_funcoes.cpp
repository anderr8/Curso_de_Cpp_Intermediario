#include <iostream>
#include <string.h>

using namespace std;

class Linguagem{
/*
    public:
    char nome[100];
*/

/*
    //protected:
    private:
    char nome[100];

    public:
    void mostrarNome(){
        cout << "Nome: " << nome << endl;
    }

    void setNome(const char* nome){
        strcpy(this->nome, nome);
    }
*/

    //protected:
    private:
    char nome[100];

    //protected:
    private:
    void mostrarNome(){
        cout << "Nome: " << nome << endl;
    }

    public:
    void setNome(const char* nome){
        strcpy(this->nome, nome);
    }
    void mostrarNome2(){
        mostrarNome();
    }
    
};

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese");
/*
    Linguagem l;

    strcpy(l.nome, "C++");

    cout << "Nome: " << l.nome << endl;
*/

    Linguagem l;

    l.setNome("C++");
    //l.mostrarNome();
    l.mostrarNome2();


    return 0;
}
