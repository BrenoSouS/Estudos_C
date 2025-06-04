#include<stdio.h>
#include<stdlib.h>

int potencia(int numero , int potencia);

int main(){

    printf("%d" , potencia(2,4));


    return 0;
}

//Funcao de potencia
int potencia(int numero , int potencia){
    int resultado = 1;
    for(int i = 0 ; i < potencia ; i++){

        resultado = (resultado * numero);

    }

    return resultado;
}

//funcao tamanho dos numeros

int tamanhoNumeros(int numero){
    for(int i = 0 ; i < numero ; i++){
        if(potencia(numero,i) > numero){
            return i-1
        }
    }
}
