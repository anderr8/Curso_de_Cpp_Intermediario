#include <iostream>
#include <string.h>
#define MAX 10

using namespace std;

class Carro{
    public:
    char nome[100];
    char cor[20];
    char placa [20];
    double preco;
};

// Ordenando Carros Bubble sort Parte 2
void ordena(Carro carros[], int tam){
    Carro aux;
    for(int i = tam; i >= 0; i--){
        for(int j = 1; j <= i; j++){
            if(strcmp(carros[j - 1].nome, carros[j].nome) == 1){
                aux = carros[j - 1];
                carros[j - 1] = carros[j];
                carros[j] = aux;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Carro carros[MAX];
    int i = 0;

    while(true){
        char resp;
        cout << " Dígite o nome do carro: ";
        cin >> carros[i].nome;
        cout << " Dígite a cor: ";
        cin >> carros[i].cor;
        cout << " Dígite a placa: ";
        cin >> carros[i].placa;
        cout << " Dígite o preço: ";
        cin >> carros[i].preco;
        cout << " Você deseja continuar? <S>SIM ou <N>NÃO: ";
        cin >> resp;
        if(resp != 'S')
            break;
        cout << endl;
        i++; // Para passar para o próximo.
    }

    cout << endl; // Para saltar uma linha.
    // Para visualizar o que foi dígitado:

    cout << " Exibindo todos os Carros...\n\n" ;
    cout << endl;
    for(int j = 0; j <= i; j++){
        cout << " Nome do carro: " << carros[j].nome << endl;; // endl sempre para separar as palavras.
        cout << " Cor: " << carros[j].cor << endl;;
        cout << " Placa: " << carros[j].placa << endl;;
        cout << " Preço: R$" << carros[j].preco << endl;;
        cout << endl;
    }

    ordena(carros, i);
    cout << "Exibindo os carros ordenados pelo nome...\n\n";
    for(int j = 0; j <= i; j++){
        cout << " Nome do Carro: " << carros[j].nome << endl;;
        cout << " Cor: " << carros[j].cor << endl;;
        cout << " Placa: " << carros[j].placa << endl;;
        cout << " Preço: R$" << carros[j].preco << "\n\n";
    }

    return 0;
}
