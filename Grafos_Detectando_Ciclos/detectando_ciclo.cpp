// Grafos - Verifica se um grafo direcionado tem ciclo

#include <iostream>
#include <list>
#include <stack>

using namespace std;

class Grafo{
    int v; // Número de Arestas
    list<int> *adj;

public:
    Grafo(int v);
    void adicionarAresta(int v1, int v2);

    // Faz uma DFS a partir de um vértice, retorna se achou ciclo
    bool dfs(int v);

    // Verifica se o grafo direcionado tem ciclo
    bool temCiclo();
};

Grafo::Grafo(int v){
    this->v = v;
    adj = new list<int>[v];
}

void Grafo::adicionarAresta(int v1, int v2){
    adj[v1].push_back(v2);
}

bool Grafo::dfs(int v){
    stack<int> pilha;
    bool visitados[v], pilha_rec[v];

    // Inicializa visitados e pilha_rec com false
    for(int i = 0; i < v; i++)
        visitados[i] = pilha_rec[i] = false;

    //Faz uma DFS
    while(true){
        bool achou_ligacao = false;
        list<int>::iterator it;

        if(!visitados[v]){
            pilha.push(v);
            visitados[v] = pilha_rec[v] = true;
        }

        for(it = adj[v].begin(); it != adj[v].end(); it++){
            // Se o vizinho já está na pilha é porque existe ciclo
            if(pilha_rec[*it])
                return true;
            else if(!visitados[*it]){
                // Se não está na pilha e não foi visitado, indica que achou
                achou_ligacao = true;
                break;
            }
        }

        if(!achou_ligacao){
            pilha_rec[pilha.top()] = false; // Marca que saiu da pilha
            pilha.pop(); // Remove da pilha
            if(pilha.empty())
                break;
            v = pilha.top();
        }
        else
            v = *it;
    }

    return false;
}

bool Grafo::temCiclo(){
    for(int i = 0; i < v; i++){
        if(dfs(i))
            return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Grafo grafo(4);

    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 2);
    grafo.adicionarAresta(1, 3);
    grafo.adicionarAresta(3, 0);


    if(grafo.dfs(3))
        cout << " Contém ciclo.\n";
    else
        cout << " NÃO contém ciclo.\n";

    return 0;
}

