#include <iostream>

using namespace std;

int knapsack(int W, int wt[], int b[], int n){

    // Tabela que ser� preenchida
    int V[n + 1][W + 1];

    // Iniciando a primeira linha e primeira coluna com 0
    for(int w = 0; w <= W; w++)
        V[0][w] = 0;
    for(int i = 1; i <= n; i++)
        V[i][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int w = 1; w <= W; w++){
            // Elemento pode fazer parte da solu��o
            if(wt[i -1] <= w){
                // Max...
                if((b[i - 1] + V[i - 1][w - wt[i - 1]]) > V[i - 1][w])
                    V[i][w] = b[i - 1] + V[i - 1][w - wt[i -1]];
                else
                    V[i][w] = V[i - 1][w];
            }
            else
                V[i][w] = V[i - 1][w];
        }
    }

    // retorne o valor m�ximo colocado na mochila
    return V[n][W];
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    // Capacidade m�xima da mochila: W
    int W = 20;

    // N�mero de elementos
    int n = 5;

    // Vetor com os valores (benef�cio) de cada elemento
    int b[] = {3, 5, 8, 4, 10};

    // Vetor com os pesos de cada elemento
    int wt[]  {2, 4, 5, 3, 9};

    // Obter o m�ximo valor que pode ser colocado na  mochila
    int max_valor = knapsack(W, wt, b, n);

    cout << " Valor m�ximo: " << max_valor << endl;


    return 0;
}

