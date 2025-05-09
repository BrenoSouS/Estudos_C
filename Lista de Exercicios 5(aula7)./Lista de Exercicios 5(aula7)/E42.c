#include<stdio.h>
#include<stdlib.h>

//atividade feita por Breno de Souza Silva

int main(){
    int far ;
    float cel ;

    for(far = 32 ;  far<=100 ; far++){

        cel = 5.0 / 9.0 * (far - 32) ;
        printf("\n\t%d graus farhenheint são equivalentes a %.2f graus celcius." , far , cel);



    }


return 0;
}
