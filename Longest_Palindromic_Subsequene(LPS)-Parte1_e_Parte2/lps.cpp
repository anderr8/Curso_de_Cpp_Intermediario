#include <iostream>
#include <algorithm> // Para incluir max
#include <locale.h>

using namespace std;

int lps(string & s, int i, int j){
    if(i == j)
        return 1;

    if(s[i] == s[j] && (i + 1 == j))
        return 2;

    if(s[i] ==s[j])
        return (lps(s, i + 1, j - 1) + 2);

    return max(lps(s, i, j -1), lps(s, i + 1, j));
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, " portuguese");

    string s("ATACTATA");

    cout << " Palindromo:\n\n"; 
    cout << " O tamanho desta longa sequência é: "<< lps(s, 0, s.size() - 1);


    return 0;
}
