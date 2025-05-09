#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Atividade feita por: Breno de Souza Silva.

int main2(){
    float Lquadrado , Pquadrado , Aquadrado;


    printf("Informe o lado do quadrado: ");
    scanf("%f" , &Lquadrado);

    Pquadrado = Lquadrado * Lquadrado;
    Aquadrado = Lquadrado + Lquadrado + Lquadrado + Lquadrado;

    printf("\nO perimetro do quadrado sera: %f" , Pquadrado);
    printf("\nA area do quadrado sera: %f" , Aquadrado);
return 0;
}
