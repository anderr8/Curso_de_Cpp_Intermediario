#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(2);

    v[0] = 1;
    v[1] = 2;

    cout << v.back() << endl;
    cout << v.front() << endl; // Retorna o primeiro elemento do vetor

    return 0;
}
