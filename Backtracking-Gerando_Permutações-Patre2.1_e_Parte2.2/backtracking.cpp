#include <iostream>

using namespace std;


void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void permuta(int v[], int inf, int sup){
    if(inf == sup){
        for(int i = 0; i <= sup; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    else{
        for(int i = inf; i <= sup ; i++){
            troca(v, inf, i);
            permuta(v, inf + 1, sup);
            troca(v, inf, i); // Backtracking
        }
    }
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int v[] = {1, 2, 3, 4};
    int tam_v = sizeof(v) / sizeof(int);

    permuta(v, 0, tam_v - 1);



    return 0;
}
