// Protótipos:

#include "pilha.h"

class Pilha{
private:
    int* vet;
    int max_tam;
    int topo;
public:
    Pilha();
    ~Pilha();
    void emplhar(int e);
    void desemplhar();
    int getTopo();
    int vazia();
};
