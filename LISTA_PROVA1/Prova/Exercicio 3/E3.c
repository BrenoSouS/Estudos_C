#include<stdio.h>
#include<stdlib.h>

int main(){
    int comando;
    float valor_celsius , valor_far , valor_Kelvin ;

    do{
        system("cls");
        printf("\n+--------------------------------------------+\n");
        printf("\n|         CONVERSOR DE TEMPERATURA           |\n");
        printf("\n+--------------------------------------------+\n");
        printf("\n|         1. Celsius para fahrenheint        |\n");
        printf("\n|         2. Celsius para Kelvin             |\n");
        printf("\n|         3. Kelvin para celsius             |\n");
        printf("\n|         4. fahrenheint para celsius        |\n");
        printf("\n|         5. Finalizar                       |\n");
        printf("\n+--------------------------------------------+\n");
        printf("\n|Informe a opcao\n");

        scanf("%d" , &comando);
        if(comando > 5 || comando <0){
            printf("\n|            OPCAO INVALIDA (aguarde)!                 |\n");
            sleep(2);

        }

        switch(comando) {
            case 1:
            system("cls");
            printf("Entre com o valor em Celsius: ");
            scanf("%f" , &valor_celsius);

            valor_far = (valor_celsius * 1.8) + 32;
            printf("\nO valor de %f C , em fahrenheint e: %.2f" , valor_celsius , valor_far);
            printf("\nDigite 6 para voltar ao menu ou 5 para encerrar");
            scanf("%d" ,&comando);
            break;
            //-------------------------------------------
             case 2:
            system("cls");
            printf("Entre com o valor em Celsius: ");
            scanf("%f" , &valor_celsius);

            valor_Kelvin = valor_celsius  + 273;
            printf("\nO valor de %f C , em Kelvin e: %.2f" , valor_celsius , valor_Kelvin);
            printf("\nDigite 6 para voltar ao menu ou 5 para encerrar ");
            scanf("%d" ,&comando);
            break;
            //-------------------------------------------
             case 3:
            system("cls");
            printf("Entre com o valor em Kelvin: ");
            scanf("%f" , &valor_Kelvin);

            valor_celsius = valor_Kelvin  - 273;
            printf("\nO valor de %f K , em Celsius e: %.2f" , valor_Kelvin , valor_celsius);
            printf("\nDigite 6 para voltar ao menu ou 5 para encerrar");
            scanf("%d" ,&comando);
            break;
            //-------------------------------------------
             case 4:
            system("cls");
            printf("Entre com o valor em Fahrenheint: ");
            scanf("%f" , &valor_far);

            valor_celsius = (valor_far - 32 ) / 1.8;
            printf("\nO valor de %f F , em Celsius e: %.2f" , valor_far, valor_celsius);
            printf("\nDigite 6 para voltar ao menu ou 5 para encerrar");
            scanf("%d" ,&comando);
            break;
            //-------------------------------------------


        }


    }while(comando != 5 );

return 0 ;
}
