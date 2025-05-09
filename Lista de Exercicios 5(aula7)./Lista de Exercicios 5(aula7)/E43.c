#include<stdlib.h>
#include<stdio.h>

//Exercicio feito por Breno de Souza Silva

int main(){

    int numero ,qtd_positivos = 0, qtd_negativos = 0 , qtd_pares = 0 , qtd_impares = 0 , maior_numero  , menor_numero , qtd_numeros = 0;

    while(qtd_numeros < 10){

        printf("adicione um numero: ");
        scanf("%d" , &numero);

        if (qtd_numeros == 0){
            menor_numero = numero;
            maior_numero = numero;
        }

        qtd_numeros ++;


        if(numero % 2 == 0){
            qtd_pares ++;
        }else{
            qtd_impares++;
        }

        if(numero > 0){
            qtd_positivos++;
        }else{
            qtd_negativos++;
        }

        if(numero > maior_numero){
            maior_numero = numero;

        }else if(numero < menor_numero){
            menor_numero = numero;
        }


    }

    system("clear");
    printf("\nQuantidade de numeros: %d" , qtd_numeros);

    printf("\nQuantidade de numeros positivos: %d" ,qtd_positivos);

    printf("\nQuantidade de numeros negativos: %d" ,qtd_negativos);

    printf("\n Quantidade de numeros pares: %d" , qtd_pares);

    printf("\n Quantidade de numeros impares: %d" , qtd_impares);

    printf("\nMaior numero: %d" ,maior_numero);

    printf("\nMenor numero: %d" ,menor_numero);





return 0 ;
}
