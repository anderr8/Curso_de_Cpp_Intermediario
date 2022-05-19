// Implementação do TAD Pilha(Stack)

#include <iostream>

using namespace std;

class Pilha{

private:
    int* vet;
    int max_tam;
    int topo;

public:

// Construtor:
    Pilha(){
        vet = new int[100];
        max_tam = 99;
        topo = -1;
    }

// Destrutor:
    ~Pilha(){
        delete[] vet;
    }

    void empilhar(int e){
        if(topo == max_tam)
            cout << "Pilha cheia!!!" << endl;
        else
           vet[++topo] = e;
    }

    void desempilhar(){
        if(topo == -1)
            cout << " Pilha vazia!!" << endl;
        else
            topo--;
    }

    int getTopo(){
        if(topo != -1)
            return vet[topo];
        return -1;
    }

    int vazia(){
        return(topo == -1);
    }
};

int main(int argc, char const *argv[])
{
    Pilha p;
/*
    cout << " Pilha vazia: " << p.vazia() << endl;
    cout << " Topo: " << p.getTopo() << endl;

    p.desempilhar();
*/

    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12);

    p.desempilhar();

    cout << " Pilha vazia: " << p.vazia() << endl;
    cout << " Topo: " << p.getTopo() << endl;

    return 0;
}
