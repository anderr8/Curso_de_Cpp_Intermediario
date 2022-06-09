#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(3);
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    for(unsigned int i = 0; i < v.size(); i++) // unsigned => resolve problemas com sinais.
        cout << v[i] << endl;    
    return 0;
}
