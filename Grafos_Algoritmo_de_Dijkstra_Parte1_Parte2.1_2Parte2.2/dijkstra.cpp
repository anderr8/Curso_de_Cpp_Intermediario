#include <iostream>
#include <list>
#include <queue>
#define INFINITO 10000000

using namespace std;

class Grafo{
private:
    int V; // N�mero de v�rtices

    // Ponteiro para um array contendo as listras de adjac�ncias
    list<pair<int, int> > * adj;

public:
    // Construtor
    Grafo(int V){
        this->V = V; // Atribui o n�mero de v�rtices

        /*
          Cria as listas onde cada lista � uma lista de pairs, onde cada pair � formado pelo v�rtice destino e o custo.

        */

        adj = new list<pair<int, int> >[V];
    }

        // Adiciona uma aresta ao grafo de v1 � v2
        void addAresta(int v1, int v2, int custo){
            adj[v1].push_back(make_pair(v2, custo));
        }
        // Algoritmo de Dijkstra
        int dijkstra(int orig, int dest){
            // Vetor de dist�ncias
            int dist[V];

            /*
                Vetor de visitados serve para caso o v�rtice j� tenho sido expandido (visitado), n�o expandir mais 
            */

            int visitados[V];

            priority_queue < pair<int, int>,
                vector<pair<int, int> >, greater<pair<int, int > > > pq;

            // Inicia o vector de dist�ncias e visitados
            for(int i = 0; i < V; i++){
                dist[i] = INFINITO;
                visitados[i] = false;
            }

            // A dist�ncia de origem para origem � 0 
            dist[orig] = 0;

            // Insere na fila
            pq.push(make_pair(dist[orig], orig));

            // Loop de algoritmo
            while(!pq.empty()){
                pair<int, int> p = pq.top(); // Extrai o pair do topo
                int u = p.second; // Obt�m o v�rtice do pair
                pq.pop(); // Remove da fila
                 
                // Verifica se v�rtice n�o foi expandido
                if(visitados[u] == false){
                    
                    // Marca como visitado
                    visitados[u] = true;

                    list<pair<int, int> >::iterator it;

                    // Percorre os v�rtices "v" adjacentes de "u"
                    for(it = adj[u].begin(); it != adj[u].end(); it++){

                        // Obt�m o v�rtice adjacente a o custo da aresta
                        int v = it->first;
                        int custo_aresta = it->second;

                        // Processo de relaxamento (u, v)
                        if(dist[v] > (dist[u] + custo_aresta)){
                            
                            // Atualiza a dist�ncia de "v" e insere na fila
                            dist[v] = dist[u] + custo_aresta;
                            pq.push(make_pair(dist[v], v));
                        }
                    }
                }
            }
            // Retorna a dist�ncia m�nima at� o destino
            return dist[dest];
        }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Grafo g(5);

    g.addAresta(0, 1, 4);
    g.addAresta(0, 2, 2);
    g.addAresta(0, 3, 5);
    g.addAresta(0, 1, 4);
    g.addAresta(1, 4, 1);
    g.addAresta(2, 1, 1);
    g.addAresta(2, 3, 2);
    g.addAresta(2, 4, 1);
    g.addAresta(3, 4, 1);

    cout << " Custo = " << g.dijkstra(0, 4) << endl;

    return 0;
}

