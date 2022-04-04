#include <iostream>


using namespace std;

int num_global = 12;

void foo(){

    int num = 10; // vari√°vel com escopo local.
    static int num_static = 1;
    cout << "Vari·vel local: " << num << endl;
    cout << "Vari·vel global: " <<num_global << endl;
    num_static++;
    cout << "Vari·vel Est·tica: " << num_static << endl;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "POrtuguese");

    //cout << num_global << endl;
    foo();
    foo();
    foo();
    return 0;
}
