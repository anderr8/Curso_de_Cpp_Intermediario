// namespace = espaço de nomes

#include <iostream>

namespace ns1{
    int num = 42;

    class A{
    public:
        void imprimir(){
            std::cout << "olá, sou a classe A do nomespace ns1\n";
        }
    };
}

namespace ns2{
    int num = 50;
    
    class A{
    public:
        void imprimir(){
            std::cout << "Olá, sou a classe A do namespace ns2\n";
        }
    };
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    std::cout << ns2::num << std::endl;

    ns1::A ns1A;
    ns2::A ns2A;

    ns1A.imprimir();
    ns2A.imprimir();

    return 0;
}
