#include <iostream>
#include <list>
#include <locale.h>

using namespace std;

// Função para verificar se o número é par:
// O número é par quando ele dividido por dois,e o resto da divisão da (0)zero
bool par(const int& n){
    return (n % 2 == 0);
}

// Se o tamanho da primeira string deve vir antes, então retorna true
bool comparar_tamanho(const string& s1, const string& s2){
    if(s1.length() < s2.length())
        return true;
    return false;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    list<int> l1; // Lista de inteiros vazia.
    list<int> l2(3, 10); // Três inteiros com valor 10.
    list<int>::iterator it;

// Inserindo elementos em 11 - push_back e push_front
    l1.push_back(10); // l1: 10
    l1.push_front(20); // l1: 20, 10
    l1.push_back(30); // l1: 20, 10, 30

    cout << " Mostrando os elementos da l1:\n";
    for(it = l1.begin(); it != l1.end(); it++)
        cout << *it << endl;

    cout << "\n Mostrando os elementos da l2:\n";
    for(it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // Acessando o primeiro e último elemento da l1 - front e back
    cout << "\n Primeiro elemento de l1: " << l1.front() << endl;
    cout << "\n último elemento de l1: " << l1.back() << endl;

    cout << "\n Tamanho de l1: " << l1.size() << endl;

    // l1: 20, 10, 30
    // Removendo o primeiro elemento da l1
    l1.pop_front(); // Remove o 20
    // Removendo o último elemento da l1
    l1.pop_back(); // Remove o 30

    cout << "\n Mostrando novamente os elementos da l1:\n";
    for(it = l1.begin(); it != l1.end(); it++)
        cout << *it << endl;

    // Removendo todos os elementos da l2
    while(!l2.empty())
        l2.pop_front();
    cout << "\n Novo tamanho da l2: " << l2.size() << endl;

    // Atribuindo elementos a l2: - função assign
    int vet[] = {1, 2, 3, 4};
    l2.assign(vet, vet + 4);

    cout << "\n Mostrando novos elementos da l2:\n";
    for(it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // Inserindo um elemento em l2 - função insert
    l2.insert(l2.begin(), 100);
    cout << "\n Mostrando novamente os elementos da l2:\n";
    for(it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    it = l2.begin();
    it++; // Aponta para o segundo
    l2.insert(it, 200);
    cout << "\n Elementos da l2:\n";
    for(it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // Inserindo duas vezes o valor 50 na primeira posição
    l2.insert(l2.begin(), 2, 50);
    cout << "\n Elementos da l2:\n";
    for(it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // Apagando os dois primeiros números
    list<int>::iterator it2 = l2.begin();
    it2++;
    it2++;
    l2.erase(l2.begin(), it2);
    cout << "\n Elementos da l2:\n";
    for(it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;

    // Remover todos os elementos - função clear
    l2.clear();
    cout << "\n Tamanho da l2: " << l2.size() << endl;

    // Função splice - transfere elementos de uma lista para outra
    list<int> lista1(2, 10), lista2(2, 20);
    it = lista1.begin();
    // Transfere elementos da lista2 para lista1
    lista1.splice(it, lista2);
    cout << "\n Elementos da lista1:\n";
    for(it = lista1.begin(); it != lista1.end(); it++)
        cout << *it << endl;  
    cout << "\n Tamanho da lista2: " << l2.size() << endl;

    // Remover todos os elementos iguais a um valor
    // Função remove
    lista1.remove(20);
    cout << "\n Elementos da lista1 sem o valor 20:\n";
    for(it = lista1.begin(); it != lista1.end();it++)
        cout << *it << endl;
    
    // Função remove_if
    // Remove se ocorrer determinada condição
    int vet2[] = {6, 8, 10, 5, 20, 21};
    list<int> lista3(vet2, vet2 + 6);
    cout << "\n Elementos da lista3 antes da remoção:\n";
    for(it = lista3.begin(); it != lista3.end(); it++)
        cout << *it << " ";

    // Removendo todos os elementos pares da lista3
    lista3.remove_if(par);

    cout << "\n Elementos da lista3 depois da remoção:\n";
    for(it = lista3.begin(); it != lista3.end(); it++)
        cout << *it << " ";

    cout << endl;

    int vet3[] = {17, 60, 5, 30, 50};
    list<int> lista4(vet3, vet3 + 5);
    lista4.sort();
    cout << "\n\n Elementos da lista4 ordenados crescentemente:\n";
    for(it = lista4.begin(); it != lista4.end(); it++)
        cout << *it << " " << endl;

    // Ordenando strings
    list<string> lista5;
    list<string>::iterator it5;
    lista5.push_back(" Python");
    lista5.push_back(" C++");
    lista5.push_back(" Ruby");
    lista5.push_back(" Haskell");
    lista5.sort();
    cout << "\n\n Elementos da lista5 ordenados:\n";
    for(it5 = lista5.begin(); it5 != lista5.end(); it5++)
        cout << *it5 << endl;

    // Ordenando usando algum critério
    // Exemplo: ordenando pelo tamanho da string
    lista5.sort(comparar_tamanho);
    cout << "\n\n Elementos da lista5 ordenados pelo tamanho:\n";
    for(it5 = lista5.begin(); it5 != lista5.end(); it5++)
        cout << *it5 << " - tamanho: " << (*it5).length() << endl;


    return 0;
}