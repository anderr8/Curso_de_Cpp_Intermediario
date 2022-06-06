#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in("saida_io3.txt");
    char c;
    
    while(true){
        in >> c;
        if(in.fail())// fail => procura caracteres para ser lido
            break;
        cout << c;
    }
    return 0;
}
