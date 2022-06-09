#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a(2, 20);
    vector<int> b(3, 10);

    a.swap(b); // troca o vector

    for(unsigned int i = 0; i < a.size(); i++)
        cout << a[i] << endl;
    for(unsigned int i = 0; i < b.size(); i++)
        cout << b[i] << endl;
    return 0;
}
