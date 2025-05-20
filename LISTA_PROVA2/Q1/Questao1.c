#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char sequencia[25] = " ";
    int tamanho;
    float percentualA , percentualG , percentualT , percentualC , somaA = 0 , somaG = 0 , somaC = 0 , somaT = 0 ;


    printf("Entre com uma sequencia de bases nitrogenadas: ");
    fgets(sequencia ,25 ,stdin);
    tamanho = strlen(sequencia);




    for(int i = 0 ; i < tamanho - 1 ; i++){

            if(sequencia[i] == 'A' || sequencia[i] == 'a'){
                somaA += 1;
            }
            else if(sequencia[i] == 'g' || sequencia[i] == 'G'){
                somaG += 1;
            }
            else if(sequencia[i] == 'T' || sequencia[i] == 't'){
                somaT += 1;
            }
            else if(sequencia[i] == 'c' || sequencia[i] == 'C'){
                somaC += 1;
            }
            else{
                system("cls");
                printf("SEQUENCIA INVALIDA");
            }

    }
    printf("\n---------------------------------------------\n");
    printf("Sequencia: %s" , sequencia);
    printf("\n A: %.0f , G :%.0f ,T:%.0f , C: %.0f" , somaA , somaG , somaT , somaC);
    printf("\n---------------------------------------------\n");
//percentuais
    percentualA = somaA / (tamanho - 1);
    percentualG = somaG / (tamanho - 1);
    percentualT = somaT / (tamanho - 1);
    percentualC = somaC / (tamanho - 1);

    printf("\n Percentual de Adenina: %.2f %%" , percentualA*100);
    printf("\n Percentual de Guanina: %.2f %%" , percentualG *100);
    printf("\n Percentual de Citosina: %.2f %%" , percentualC *100);
    printf("\n Percentual de Timina: %.2f %%" , percentualT *100);
    printf("\n---------------------------------------------\n");

    return 0;
}
