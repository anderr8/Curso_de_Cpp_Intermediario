// Sobrecarga do Operador +

#include <iostream>

using namespace std;

class Complexo{

public:
    int real, imag;

// Construtor:
    Complexo(int real, int imag){
        this->real = real;
        this->imag = imag;
    }

    // Redefinindo o operador +, & => argumento de referÃªncia:
    Complexo operator+(Complexo& c){
        //cout << c.real << endl;
        //return Complexo(c.real, c.imag);
        // Sobrecarga:
        return Complexo(this->real + c.real, this->imag + c.imag);
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");


    Complexo c1(1, 2), c2(3, 4);
    //Complexo c3 = c1 + c2;
    Complexo c3 = c1.operator+(c2);

    cout << " Parte real: " << c3.real << endl;
    cout << " Parte imaginária: " << c3.imag << endl;

    return 0;
}