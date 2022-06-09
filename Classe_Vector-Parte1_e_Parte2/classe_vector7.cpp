#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    while(!v.empty())
        v.pop_back(); // Remove elementos do vector 

    if(v.empty())
        cout << " Vetor v�zio\n";
    else
        cout << " Vetor n�o v�zio\n";
    return 0;
}
