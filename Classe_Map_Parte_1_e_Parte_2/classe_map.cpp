// Map => faz combinação entre chaves e valores.
// Chaves => são únicas para indentificar elementos.
// Valores => mapeados armazenam o conteúdo associado a uma determinada chave.

#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    // int = chave, string = valor
    pair<int, string> pares[] = {
        make_pair(1, " Giovanna Gatinha"),
        make_pair(2, " Anderson"),
        make_pair(3, " Sofia")
    };

    map<int, string> mapa(pares, pares + 3);

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

//  Exemplo:
/*
    map<int, string> mapa;

    mapa[1] = " Giovanna Gatinha";
    mapa[2] = " Anderson";
    mapa[3] = " Margarete";

    //cout << mapa[1] << endl;
    
    // Troca de valores associados a uma chave.
    map.at(3) = " Carol";

    //cout << mapa[3] << endl;

    //mapa.clear(); // Limpa todos elementos do mapa


    // Verificando o mapa
    if(mapa.empty())
        cout << " Mapa  vazio!!\n" endl;
    else
        cout << " Mapa NÃO vazio!!\n" << endl;

    // Indentificando elementos do mapa
    if (mapa.count(4) > 0)
        cout << " 4 é elemento do mapa\n";
    else
        cout << " 4 NÃO é elemento do mapa\n";

*/

/*
    // Mostrando todos os elementos
    map<int, string>::iterator it;
    for(it = mapa.begin(); it != mapa.end(); ++it)
        cout << " A chave " it->first << " => " << it->second << endl;
    
    // Excluindo uma chave 
    it = mapa.find(3);
    mapa.erase(it);

    cout << endl;

    // Mostrando todos os elementos
    for(it = mapa.begin(); it != mapa.end(); ++it)
        cout << " A chave " << it->first << " => " << it->second << endl;

    // Verificando se uma chave existe
    if(mapa.find(3) == mapa.end())
        cout << "\n Chave 2 NÃO existe!\n\n";
    else
        cout << "\n Chave 3 existe!\n\n";

    // Inserindo uma elemento
    it = mapa.begin();
    mapa.insert(pair<int, string>(3, " Claudia"));

    // Para ter acesso rápida a chave
    mapa[4] = " Nádia"; // Acrescentarar uma nova chave

    // Mostrando todos os elementos
    for(it = mapa.begin(); it != mapa.end(); ++it)
        cout << " A chave " << it->first << " => " << it->second << endl;

    // Utilizando multimap
    multimap<int, string> mm;

    mm.insert(pair<int, string>(1, " Python 2"));
    mm.insert(pair<int, string>(2, " Python 3"));
    mm.insert(pair<int, string>(3, " C"));
    mm.insert(pair<int, string>(4, " C++"));
    mm.insert(pair<int, string>(5, " Ruby"));


    multimap<int, string>::iterator it2 = mm.find(1);

    cout << mm.find(1)->second << endl;

    cout << endl;

    while(it2 != mm.end()){
        cout << it2->first << " => " << it2->second << endl;
        it2++;
        //cout << (*it2).first << " => " << (*it2).second << endl; // Outra forma usando asteriscose parêntses
        // it2++;
    }

    // Definindo um limite
    multimap<int, string>::iterator it_low, it_up, it2;

    it_low = mm.lower_bound(2);
    it_up = mm.upper_bound(4);

    cout << endl;

    for(it2 = it_low; it2 != it_up; ++it2)
        cout << it2->first << " => " << it2->second << endl;


*/


    return 0;
}
