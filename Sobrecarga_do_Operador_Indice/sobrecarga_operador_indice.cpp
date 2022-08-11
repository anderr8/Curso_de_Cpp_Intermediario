// Sobrecarregando o Operador �ndice: []

#include <iostream>
#include <stdlib.h> // Fun��o exit() faz parte da biblioteca stdlib.h

using namespace std;

class Vetor{
private:
    int *vet, *vet_pos;
    int max;

public:
    Vetor(int max = 100){
        if(max < 0){
            cerr << " Erro: limite m�ximo menor do que 0." << endl;
            exit(1);
        }
        else if(max > 1000000){
            cerr << " Erro: Limite m�ximo maior do que 1000000." << endl;
            exit (1);
        }
        this->max = max;

// Alocar espa�o:
        vet = (int*)malloc(max * sizeof(int));
        vet_pos = (int*)malloc(max * sizeof(int));

        for(int i = 0; i < max; i++)
            vet_pos[i] = 0;
    }

    ~Vetor(){
        delete [] vet;
    }

    bool inserir(int e, int pos){
        if(pos < max && pos >= 0){
            vet[pos] = e;
            vet_pos[pos] = 1;
            return true;
        }
        return false;
    }

    int& operator[] (int i){
        if(i < 0 || i >= max){
            cerr << " Error: acesso inv�lido ao vetor.\n";
            exit(1);
        }
        else if(vet_pos[i] == 0){
            cerr << " Erro: nessa posi��o n�o existe elemento.\n";
            exit(1);
        }
        return vet[i];
    }

    int tam(){
        int cont = 0;
        for(int i = 0; i < max; i++){
            if(vet_pos[i] == 1)
                cont++;
        }
        return cont;
    }
};

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    Vetor v(10);

    if(v.inserir(10, 0))
        cout << " Elemento inserido com sucesso!\n";
    else
        cout << " Erro ao inserir o elemento.\n";

    if(v.inserir(11, 2))
        cout << " Elemento inserido com sucesso!\n";
    else
        cout << " Erro ao inserir o elemento.\n";

    if(v.inserir(12, 10)) // Erro porque s� vai at� 9.
        cout << " Elemento inserido com sucesso!\n";
    else
        cout << " Erro ao inserir o elemento.\n\n";

    cout << " Primeiro elemento: " << v[0] << endl;
    cout << " Segundo elemento: " << v[1] << endl; // Elemento vazio � apresentado um erro e n�o prossegue.
    cout << " Terceiro elemento: " << v[2] << endl;
    cout << " Trig�simo elemento: " << v[30] << endl;


    return 0;
}

