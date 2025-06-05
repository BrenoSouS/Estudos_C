#include<stdio.h>
#include<stdlib.h>

//Exercicio feito por Breno de Souza Silva

int potencia(int numero , int potencia);
int tamanhoNumeros(int numero);

//MAIN

int main(){
    int entrada;

    printf("Entre com um numero: ");
    scanf("%d" , &entrada);
    // printf("%d" , potencia(2,4));// testando a função.
    printf("o numero %d , possue %d casas decimais;" , entrada , tamanhoNumeros(entrada));

    return 0;
}

//Funcao de potencia
int potencia(int numero , int potencia){
    int resultado = 1;
    for(int i = 0 ; i < potencia ; i++){

        resultado *= numero;

    }

    return resultado;
}

//funcao tamanho dos numeros

int tamanhoNumeros(int numero){
    for(int i = 0 ; i < numero ; i++){
        if(potencia(10,i) > numero){
            return i;
        }
    }
}
