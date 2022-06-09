// iterator
// empty => verifica se o iterator esta v√°zio

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    vector<int> v;

    if(v.empty())
        cout << " Vetor v·zio!!\n";
    else
        cout << " Vetor n„o v·zio!!\n";

    v.push_back(10);

    if(v.empty())
        cout << " Vetor v·zio!!\n";
    else
        cout << " Vetor n„o v·zio!!\n";
    return 0;
}
