#include <iostream>

using namespace std;

// Classe No:
class No{

private:
    int v;
    No* prox;
public:
// Construtor:
    No(int v){
        this->v = v;
        this->prox = NULL;
    }

    int obterValor(){ // obtém o valor
        return v;
    }

    No* obterProx(){ // Obtém o próximo No
        return prox;
    }

    void setProx(No* p){ // Seta o próximo No
        prox = p;
    }
};

// Classe Lista
class Lista{
private:
    No* cabeca; // Primeiro elemento
    No* cauda; // Último elemento

public:
    Lista(){
// Se não passar elemento, então cabeça e cauda são NULL:
        cabeca = NULL;
        cauda = NULL;
    }

    Lista(int v){
// Se passar elemento, então cria novo No:
        cabeca = new No(v);
        cauda = cabeca;
    }

// Destrutor:
    virtual ~Lista(){
        delete cabeca;
    }

// Mostra todos os elementos da lista:
    void mostrar(){ 
        cout << "\n Imprimindo todos os elementos...\n\n";
        No* c = cabeca;

        if(vazia())
            cout << " A lista NÃO possui elementos!!\n";
        else{
            while(c){ // Percorre a lista
                cout << c->obterValor() << endl;
                c = c->obterProx();
            }
            cout << endl;
        }
        
    }

// Verifica se a lista está vazia:
    bool vazia(){ 
        return(cabeca == NULL);
    }

// Insere no início (semelhante a push_front da list)
    void inserir_inicio(int v){
        No* novo_no = new No(v);

        novo_no->setProx(cabeca);
        cabeca = novo_no;
    }

// Insere no final (semelhante a push_back da list)
    void inserir_final(int v){
        No* novo_no = new No(v);

        if(vazia()){
            cabeca = novo_no;
            cauda = novo_no;
        }
        else{
            cauda->setProx(novo_no);
            cauda = novo_no;
        }
    }

    int tamanho(){
        if(vazia())
        return 0;

        No* c = cabeca;
        int tam = 0;
        do{
            c = c->obterProx();
            tam++;
        }
        while(c);

        return tam;
    }

// Verifica se um elemento existe na lista:
    bool existe(int v){
        No* c = cabeca;
        while(c){
            if(c->obterValor() == v)
                return true;
            c = c->obterProx();
        }
        return false;
    }

// remove da lista, remoção do final(semelhante a pop_back da list):
    void remover(){ 
        if(!vazia()){
        
// Se houver só 1 elemento:
            if(cabeca->obterProx() == NULL)
                cabeca = NULL;
        
// Para 2 elementos:
        else if(cabeca->obterProx()->obterProx() == NULL) 
            cabeca->setProx(NULL);
        
// Para mais de 2 elementos:
            else{ 
                No* ant_ant = cabeca;
                No* ant = cabeca->obterProx();
                No* corrente = cabeca->obterProx()->obterProx();

                while(corrente){
                    No* aux = ant;
                    ant = corrente;
                    ant_ant =aux;
                    corrente = corrente->obterProx();
                }
                delete ant_ant->obterProx();
                ant_ant->setProx(NULL);
                cauda = ant_ant;
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Lista l;

    if(l.vazia())
        cout << " Lista vazia!!\n";
    else
        cout << " Lista NÃO vazia!!\n";

    l.mostrar();

    if(l.existe(10))
        cout << "\n O elemento 10 existe na lista!!\n";
    else
        cout << "\n O elemento 10 NÃO existe na lista!!\n";


    l.inserir_final(10);
    l.inserir_final(20);
    l.inserir_final(30);
    l.inserir_final(40);
    l.inserir_inicio(50);

    l.mostrar();

    if(l.vazia())
        cout << " Lista vazia!!\n";
    else
        cout << " Lista NÃO vazia!!\n";

    if(l.existe(10))
        cout << "\n O elemento 10 existe na lista!!\n";
    else
        cout << "\n O elemento 10 NÃO existe na lista!!\n";

    l.remover();
    
    l.mostrar();
    cout << " Removido o último elemento!\n";

    cout << " Tamanho da lista: " << l.tamanho() << endl;

    return 0;
}
