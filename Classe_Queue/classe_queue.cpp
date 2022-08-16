// Classe Queue => Implementa fila
// Queue => FIFO => first in, first out

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    queue<int> fila;

    //Inserindo na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);
    // Fila: 10 20 30

    // Mostrando o último elemento
    cout << "\n Último elemento: " << fila.back() << endl;

    if(fila.empty())
        cout << "\n Fila vazia!!\n";
    else
        cout << "\n Fila NÃO vazia!!\n";

    cout << "\n Primeiro elemento: " << fila.front() << endl;

    cout << "\n Mostrando todos os elementos: ";

    while(!fila.empty()){
        int e = fila.front();
        cout << e << " ";
        fila.pop(); // Remove elemento do início
    }

    // Inserindo novamente na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);

    cout<< "\n\n Tamanho da fila: " << fila.size() << endl;



    return 0;
}
