// Grafos - DFS (Busca em Profundidade) -> Iterativa

#include <iostream>
#include <list>
#include <algorithm> // Fun��o find
#include <stack> // Pilha para usar na DFS

using namespace std;

class Grafo{
    int v; // N�mero de v�rtices
    list<int> *adj; // Ponteiro para um array contendo as listas de adjac�ncias

public:
    Grafo(int V); // Construtor
    void adicionarAresta(int v1, int v2); // Adiciona uma aresta no grafo

    // Faz uma DFS a partir de um v�rtice
    void dfs(int v);
};

Grafo::Grafo(int v){
    this->v = v; // Atribui o n�mero de v�rtices
    adj = new list<int>[v]; // Cria as listas
}

void Grafo::adicionarAresta(int v1, int v2){
    // Adiciona v�rtice v2 � lista de v�rtices adjacentes de v1 
    adj[v1].push_back(v2);
}

void Grafo::dfs(int v){
    stack<int> pilha;
    bool visitados[v]; // vetor de visitados

    // Marca todos como n�o visitados
    for(int i = 0; i < v; i++)
    visitados[i] = false;

    while(true){
        if(!visitados[v]){
            cout << " Visitando v�rtice " << v << "...\n";
            visitados[v] = true; // Marca como visitado
            pilha.push(v); // Insere "v" na pilha
        }

        bool achou = false;
        list<int>::iterator it;

        // Busca por uma liga��o
        for(it = adj[v].begin(); it != adj[v].end(); it++){
            if(!visitados[*it]){
                achou = true;
                break;
            }
        }

        if(achou)
            v = *it; // Atualiza o "v"
        else{
            // Se todos tem liga��o ou n�o tem liga��o
            // Remove da pilha
            pilha.pop();
            // Se a pilha ficar vazia, entao terminou a busca
            if(pilha.empty())
            break;
            // Se chegou aqui, � porque pode pegar elemento do topo
            v = pilha.top();
        }
    }
}

int main(){
    int v =8;
    Grafo grafo(v);

    // Adicionando as arestas
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 2);
    grafo.adicionarAresta(1, 3);
    grafo.adicionarAresta(1, 4);
    grafo.adicionarAresta(2, 5);
    grafo.adicionarAresta(2, 6);
    grafo.adicionarAresta(6, 7);

    grafo.dfs(0);

    return 0;

}