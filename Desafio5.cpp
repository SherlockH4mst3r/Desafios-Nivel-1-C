#include <iostream>

using namespace std;

int main ()
{
    int idade;
    float renda;

    cout << "informe sua idade: ";
    cin >> idade;

    cout << "Informe sua renda: ";
    cin >> renda;

    if (idade > 21 && renda < 1200)
        cout << "Você pode participar do programa: ";
    else
        cout << "Voucê não pode participar do programa";
    return 0;
}