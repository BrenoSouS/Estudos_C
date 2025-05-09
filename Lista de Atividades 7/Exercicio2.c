#include<stdlib.h>
#include<stdio.h>

//Atividade feita por Breno de Souza Silva

int main(){

    int num1[6] , num2[6] , resultante[6];

    for(int i = 0 ; i < 6 ; i++){
        num1[i] = 0;
        num2[i] = 0;
        resultante[i] = 0;
    }

    for(int i = 0 ; i < 6 ; i++){
        printf("\nEntre com os 6 primeiros numeros para a primeira lista: ");
        scanf("%d" , &num1[i]);
        printf("\n----------------------------------------------");

    }

    for(int i = 0 ; i < 6 ; i++){
        printf("\nEntre com os 6 numeros para a Segunda lista: ");
        scanf("%d" , &num2[i]);
        printf("\n----------------------------------------------");

    }

    for(int i = 0 ; i < 6 ; i++){

        resultante[i] = num1[i] * num2[i] ;

    }
    printf("\n\t------------------------------------");
    printf("\n\tO vetor resultante será: ");
    for(int i = 0 ; i < 6 ;i++){
        
        printf("%d ," , resultante[i]);
        
    }
    return 0;
}