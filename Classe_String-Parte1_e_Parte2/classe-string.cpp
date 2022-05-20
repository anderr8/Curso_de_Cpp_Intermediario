#include <iostream>
#include <string>

// Operador << menor menor Insere a string
// Operador >> maior maior Extrai a string


using namespace std; // Espaço de nomes.

// str string da Linguagem C
// Para exibir uma mensagem da Linguagem C:
void showMessage(const char* str){
        cout << str << endl;
    }

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

/*    // Linguagem C:
    char str[] =" Giovanna Gatinha";

    cout << str << endl; // endl para pular uma linha.
*/

    // Liguagem C++:
    string str = " Giovanna Gatinha";

    cout << "Nome: "<<str << endl;
    cout << " Tamanho: " << str.size() << endl;
    cout << " Tamanho: " << str.length() << endl;
    cout << str.at(1) << endl; // Mostra qual caractere esta no Index 1.
    cout << str.back() << endl; // Mostra o último caractere da string.
    cout << str.front() << endl; // Mostra o primeiro caractere da string. Não mostrou.

    str.append(" Linda++"); // Para concatena a string.
    str.push_back('+'); // Adiciona o caractere ao final da string.
    str.insert(0, " Giovanna "); // Adiciona a string a partir do index zero.
    str.insert(str.size(), " Demais++++"); // Adiciona ao final da string. 
    str.erase(46, str.size()); // Apaga o caractere ou a string inteira a partir do index fornecido.
    cout << " Nome completo: " << str << endl;

    //str.erase(0, str.size());
    //str.clear(); // Apaga todo elemento da String.
    if(str.empty()) // Testa a string 
        cout << "\n String vazia!" << endl;
    else
        cout << " String alocada!!" << endl;


    // Para exibir a mensagem da Linguagem C:
    showMessage(str.c_str());

    // Para subitituir uma string, ou substituir um index:
    str.replace(0, 9, " I just want you =>");
        cout << "\n Acrescentando: " << str << endl;

    // Para procurar uma string ou substring:
    size_t achou = str.find("Gio"); // size_t => representa o tamanho de uma string.
    if(achou != string::npos)
        cout << "\n Achou a substring!" << endl;
    else
        cout << "\n Substring não encontrada!" << endl;

    // Exemplo:
    string my_str;
    cout << " Dígite seu nome: "; // Insere os dados.
    //cin >> my_str; // Extrai os dados.
    getline(cin, my_str); // Esta função pega os espaços em vazios.
    cout << " Nome digitado: " << my_str << endl;


    str += " Gatinha";
    cout << " Nome completo: " << str << endl;

    return 0;
}
