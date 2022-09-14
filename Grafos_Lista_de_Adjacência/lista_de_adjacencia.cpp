/*
 Grafos - Lista de Adjac�ncia => as v�rtice s�o ligadas em V
*/

#include <iostream>
#include <list>
#include <algorithm> // Ser� usada a fun��o find

using namespace std;

class Grafo{
    int v; // n�mero de v�rtices
    list<int> *adj; // Ponteiro para um array contendo as listas de adjac�ncias

public:
    Grafo(int v); // Construtor
    void adicionarAresta(int v1, int v2); // Adiciona uma aresta no grafo

    // Obt�m o grau de sa�da de um dado v�rtice
    // Grau de sa�da � o n�mero de arcos que saem de "V"
    int obterGrauDeSaida(int v);

    bool existeLigacoes(int v1, int v2); // Verifica se v2 � ligado a v1
};

Grafo::Grafo(int v){
    this->v = v; // Atribui o n�mero de v�rtices
    adj = new list<int>[v]; // Cria as listas
}

void Grafo::adicionarAresta(int v1, int v2){
    // Adicona v�rtice v2 � lista de v�rtices adjacentes de v1
    adj[v1].push_back(v2);
}

int Grafo::obterGrauDeSaida(int v){
    // Basta retornar o tamanho da lista que � a quantidade de liga��es
    return adj[v].size();
}

bool Grafo::existeLigacoes(int v1, int v2){
    if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
        return true;
    return false;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    // Criando um grafo de 4 v�rtices
    Grafo grafo(4);

    // Adicionando as arestas
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 3);
    grafo.adicionarAresta(1, 2);
    grafo.adicionarAresta(3, 1);
    grafo.adicionarAresta(3, 2);

    // Mostrando os graus de Sa�da
    cout << " Grau de sa�da do v�rtice 1: " << grafo.obterGrauDeSaida(1);
    cout << "\n Grau de sa�da do v�rtice 3: " << grafo.obterGrauDeSaida(3);

    // Verifica se existe liga��es 
    if(grafo.existeLigacoes(0, 1))
        cout << "\n\n 1 tem ligac�o com 0. ";
    else
        cout << "\n\n 1 N�O tem liga��o com 0.\n";

    if(grafo.existeLigacoes(0, 2))
        cout << " 2 tem liga��o com 0.\n";
    else
        cout << "\n\n 2 N�O tem liga��o com o 0.\n";

    return 0;
}