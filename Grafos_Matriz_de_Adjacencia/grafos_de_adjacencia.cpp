#include <iostream>

using namespace std;

int grafo[5][5] = {
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 1, 0, 1, 1},
    {0, 0, 1, 0, 1},
    {0, 0, 1, 1, 0}
};

bool tem_ligacao(int v1, int v2){
    if(grafo[v1][v2])
        return true;
    return false;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    cout << tem_ligacao(0, 4) << endl;

    return 0;
}

