#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(3);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    cout << v.at(1) << endl; // at imprimi o index desejado
;
    return 0;
}
