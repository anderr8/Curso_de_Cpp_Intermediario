#include <iostream>
#include <string.h>
#include <locale.h>


using namespace std;

// Unindo Duas Classes:

class LinguagemAmiga;

class Linguagem{
    friend void classAmiga(Linguagem*);
protected:
    char nome[100];
    LinguagemAmiga* lamiga;

private:
    void mostrarNome(){
        cout << " Nome: " << nome << endl;
    }

public:
    void setNome(const char* nome){
        strcpy(this->nome, nome);
    }
    void mostrarNome2(){
        mostrarNome();
    }
    void mostrarAmiga();
};

class LinguagemAmiga{

    friend class Linguagem;

protected:
    void mostrarLinguagemAmiga(){       
        cout << "Olá, Linguagem Amiga!\n";
    }
};

void classAmiga(Linguagem* l){
    cout << "Classe amiga diz; " << l->nome << endl;
}

void Linguagem::mostrarAmiga(){
    lamiga->mostrarLinguagemAmiga();
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    Linguagem l;

    l.setNome("C++");
    //l.mostrarNome2();
    //classeAmiga(&1);
    l.mostrarAmiga();
    return 0;
}
