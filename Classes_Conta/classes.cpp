#include <iostream>

using namespace std;

class Conta {
    public:
    int numero;
    double saldo;

    double depositar(double quantidade){
        if(quantidade > 0)
            saldo += quantidade;
        return saldo;
    }

    double retirar(double quantidade){
        if(quantidade > 0 && saldo >= quantidade)
            saldo -= quantidade;
        return saldo;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Conta c;

    c.numero = 1;
    c.saldo = 100.75;

    cout << "Saldo: " << c.saldo << endl;
    cout << "Saldo depois do depósito: " << c.depositar(100) << endl;
    cout << "Saldo depois do saque: " << c.retirar(-50) << endl;
    return 0;
}
