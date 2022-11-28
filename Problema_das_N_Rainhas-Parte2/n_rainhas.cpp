/*
    Solução do problema das n-rainhas(N Problem)
    Autor: Marcos Castro
    www.Geeksbr.com
*/

#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

// Conta a quantidade de soluções
int sol = 0;

//Função para mostrar o tabuleiro
void mostrarTabuleiro(vector<vector<int> > & tab, int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(tab[i][j] == 1)
                cout << "R\t";
            else    
                cout << "-\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

// Verifica se é seguro colocar a rainha numa determinada coluna
// Isso poderia ser feito com menos código, mas assim ficou mais didático
bool seguro(vector<vector<int> > & tab, int N, int lin, int col){
    
    int i, j;

    // Verifica se ocorre ataque na linha
    for(i = 0; i < N; i++){
        if(tab[lin][i] == 1)
            return false;
    }

    // Verifica se ocorre ataque na coluna
    for(i = 0; i < N; i++){
        if(tab[i][col] == 1)
            return false;
    }

    // Verifica se ocorre ataque na diagonal principal
    // Acima e abaixo
    for(i = lin, j = col; i >=0 && j >= 0; i--, j--){
        if(tab[i][j] == 1)
        return false;
    }
    for(i = lin, j = col; i < N && j >= 0; i++, j--){
        if(tab[i][j] == 1)
            return false;
    }

    // Se chegou aqui, então está seguro (retorna true)
    return true;
}

/*
    Função que resolve o problema retorna true se conseguiu resolver e false caso contrário
*/
void executar(vector<vector<int> > & tab, int N, int col){
    if(col == N){
        cout << " Solução " << sol + 1 << ":\n\n";
        mostrarTabuleiro(tab, N);
        sol++;
        return;
    }

    for(int i = 0; i < N; i++){
        // Verifica se é seguro colocar a rainha naquela coluna
        if(seguro(tab, N, i, col)){
            // Insere a rainha (marca com 1)
            tab[i][col] = 1;

            // Chamada recursiva
            executar(tab, N, col + 1);

            // Remove a rainha (backtracking)
            tab[i][col] = 0;
        }
    }
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    /* N�mero de rainhas */
    int N = 8;

    // Tabuleiro (Matriz)
    vector<vector<int> > tab;

    // Inserindo todas as linhas
    for(int i = 0; i < N; i++){
        vector<int> linha(N);
        tab.push_back(linha);
    }

    // Imprime todas as soluções
    executar(tab, N, 0);

    // Imprime a quantidade de soluções
    cout << "\n Encontradas " << sol << " soluções\n";

    return 0;
}

