/*
    Calculadora
    Operações permitidas:

    + → adição
    - → subtração
    * → multiplicação
    / → divisão

*/


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*  cout << comando de saída menor menor.
        cin >> comando de entrada sempre colocando maior maior. 
    */

    int num1, num2, resultado;

    float div;
    char op; //operação

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite a operacao: ";
    cin >> op;

    switch (op) //expression
    {
    case '+': /* constant-expression */
        resultado = num1 + num2;
        cout << "Soma: " << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Subtracao: " << resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "Multiplicacao: " << resultado << endl;
        break;
    case '/':
        if(num2 != 0){
        resultado = (float)num1 / num2; // Só precisa que um parâmetro receba o tipo primitivo float para quebrar o número.
        cout << "Divisao: " << div << resultado << endl;
        } else{
            cout << "Divisao por zero!" << endl;
        }
        break;
    
    default:
        cout << "Operacao inexistente." << endl;
        break;
    }

    return 0;
}
