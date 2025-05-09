#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Atividade feita por: Breno de Souza Silva.
int E1(){
    float nota1,nota2, media;

    printf("Entre com a primeira nota: ");
    scanf("%f" , &nota1);

    printf("Entre com a segunda nota: ");
    scanf("%f" , &nota2);

    media =((nota1 * 2) + (nota2* 3)) / 5;

    printf("%.2f" , media);

    return 0;
}
