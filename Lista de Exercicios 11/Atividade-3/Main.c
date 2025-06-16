#include"geometria.h"

int main(){
    int controle  , largura, altura;
    float base , alturaT;

    do{
        system("clear");
        printf("\n-----------------------------------\n");
        printf("\nEscolha uma opção abaixo:\n");
        printf("\n-----------------------------------\n");
        printf("\t1-Area do retangulo\n");
        printf("\t1-Perimetro do retangulo\n");
        printf("\t1-Area do triangulo\n");

        scanf("%d" , &controle);
        if(controle !=0 || controle!= 1 || controle != 2 || controle != 3){
            printf("\n\nOpção invalida!");
        }

    }while(controle != 0 && controle!= 1 && controle != 2 && controle != 3);

    system("clear");

    switch (controle)
    {
    case 0:
        printf("\n-----------------------------------\n");
        printf("\nPrograma encerrado...\n");
        printf("\n-----------------------------------\n");    

        break;
    case 1:
        printf("\n-----------------------------------\n");
        printf("\nEntre com a largura do retangulo:\n");
        printf("\n-----------------------------------\n");
        scanf("%d" , &largura);

        printf("\n-----------------------------------\n");
        printf("\nEntre com a altura do retangulo:\n");
        printf("\n-----------------------------------\n");
        scanf("%d" , &altura);

        printf("\n-----------------------------------\n");
        printf("Area do retangulo: %d" ,areaRetangulo(altura , largura));
        printf("\n-----------------------------------\n");

        

        break;
    case 2:
        printf("\n-----------------------------------\n");
        printf("\nEntre com a largura do retangulo:\n");
        printf("\n-----------------------------------\n");
        scanf("%d" , &largura);

        printf("\n-----------------------------------\n");
        printf("\nEntre com a altura do retangulo:\n");
        printf("\n-----------------------------------\n");
        scanf("%d" , &altura);

        printf("\n-----------------------------------\n");
        printf("Perimetro do retangulo: %d" , PerimetroRetangulo(altura , largura));
        printf("\n-----------------------------------\n");

        

        break;

    case 3:
        printf("\n-----------------------------------\n");
        printf("\nEntre com a base do triangulo:\n");
        printf("\n-----------------------------------\n");
        scanf("%f" , &base);

        printf("\n-----------------------------------\n");
        printf("\nEntre com a altura do triangulo:\n");
        printf("\n-----------------------------------\n");
        scanf("%f" , &alturaT);

        printf("\n-----------------------------------\n");
        printf("Area do triangulo: %f" , areaTriangulo(alturaT , base));
        printf("\n-----------------------------------\n");
        

        break;
    }
    

    return 0;
}