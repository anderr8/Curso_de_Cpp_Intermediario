#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Toy {
public:
    // D = Dura��o 
    // P = Pontua��o
    
    int D, P, div;

    Toy (int D, int P){
        this->D = D;
        this->P = P;
        div = (double) P / D;
    }
};

bool comp(Toy const & x, Toy const & y){
    // Ordem decrescente os valores da divis�o

    return x.div > y.div;
}

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese");

    // N = Quantidade de atra��es
    // T = Tempo total
    // h = Inst�ncia

    int N, T, h = 1;

    while(1){
        vector<Toy> toys;

        cin >> N;
        cin >> T;

        if (N == 0)
            break;

        for (int i = 0; i < N; i++){
            int D, P;
            cin >> D;
            cin >> P;

            Toy toy (D, P);
            toys.push_back(toy);
        }
        sort(toys.begin(), toys.end(), comp);

        int pontuacao_total = 0, tempo_total = 0;

        int i = 0;
        while(i < N){
            int aux_tempo_total = tempo_total + toys[i].D;
            if(aux_tempo_total <= T){
                pontuacao_total += toys[i].P;
                tempo_total = aux_tempo_total;
            }
            else
                i++;
        }

        cout << " Inst�ncia " << h++ << endl;
        cout << pontuacao_total << "\n\n";
    }
    return 0;
}
