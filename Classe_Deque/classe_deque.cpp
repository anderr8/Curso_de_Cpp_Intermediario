// Classe Deque => controí fila de duas pontas.

#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    deque<int> fila;

    cout << " Antes de inserir os elementos: ";

    if(fila.empty())
        cout << " Fila vazia!!\n";
    else
        cout << " Fila NÃO vazia!!\n";

    // Inserir elementos ao final da fila.
    fila.push_back(10);
    fila.push_back(20);
    // Inserir elementos no início da fila.
    fila.push_front(30);
    // fila: 30 10 20
    
    cout << "\n Depois de inserir os elementos: ";
    
    if(fila.empty())
        cout << "Fila vazia!!\n";
    else
        cout << "Fila NÃO vazia!!\n";

    cout << "\n Mostrando os elementos da fila: ";
    
    deque<int>::iterator it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " ";
    
    cout << "\n";

    // Limpar toda a fila
    fila.clear();

    cout << "\n Depois de limpar (clear) a fila: ";
    if(fila.empty())
        cout << " Fila vazia!!\n";
    else
        cout << " Fila NÃO vazia!!\n";

    // Inserir elementos
    fila.push_front(10);
    fila.push_front(20);
    fila.push_back(30);
    // Fila: 20 10 30

    // Removendo o segundo elemento
    fila.erase(fila.begin() + 1); // Irá limpar o segundo elemento

    cout << "\n Mostrando os elementos da fila: ";
    it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " ";


    cout << "\n Elemento da frente da fila: " << fila.front();
    cout << "\n Último elemento: " << fila.back() << endl;

    // Retornando o segundo elemento
    it = fila.begin() + 1;
    fila.insert(it, 10);

    cout << "\n Mostrando os elementos com o retorno do segundo: ";

    it = fila.begin();
    while(it != fila.end())
        cout << *it++ << " ";

    // Removendo do início
    fila.pop_front();
    // Removendo do final
    fila.pop_back();

    cout << "\n\n Tamanho da fila: " << fila.size();


    cout << endl;

    return 0;
}




