/*
    Implementa��o do algoritno de Kruskal

    Para detectar ciclos iremos utilizar o algoritmo Union-Find que detecta ciclos em grafos N�O direcionados. 
*/

#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <string.h> // memset

using namespace std;

class Aresta{
    int vertice1, vertice2, peso; // vertice1 e 2 por padr�o � privado

public:
    Aresta(int v1, int v2, int peso){
        vertice1 = v1;
        vertice2 = v2;
        this->peso =peso;
    }

    int obterVertice1(){
        return vertice1;
    }

    int obterVertice2(){
        return vertice2;
    }

    int obterPeso(){
        return peso;
    }

    // Sobrescrita do operator "<"
    bool operator < (const Aresta& aresta2)const{
        return(peso < aresta2.peso); // Faz compara��es crescentemente
    }
};

class Grafo{
    int v; // N�mero de v�rtices
    vector<Aresta> arestas; // Vector de arestas

public:
    Grafo(int v){
        this->v = v;
    }

    // Fun��o para adicionar uma aresta
    void adicionarAresta(int v1, int v2, int peso){
        Aresta aresta(v1, v2, peso);
        arestas.push_back(aresta);
    }

    // Fun��o que busca o subconjunto de um elemento "i"
    int buscar(int subset[], int i){
        if(subset[i] == -1)
            return i;
        return buscar(subset, subset[i]);
    }

    // Fun��o para unir dois subconjuntos em um �nico subconjunto
    void unir(int subset[], int v1, int v2){
        int v1_set = buscar(subset, v1);
        int v2_set = buscar(subset, v2);
        subset[v1_set] = v2_set;
    }

    // Fun��o que roda o algoritmo de kruskal
    void kruskal(){
        vector<Aresta> arvore;
        int size_arestas = arestas.size();

        // Ordena as arestas pelo menor peso
        sort(arestas.begin(), arestas.end());

        // Aloca mem�ria para criar "V" subconjuntos
        int * subset = new int[v];

        // Inicializa todos os subconjuntos como conjuntos de um �nico elemento
        memset(subset, -1, sizeof(int) * v);

        for(int i = 0; i < size_arestas; i++){
            int v1 = buscar(subset, arestas[i].obterVertice1());
            int v2 = buscar(subset, arestas[i].obterVertice2());

            if(v1 != v2){
                // Se for diferentes � porque n�o forma ciclo
                arvore.push_back(arestas[i]);
                unir(subset, v1, v2); // Faz a uni�o
            }
        }

        int size_arvore = arvore.size();

        // Mostra as arestas selecionadas com seus respctivos pesos
        for(int i = 0; i < size_arvore; i++){
            char v1 = 'A' + arvore[i].obterVertice1();
            char v2 = 'A' + arvore[i].obterVertice2();
            
            cout << "(" << v1 << ", " << v2 << ") = " << arvore[i].obterPeso() << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Grafo g(7); // Grafo

    // Adicionar as arestas
    g.adicionarAresta(0, 1, 7);
    g.adicionarAresta(0, 3, 5);
    g.adicionarAresta(1, 2, 8);
    g.adicionarAresta(1, 3, 9);
    g.adicionarAresta(1, 4, 7);
    g.adicionarAresta(2, 4, 5);
    g.adicionarAresta(3, 4, 15);
    g.adicionarAresta(3, 5, 6);
    g.adicionarAresta(4, 5, 8);
    g.adicionarAresta(4, 6, 9);
    g.adicionarAresta(5, 6, 11);

    g.kruskal(); //Roda o algoritmo de kruskal


    return 0;
}
