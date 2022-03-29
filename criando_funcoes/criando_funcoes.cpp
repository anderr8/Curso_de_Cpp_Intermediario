#include <iostream>
#include <locale.h>


using namespace std;
/*
bool par(int num){

    if(num % 2 == 0)
        return true;
    return false;
}

int main(int argc, char const *argv[])
{   
    setlocale(LC_ALL,"Portuguese");

    int n;
    cout << "Digite um número: ";
    cin >> n;
    if(par(n))
        cout << "O número " << n << " é par." << endl;
    else
        cout << "O número " << n << " é ímpar." << endl;

    return 0;

}
*/

bool par(int num);
void mensagem(); // 1

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"POrtuguese");

    int n;

    mensagem(); // 3

    cout << "Digite um número: ";
    cin >> n;
    if(par(n))
        cout << "O número " << n << " é par." << endl;
    else
        cout << "O número " << n << " é ímpar." << endl;

    return 0;
}

void mensagem(){ // 2
    cout << "Aprendendo C++" <<endl;
}

bool par(int num){
    if(num % 2 == 0)
        return true;
    return false;

    return 0;
}
