#include <iostream>

using namespace std;

int main (){
    float base;
    int expoente;
    int resultado;
    char resposta = 'S';

    while(resposta == 'S' || resposta == 's'){
        base = 0;
        expoente = 0;
        resultado = 1;

        cout << "Insira a base da potencia R: ";
        cin >> base;
        
        cout << "Insira o expoente da potencia Z: ";
        cin >> expoente;

        for (int i = 1; i <= expoente; i++){
            resultado *= base;
        }
        cout << "\nResultado da conta: " << resultado;

        cout << "\nDeseja calcular outra optência (S/N)?: ";
        cin >> resposta;
    }
    return 0;
}