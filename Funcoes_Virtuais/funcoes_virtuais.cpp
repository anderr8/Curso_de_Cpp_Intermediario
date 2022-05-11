#include <iostream>

using namespace std;

class ClasseMae{

// Colocando a palavra reservada (virtual) para usar a fun��o tardia:
public:
    virtual void mostrarMensagem(){
        cout << " Ol�, sou a classe m�e." << endl;
    }
};

// Subclasse da classe Mae:
class ClasseFilha : public ClasseMae{

//  Na subclasse n�o � necess�rio usar a palavra virtual.
public:
    virtual void mostrarMensagem(){
        cout << " Ol�, sou a classe filha." << endl;
    }
};

// Esta � a fun��o tardia chamada de Polimorfismo:
void foo(ClasseMae* p){
    p->mostrarMensagem();
}

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese");

    ClasseMae mae;
    ClasseFilha  filha;

    //mae.mostrarMensagem();  // Esta � uma fun��o Prematura o c++ prefere esta liga��o.
    //filha.mostrarMensagem(); // Esta � uma fun��o Prematura.

    // Parte da fun��o tardia:
    foo(&mae);
    foo(&filha);

    return 0;
}
