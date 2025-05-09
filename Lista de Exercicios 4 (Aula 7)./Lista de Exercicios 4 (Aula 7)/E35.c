#include<stdio.h>
#include<stdlib.h>

//Código feito Por Breno de Souza Silva

int main(){
    float joao = 1.50 , ze = 1.10 ;
    int anos = 0;

    while( ze < joao){
        anos ++;
        ze += 0.03;
        printf("\nUm ano se passou , e ze cresceu mais 3 centimetros...");

        joao += 0.02;
        printf("\nUm ano se passou , e ze cresceu mais 2 centimetros...");
        printf("\n-----------------------------------------------------------------");



    }
    printf("\n\tPassaram-se %d anos para que ze ficasse mais alto que joao.\n\tSendo que ze ficou com %.2f m e joao com %.2f m" ,anos , ze ,joao);

return 0;
}
