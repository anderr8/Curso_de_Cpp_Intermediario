// Set => implementa a estrutura conjunto, conjuto é uma estrutura que não contém elementos repetidos.

#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int vet[] = {70, 20, 80, 30, 40};
    set<int> myset(vet, vet + 5);

    set<int>::iterator it = myset.begin();

    cout << "\n Mostrando os elementos: ";
    while(it != myset.end()){
        cout << *it << " ";
        it++;
    }

    //myset.cler(); // Comando para limpar

    //it = myset.begin();
    //myset.erase(it);

    if(myset.empty())
        cout << "\n\n Conjunto vazio!!\n";
    else
        cout << "\n\n Conjunto NÃO vazio!!\n";

    it = myset.begin();
        cout << "\n Mostrando os elementos: ";

    while(it != myset.end()){
        cout << *it << " ";
        it++;
    }

    it = myset.find(70);
    if(it == myset.end())
        cout << "\n\n O elemento 70 NÃO existe.\n";
    else
        cout << "\n\n O elemento 70 existe.\n";

    cout << "\n Tamanho do conjunto: " << myset.size() << endl;

    return 0;
}
