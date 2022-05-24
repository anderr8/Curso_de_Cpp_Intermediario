#include <iostream>

using namespace std;

class Pai1{

public:
    void foo(){
        cout << " Oi, sou o Pai1." << endl;
    }
};

class Pai2{

public:
    void foo(){
        cout << " Oi, sou o Pai2." << endl;
    }
};

// Herança Múltipla:

class Filha : public Pai1, public Pai2 {

};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Filha f;
    
    f.Pai1::foo();
    f.Pai2::foo();

    return 0;
}
