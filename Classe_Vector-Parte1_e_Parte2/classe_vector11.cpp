#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(3);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    //v.erase(v.begin()); // apaga o index
    v.erase(v.begin() + 1); // apaga o primeiro elemento
    v.erase(v.end() - 1); // apaga o último elemento

    for(unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    return 0;
}
