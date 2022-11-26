/*
    Implementa��o do Algoritmo de Kosaraju
    Detecta componenetes fortemente conectados
*/

#include <iostream>
#include <stack>
#include <list>

using namespace std;

class Grafo{
private:
    int V; // N�mero de v�rtices
    list<int> * adj; // Lista de adjac�ncia

    void preencher(int v, bool visitados[], stack<int>& pilha){
        // Marca o v�rtice atual como visitado
        visitados[v] = true;

        // Percorre os adjacentes de v
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); i++){
            if(visitados[*i] == false)
                preencher(*i, visitados, pilha);
        }
        pilha.push(v);
    }

    // Bem parecida com a fun��o preencher
    void DFS(int v, bool visitados[]){
        // Marca o v�rtice atual como visitado
        visitados[v] = true;

        // Imprime o v�rtice
        cout << v << " ";

        // Percorre os adjacentes de v
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); i++){
            if(visitados[*i] == false)
                DFS(*i, visitados);
        }
    }

public:
    // Construtor
    Grafo(int V){
        this->V = V;
        adj = new list<int>[V]; // Cria as listas
    }

    // Adciona arestas
    void adicionarAresta(int i, int j){
        // Adiciona "j" � lista de adjac�ncia de "i"
        adj[i].push_back(j);
    }

    // Obt�m o grafotransposto
    Grafo obterGrafoTransposto(){
        Grafo grafo_transposto(V);

        for(int v = 0; v < V; v++){
            list<int>::iterator i;
            for(i = adj[v].begin(); i != adj[v].end(); i++){
                // Insere no novo grafo
                grafo_transposto.adj[*i].push_back(v);
            }
        }
        return grafo_transposto;
    }

    void imprimirComponentes(){
        stack<int> pilha;
        bool * visitados = new bool[V];

        // Marca todos como n�o visitados
        for(int i = 0; i < V; i++)
            visitados[i] = false;

        // Preencher a pilha
        for(int i = 0; i < V; i++){
            if(visitados[i] == false)
                preencher(i, visitados, pilha);
        }

        // Criar o grafo transposto
        Grafo gt = obterGrafoTransposto();

        // Marca todos como n�o visitados novamente
        for(int i = 0; i < V; i++)
        visitados[i] = false;

        // Processa os v�rtices de acordo com a pilha
        while(!pilha.empty()){
            // Obt�m o elemento do topo
            int v = pilha.top();

            // Remove o elemento
            pilha.pop();

            // Imprime cada componente fortemente conexa
            if(visitados[v] == false){
                gt.DFS(v, visitados);
                cout << "\n";
            }
        }
    }

};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Grafo g(5);

    g.adicionarAresta(0, 1);
    g.adicionarAresta(1, 2);
    g.adicionarAresta(1, 3);
    g.adicionarAresta(2, 0);
    g.adicionarAresta(3, 4);

    g.imprimirComponentes();

    return 0;
}
