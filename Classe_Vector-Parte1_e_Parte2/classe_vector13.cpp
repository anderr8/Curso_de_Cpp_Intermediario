#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v(3, 10);

    cout << v.size() << endl;
    v.clear(); // Limpa todos elementos
    cout << v.size() << endl;
    return 0;
}
