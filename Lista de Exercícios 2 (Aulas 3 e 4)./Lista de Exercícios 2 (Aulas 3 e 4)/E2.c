#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Atividade feita por: Breno de Souza Silva.

int E2(){

    float n1 , n2 , n3 , n4 , media;

printf("Digite o primeiro numero: ");
scanf("%f" , &n1);

printf("Digite o segundo numero: ");
scanf("%f" , &n2);

printf("Digite o terceiro numero: ");
scanf("%f" , &n3);

printf("Digite o quarto numero: ");
scanf("%f" , &n4);


media = ((n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4)) /10 ;


printf("A media ponderada dos quatro numeroas é: %f" , media);

return 0 ;

}
