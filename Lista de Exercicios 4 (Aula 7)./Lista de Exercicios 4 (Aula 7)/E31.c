#include<stdlib.h>
#include<stdio.h>


//Código feito Por Breno de Souza Silva

int main(){
    int contador = 1;

    while(contador <= 20){
        printf("\nContando: %d" , contador);
        sleep(1);
        contador += 2;


    }
    printf("\nFIM.");

    return 0;
}
