#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Atividade feita por: Breno de Souza Silva.

int main3(){

float salario , novo_salario;

printf("Entre com o seu salario atual: ");
scanf("%f" , &salario);

printf("-------------------------\n");

if(salario <= 500){
    novo_salario = salario += (salario * 0.2);
}else{
    novo_salario = salario += (salario * 0.1);
}

printf("\nSeu novo salario sera de: %f" , salario);

return 0 ;
}
