// iterator
// end => mostrar o último elemento

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    vector<int> v(3);
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    vector<int>::iterator it;

    cout << " Primeiro elemento: " << *v.begin() << endl;
    cout << " Último elemento: " << *(--v.end()) << endl;
    return 0;
}
