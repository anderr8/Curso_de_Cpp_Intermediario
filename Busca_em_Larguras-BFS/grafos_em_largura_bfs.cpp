// Grafos - BFS(Busca em Larguras)

#include <iostream>
#include <list>
#include <queue> // Fila para usar na BFS

using namespace std;

class Grafo{
    int v; // N�mero de V�rtices
    list<int> *adj; // Ponteiro para um array contando as listas de adjac�ncias

public:
    Grafo(int v); // Construtor
    void adicionarAresta(int v1, int v2); // Adiciona uma aresta no grafo

    // BFS a Partir de um v�rtice
    void bfs(int v);

};


    Grafo::Grafo(int v){
        this->v = v; // Atribui o n�mero de v�rtices
        adj = new list<int>[v]; // Cria as listas
    }

void Grafo::adicionarAresta(int v1, int v2){
    // Adiciona v�rtices v2 � lista de v�rtices adjacentes de v1
    adj[v1].push_back(v2);
}

void Grafo::bfs(int v){
    queue<int> fila;
    bool visitados[v]; // Vetor de visitados

    for(int i = 0; i < v; i++)
        visitados[i] = false;

    cout << " A liga��o entre v�rtices " << v << " ...\n";
    visitados[v] = true; // Marca como visitado

    while(true){
        list<int>::iterator it;
        for(it = adj[v].begin(); it != adj[v].end(); it++){
            if(!visitados[*it]){
                cout << " A liga��o entre v�rtices " <<  *it  << " ...\n";
                visitados[*it] = true; // Marca como visitado
                fila.push(*it); // Insere na fila
            }
        }
        // Verifica se a fila N�O est� vazia
        if(!fila.empty()){
            v = fila.front(); // Obt�m o primeiro elemento
            fila.pop(); // Remove da fila
        }
        else
            break;
    }
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int v = 8;

    Grafo grafo(v);

    // Adicionando as Arestas
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 2);
    grafo.adicionarAresta(1, 3);
    grafo.adicionarAresta(1, 4);
    grafo.adicionarAresta(2, 5);
    grafo.adicionarAresta(2, 6);
    grafo.adicionarAresta(6, 7);

    grafo.bfs(0);

    return 0;

}
