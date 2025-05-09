#include<stdio.h>
#include<stdlib.h>

//Exercicio feito por Breno de Souza Silva

int main(){
    int fibo1 = 0;
    int fibo2 = 1;
    int fibo;

    for(int i = 1 ; i<=20 ; i++){

        if(fibo ==1){
            printf("\n%d" , fibo);
        }

        fibo = fibo2 + fibo1;

        printf("\n%d" , fibo);

        fibo1 = fibo2;
        fibo2 = fibo;

    }


    return 0;
}
