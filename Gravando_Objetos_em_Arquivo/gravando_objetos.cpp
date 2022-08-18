#include <iostream>
#include <fstream> // ofstream ( o de saída), ifstream ( i de entrada)
using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
public:
    string& getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }

    void setNome(string& nome){
        this->nome = nome;
    }

    void setIdade(int idade){
        this->idade = idade;
    }

    // Sobrecarga do operador de inserção de dados <<
    // ostream = output stream
    friend ostream& operator<<(ostream& os, const Pessoa& p){
        // Escrever cada membro
        os << "\n" << p.nome << "\n";
        os << p.idade;
        return os;
    }

    // Sobrecarga do operador de extração de dados >>
    // istream = input stream
    friend istream& operator>>(istream& is, Pessoa& p){
        // Ler cada membro
        is >> p.nome >> p.idade;
        return is;
    }
};

char menu(){
    char resp;

    cout << " Dígite 1 para Inserir pessoas\n";
    cout << " Dígite 2 para Listar as pessoas\n";
    cout << " Dígite 0 para Saír\n";
    cout << " Opção: ";
    cin  >> resp;
    return resp;
}


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    char resp;

    while(true){
        resp = menu();
        if(resp == '1'){
            Pessoa pessoa;
            string nome;
            int idade;

            // app = append (adiciona ao final do arquivo)
            ofstream ofs("arquivo.txt", fstream::app);

            cout << "\n Dígite o nome da pessoa: ";
            cin >> nome;
            cout << "\n Dígite a idade da pessoa: ";
            cin >> idade;
            cout << endl;

            // Seta o nome e a idade
            pessoa.setNome(nome);
            pessoa.setIdade(idade);

            ofs << pessoa;
            ofs.close();
        }
        else if(resp == '2'){
            Pessoa p;
            ifstream ifs("arquivo.txt");
            cout << "\n Listando pessoas...\n\n";

            // Verifica se o arquivo existe e se é possível ler
            if(ifs.good()){
                // eof = end of file
                // Enquanto NÃO chegar ao final do arquivo
                while(!ifs.eof()){
                    ifs >> p; //Faz a extração dos dados

                    // Mostrar os dados
                    cout << " Nome: " << p.getNome() << "\n";
                    cout << " Idade: " << p.getIdade() << "\n\n";
                }
                ifs.close();
            }
            else{
                cout << " Falha ao abrir o arquivo!\n\\n";
            }
        }
        else if(resp == '0'){
            cout << "\n Bye! Visite: www.geeksbr.com ;-)\n";
            break;
        }
            else{
                cout << "\n Opção inválida.Tente novamente...\n\n";
            }
    }
    return 0;
}
    
