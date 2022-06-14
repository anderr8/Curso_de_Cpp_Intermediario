#include <iostream>
#include <iomanip>

using namespace std;

class Pessoa{
public:
    string nome;
    int idade;

    Pessoa(const string& nome, const int& idade){
        this->nome.assign(nome);
        this->idade = idade;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");


    Pessoa p1(" Giovanna", 26);
    Pessoa p2(" Felipão", 4);
    Pessoa p3(" Júlia", 12);
    Pessoa p4(" Rebeca", 8);

    // Ficaram justificados a direita
    cout << setw(20) << " Nome da pessoa" << setw(10) << " Idade" << endl;
    cout << setw(20) << p1.nome << setw(10) << p1.idade << endl;
    cout << setw(20) << p2.nome << setw(10) << p2.idade << endl;
    cout << setw(20) << p3.nome << setw(10) << p3.idade << endl;
    cout << setw(20) << p4.nome << setw(10) << p4.idade << endl;

    return 0;
}
