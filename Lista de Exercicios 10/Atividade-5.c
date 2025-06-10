#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//Atividade feita por Breno de Souza Silva

void Troca(int *Nro1, int *Nro2);

int main(){
    int num1 ,num2;
    printf("Entre com dois numeros: ");
    scanf("%d" ,&num1);
    scanf("%d" ,&num2);

    system("clear");
    printf("Numero 1: %d \nNumero 2: %d" , num1 , num2);    
    Troca(&num1 , &num2);
printf("\n---------------------------TROCA----------------------\n");
    printf("\nNumero 1: %d \nNumero 2: %d\n" , num1 , num2);

    return 0;
}

void Troca(int *Nro1, int *Nro2){
    int repositorio ;

    repositorio = *Nro1;
    *Nro1 = *Nro2;
    *Nro2 = repositorio;
}