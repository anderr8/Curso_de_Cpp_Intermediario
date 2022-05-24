#include <iostream>

using namespace std;

// Parâmetros opcionais serve como um parâmetro padrão, se não for passado nenhum, será mostrado um valor Padrão.

/*
//int quad(int num)
int quad(int num = 1){ // Valor padrão (= 1).
    return num* num;
}
*/

class Carro{
private:
    int ano;
public:
    //Carro(int ano)
    Carro(int ano = 2022){ // Valor Padrão
        this->ano = ano;
    }

    int getAno(){
        return ano;
    }

    void setAno(int ano){
        this->ano = ano;
    }

};
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
/*
    int num = 10;
    //cout << " Quadrado: " << quad(num) << endl;
    cout << " Quadrado: " << quad() << endl; // Valor Padrão
*/

    //Carro c(2022);
    Carro c;
    cout << " Ano: " << c.getAno();

    return 0;
}
