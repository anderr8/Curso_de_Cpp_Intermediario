#ifndef _LISTA_H_
#define _LISTA_H_

using namespace std;

// Classe No:
template<class T>
class No{

private:
    T v;
    No* prox;
public:
// Construtor:
    No(T v){
        this->v = v;
        this->prox = NULL;
    }

    T obterValor(){ // obt�m o valor
        return v;
    }

    No* obterProx(){ // Obt�m o pr�ximo No
        return prox;
    }

    void setProx(No* p){ // Seta o pr�ximo No
        prox = p;
    }
};

// Classe Lista
template<class T>
class Lista{
private:
    No<T>* cabeca; // Primeiro elemento
    No<T>* cauda; // �ltimo elemento

public:
    Lista(){
// Se n�o passar elemento, ent�o cabe�a e cauda s�o NULL:
        cabeca = NULL;
        cauda = NULL;
    }

    Lista(T v){
// Se passar elemento, ent�o cria novo No:
        cabeca = new No<T>(v);
        cauda = cabeca;
    }

// Destrutor:
    virtual ~Lista(){
        delete cabeca;
    }

// Mostra todos os elementos da lista:
    void mostrar(){ 
        cout << "\n Imprimindo todos os elementos...\n\n";
        No<T>* c = cabeca;

        if(vazia())
            cout << " A lista N�O possui elementos!!\n";
        else{
            while(c){ // Percorre a lista
                cout << c->obterValor() << endl;
                c = c->obterProx();
            }
            cout << endl;
        }
        
    }

// Verifica se a lista est� vazia:
    bool vazia(){ 
        return(cabeca == NULL);
    }

// Insere no in�cio (semelhante a push_front da list)
    void inserir_inicio(T v){
        No<T>* novo_no = new No<T>(v);

        novo_no->setProx(cabeca);
        cabeca = novo_no;
    }

// Insere no final (semelhante a push_back da list)
    void inserir_final(T v){
        No<T>* novo_no = new No<T>(v);

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
// Se for vazia, ent�o retorne 0:
        if(vazia())
        return 0;

        No<T>* c = cabeca;
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
        No<T>* c = cabeca;
        while(c){
            if(c->obterValor() == v)
                return true;
            c = c->obterProx();
        }
        return false;
    }

// remove da lista, remo��o do final(semelhante a pop_back da list):
    void remover(){ 
        if(!vazia()){
        
// Se houver s� 1 elemento:
            if(cabeca->obterProx() == NULL)
                cabeca = NULL;
        
// Para 2 elementos:
        else if(cabeca->obterProx()->obterProx() == NULL) 
            cabeca->setProx(NULL);
        
// Para mais de 2 elementos:
            else{ 
                No<T>* ant_ant = cabeca;
                No<T>* ant = cabeca->obterProx();
                No<T>* corrente = cabeca->obterProx()->obterProx();

                while(corrente){
                    No<T>* aux = ant;
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

#endif