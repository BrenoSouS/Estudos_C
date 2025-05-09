#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Essa atividade foi feita por Breno de Souza Silva

int main(){
    char gabarito[10];
    char respostas[10];
    int gabarito_aluno[10];
    int respostas_certas = 0;


    for (int i = 0 ; i <= 10 ; i++){
        //gabarito[i] = ' ';
        //respostas[i]  = ' ';
        gabarito_aluno[i] = 0;
    }

    printf("\nEntre com o gabarito:\n");

    for(int i = 0 ; i < 10 ; i++){

        do{

            printf("\nQuestao %d: " , (i+1));
            scanf(" %c" ,&gabarito[i]);
            }while((gabarito[i] != 'a') && (gabarito[i] != 'b' ) && (gabarito[i] != 'c' )&& (gabarito[i] != 'd' ) && (gabarito[i] != 'e'  ));
        }


    system("clear");

    printf("\nEntre com as respostas do aluno:\n");

    for(int i = 0 ; i < 10 ; i++){
        do{
            printf("\nResposta %d do aluno %d: " , (i+1) , (i+1));
            scanf(" %c" , &respostas[i]);
        }while(respostas[i] != 'a' && respostas[i] != 'b' && respostas[i] != 'c' && respostas[i] != 'd' && respostas[i] != 'e'    );

        if(respostas[i] == gabarito[i]){
            respostas_certas += 1;
            gabarito_aluno[i] = 1;
        }else{
            gabarito_aluno[i] = 0;
        }

    }
    system("clear");
    printf("\n#############################################################################\n");
    printf("\nO aluno acertou um total de %d questoes.Sendo que: \n" , respostas_certas);
    printf("\n#############################################################################\n");

    for (int i = 0 ; i < 10 ; i++){
        if(gabarito_aluno[i] == 1){
            printf("\n questao %d: CORRETA" , (i+1));
        }else{
            printf("\n questao %d: INCORRETA" , (i+1));
        }

    }
    printf("\n#############################################################################\n");


return 0;
}
