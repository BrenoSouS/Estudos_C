#include<math.h>
#include<stdio.h>
#include<stdlib.h>

//Código feito Por Breno de Souza Silva

int main(){
    float ladoX , ladoY , ladoZ , perimetro , area , semiPerimetro , area1;
    int testeTriangulo ;

    do{
        printf("\nEntre com o primeiro lado do triangulo: ");
        scanf("%f" , &ladoX);

        printf("\nEntre com o Segundo lado do triangulo: ");
        scanf("%f" , &ladoY);

        printf("\nEntre com o Terceiro lado do triangulo: ");
        scanf("%f" , &ladoZ);

        if(ladoX > ladoY + ladoZ || ladoY > ladoX + ladoZ || ladoZ > ladoX + ladoY){

            testeTriangulo =0;
            system("clear");
            printf("------------------------------------------------------------------------");
            printf("\nERRO: Infelizmente os lados %.2f ,%.2f e %.2f nao podem formar um triangulo\n" , ladoX , ladoY , ladoZ);
            printf("\n\tTENTE NOVAMENTE\n");
            printf("------------------------------------------------------------------------");


        }else{
            testeTriangulo = 1;
        }


    }while(testeTriangulo != 1);

    perimetro = ladoX + ladoY + ladoZ;
    semiPerimetro = perimetro / 2 ;
    area1 = semiPerimetro*(semiPerimetro - ladoX) * (semiPerimetro - ladoY) * (semiPerimetro - ladoZ);
    area = sqrt(area1);


    system("clear");
    printf("MUITO BEM O TRIANGULO COM LADOS %.2f , %.2f e %.2f \ntem as seguintes caracteristicas: " , ladoX , ladoY , ladoZ);
    printf("\n-----------------------------------------------");
    printf("\n\t-Area: %.2f" , area);
    printf("\n\t-Perimetro: %.2f" , perimetro);
    printf("\n-----------------------------------------------");

return 0;
}
