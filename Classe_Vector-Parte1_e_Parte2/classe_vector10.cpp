#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(3);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    vector<int>::iterator it = v.begin();
        //v.insert(it, 40); // insere no primeiro index
        v.insert(it + 2, 40); // insere no segundo elemento

    for(unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    return 0;
}
