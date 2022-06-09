// Iterator 
// função begin => retorna o primeiro elemento

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
        cout << *it << endl;    
    return 0;
}
