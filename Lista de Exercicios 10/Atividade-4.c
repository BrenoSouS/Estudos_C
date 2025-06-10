#include<stdio.h>
#include<stdlib.h>

// Atividade feita por Breno de Souza Silva

int TestePrimo(int m);

int main(){

    int numero;

    printf("Entre com um numero:");
    scanf("%d" , &numero);

    if(TestePrimo(numero) == 1){
        printf("\nSeu numero e um numero primo!");
    }else{
        printf("\nSeu numero NAO e um numero primo!");
    }



    return 0;
}

int TestePrimo(int m){
    for (int i = 2 ; i <= m ; i++){
        if(m % i == 0 && i != m){
            return 0;
            break;
        }
        else{
            return 1;
        }
    }
    
}