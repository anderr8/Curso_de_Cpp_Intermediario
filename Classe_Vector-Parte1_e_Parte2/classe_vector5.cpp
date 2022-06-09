// iterator
// rbegin => retorna o iterator reverso 

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    vector<int> v(5);
/*
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
*/
    vector<int>::reverse_iterator rit;
    int i = 0;
    for(rit = v.rbegin(); rit != v.rend(); rit++)
        *rit = ++i;

    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    return 0;
}
