#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Atividade feita por: Breno de Souza Silva.

int main(){
    float c1 , c2 , h , h2;

    printf("Entre com o valor do primeiro cateto: ");
    scanf("%f" , &c1);

    printf("Entre com o valor do segundo cateto: ");
    scanf("%f" , &c2);

    h2 = pow(c1 , 2) + pow( c2 , 2) ;

    h = sqrt(h2);

    printf("%f" , h);
return 0 ;
}
