#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Atividade feita por: Breno de Souza Silva.

int main(){

float peso , altura , imc;

printf("Entre com seu peso em quilos: ");
scanf("%f" , &peso);

printf("Entre com sua altura em metros: ");
scanf("%f" , &altura);

imc = peso / (altura * altura);

if(imc < 18.4 && imc){
    printf("Abaixo do peso ideal");
}
else if (imc >= 18.4 && imc < 25){
    printf("Peso normal");
}
else if ( imc >= 25 && imc <= 34.9){
    printf("Obesidade de grau I");
}
else if( imc >= 35 && imc <= 39.9){
    printf("Obesidade de grau II");
}
else{
    printf("Obesidade de grau III");
}

printf("\n%f" , imc);
return 0;
}
