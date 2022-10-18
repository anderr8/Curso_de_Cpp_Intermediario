#include <iostream>
#include <vector>

using namespace std;

class Coordenada{
public:
    int x, y;
    bool visitadas;
};

int winner;

void buscar(vector<vector <int> > mat, vector<vector <Coordenada> > coordenadas, int i, int j){
   if(i >= 0 && i < 5 && j >= 0 && j < 5 && !winner){
        coordenadas[i][j].visitadas = true;
        if(i == 4 && j == 4)
            winner = 1;
        else{
            // 0 pode prosseguir, 1 caminho bloqueado
            // Descer o Labirinto:
            if(i + 1 < 5 && mat[i + 1][j] == 0 && !coordenadas[i + 1][j].visitadas)
            
            // Subir o Labirinto:
                buscar(mat, coordenadas, i + 1, j);
            if(i - 1 >= 0 && mat[i - 1][j] == 0 && !coordenadas[i - 1][j].visitadas)
                buscar(mat, coordenadas, i - 1, j);
            
            // Ir para direita:
            if(j + 1 < 5 && mat[i][j + 1] == 0 && !coordenadas[i][j + 1].visitadas)
                buscar(mat, coordenadas, i, j + 1);

            // Ir para esquerda:
            if(j - 1 >= 0 && mat[i][j - 1] == 0 && !coordenadas[i][j - 1].visitadas)
                buscar(mat, coordenadas, i, j - 1);
        }
   }   
}

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        vector<vector <int> > mat(5); /* Para ter uma Matriz precisa ter vector de vector*/
        vector<vector <Coordenada> >coordenadas(5);        
        for(int j = 0; j < 5; j++){
            mat[j].resize(5);
            coordenadas[j].resize(5);
        }

        //cout << mat[4][4] << endl;
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                int e;
                cin >> e;
                mat[j][k] = e;

                coordenadas [j] [k].x = j;
                coordenadas [j] [k].y = k;
                coordenadas [j] [k].visitadas = false;
            } 
        }
        
        winner = 0;
        buscar(mat, coordenadas, 0, 0);

        if(winner)
            cout << "COPS\n";
        else
            cout << "ROBBERS\n";
    }
    return 0;
}
