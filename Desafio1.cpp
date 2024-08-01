#include <iostream>
#include <math.h>
using namespace std;

float funcao_segundo_grau(float x);

int main(){
    float a;

    cout << "Insira o número desejado:\n";
    cin >> a;

    a = funcao_segundo_grau(a);

    cout << "\nResultado da operação: " << a;
    return 0;
}

float funcao_segundo_grau(float x)
{
    float calculo = pow(x, 2) - 3 * x + 5;
    return calculo;
}