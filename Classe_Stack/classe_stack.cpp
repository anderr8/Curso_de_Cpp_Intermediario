/*
    Pilha - LIFO (last in first out)
*/

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);
    // pilha: 40, 30, 20, 10

    cout << " Tamanho da pilha: " << pilha.size() << endl;

    while(!pilha.empty()){
        int e = pilha.top();

        cout << e << " ";
        pilha.pop();
    }

    cout << "\n";


    return 0;
}
