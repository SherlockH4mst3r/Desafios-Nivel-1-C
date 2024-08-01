#include <iostream>

using namespace std;

//Chamada das funcoes
    int Calcula_fatorial(int fatorial);
//---------//


int main(){
    int numero;

    cout << "insira o número positivo: ";
    cin >> numero;

    //Tratamento para numero positivo
    while(numero < 0){ 
        cout << "\nO número deve ser positivo: ";
        cin >> numero;
    }

    numero = Calcula_fatorial(numero);

    cout << "Valor do resultado: " << numero;
 
    return 0;
}

//Declaracao da funcao
    int Calcula_fatorial(int fatorial)
    {
        int i = 1;

        while (fatorial > 1){
            i *= fatorial;
            fatorial--;
        }
        
        return i;
    }
//