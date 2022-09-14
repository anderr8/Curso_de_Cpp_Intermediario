/*
 Grafos - Lista de Adjacência => as vértice são ligadas em V
*/

#include <iostream>
#include <list>
#include <algorithm> // Será usada a função find

using namespace std;

class Grafo{
    int v; // número de vértices
    list<int> *adj; // Ponteiro para um array contendo as listas de adjacências

public:
    Grafo(int v); // Construtor
    void adicionarAresta(int v1, int v2); // Adiciona uma aresta no grafo

    // Obtém o grau de saída de um dado vértice
    // Grau de saída é o número de arcos que saem de "V"
    int obterGrauDeSaida(int v);

    bool existeLigacoes(int v1, int v2); // Verifica se v2 é ligado a v1
};

Grafo::Grafo(int v){
    this->v = v; // Atribui o número de vértices
    adj = new list<int>[v]; // Cria as listas
}

void Grafo::adicionarAresta(int v1, int v2){
    // Adicona vértice v2 à lista de vértices adjacentes de v1
    adj[v1].push_back(v2);
}

int Grafo::obterGrauDeSaida(int v){
    // Basta retornar o tamanho da lista que é a quantidade de ligações
    return adj[v].size();
}

bool Grafo::existeLigacoes(int v1, int v2){
    if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
        return true;
    return false;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    // Criando um grafo de 4 vértices
    Grafo grafo(4);

    // Adicionando as arestas
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 3);
    grafo.adicionarAresta(1, 2);
    grafo.adicionarAresta(3, 1);
    grafo.adicionarAresta(3, 2);

    // Mostrando os graus de Saída
    cout << " Grau de saída do vértice 1: " << grafo.obterGrauDeSaida(1);
    cout << "\n Grau de saída do vértice 3: " << grafo.obterGrauDeSaida(3);

    // Verifica se existe ligações 
    if(grafo.existeLigacoes(0, 1))
        cout << "\n\n 1 tem ligacão com 0. ";
    else
        cout << "\n\n 1 NÃO tem ligação com 0.\n";

    if(grafo.existeLigacoes(0, 2))
        cout << " 2 tem ligação com 0.\n";
    else
        cout << "\n\n 2 NÃO tem ligação com o 0.\n";

    return 0;
}