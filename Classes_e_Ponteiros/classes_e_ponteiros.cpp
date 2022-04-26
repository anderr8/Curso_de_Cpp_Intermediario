#include <iostream>

using namespace std;

class Conta{
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

    double getSaldo(){
        return saldo;
    }

    int getNumero(){
        return numero;
    }
};

void foo(Conta& c){
   c.depositar(50);
} //-> Outro exemplo:

/* void foo(Conta* pc){  
    //pc->depositar(50);
}*/


Conta* novaConta(int numero){
    Conta* c = new Conta;
    c->numero = numero;
    c->saldo = 0.0;
    return c;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Conta* pc = novaConta(1111);
    //Conta* pc = &c;

    //pc->numero = 1;
    //pc->saldo = 200;

    //foo(&c);
    //foo(c);

    cout << "Conta: " << pc->getNumero() << endl;
    cout << "Saldo: " << pc->getSaldo() << endl;

    return 0;
}
