#include <iostream>

using namespace std;

class ClasseMae{

// Colocando a palavra reservada (virtual) para usar a função tardia:
public:
    virtual void mostrarMensagem(){
        cout << " Olá, sou a classe mãe." << endl;
    }
};

// Subclasse da classe Mae:
class ClasseFilha : public ClasseMae{

//  Na subclasse não é necessário usar a palavra virtual.
public:
    virtual void mostrarMensagem(){
        cout << " Olá, sou a classe filha." << endl;
    }
};

// Esta é a função tardia chamada de Polimorfismo:
void foo(ClasseMae* p){
    p->mostrarMensagem();
}

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese");

    ClasseMae mae;
    ClasseFilha  filha;

    //mae.mostrarMensagem();  // Esta é uma função Prematura o c++ prefere esta ligação.
    //filha.mostrarMensagem(); // Esta é uma função Prematura.

    // Parte da função tardia:
    foo(&mae);
    foo(&filha);

    return 0;
}
