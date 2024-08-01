#include <iostream>

using namespace std;

//chamada da funcao
    int Verifica_media(float mediaTurma, float mediaAluno);
//

int main (){
    //Delcaracao das variaveis
        float nota1, nota2, nota3, media_da_turma, media_do_aluno;
        int flag;
    //-------------//

    cout <<"\nInsira a nota 1: ";
    cin >> nota1;
    
    cout <<"\nInsira a nota 2: ";
    cin >> nota2;
    
    cout <<"\nInsira a nota 3: ";
    cin >> nota3;

    //Calculo da media do aluno
    media_do_aluno = (nota1 + nota2 + nota3) / 3;
    
    cout <<"\nInsira a média da turma: ";
    cin >> media_da_turma;

    //Compara e avisa se o aluno esta =, <, > do que a media da turma
        flag = Verifica_media(media_da_turma, media_do_aluno);

        switch (flag)
        {
        case 0:
            cout << "\nO aluno está na média da turma";
            break;

        case 1:
            cout << "\nO aluno está abaixo da média da turma";
            break;

        case 2:
            cout << "\nO aluno está acima da média da turma";
        }
    //-------------//
    
    return 0;
}

//Declaracao da funcao
    int Verifica_media(float mediaTurma, float mediaAluno)
    {
        int flag;
        if (mediaAluno == mediaTurma)
            flag = 0;

        if (mediaAluno < mediaTurma) 
            flag = 1;

        if (mediaAluno > mediaTurma)
            flag = 2;
        return flag;
    }
//--------------//