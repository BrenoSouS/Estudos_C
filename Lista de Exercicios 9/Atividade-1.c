#include <stdio.h>
#include <stdlib.h>
#define linha 5
#define coluna 5

//atividade feita por Breno de Souza Silva

int main(){

    int xyz[5][5] , soma = 0  , soma2 = 0 , diagonalP = 0, diagonalS = 0 , contador = 0 , total = 0;

    for(int i = 0 ; i < linha ; i++){

        for(int i2 = 0 ; i2 < coluna ; i2++){
            xyz[i][i2] = 0;

        }
    }

    //coletando itens da matriz
    for(int i = 0 ; i < linha ; i++){
        for(int i2 = 0 ; i2 < coluna ; i2++){
            printf("Entre com o numero para a %d° linha %d° coluna: " , i , i2);
            scanf("%d" , &xyz[i][i2]);
        }
        printf("\n");
    
    }

    //printando a matriz

    for (int i = 0 ; i < linha ; i++){
        for(int i2= 0 ; i2 < coluna ; i2++){
            printf(" %d  " , xyz[i][i2]);
        }
        printf("\n");
    }

    //soma dos itens da 4 linha
    for(int i = 0 ; i < coluna ; i++){
        soma += xyz[3][i];
    }
    printf("Soma dos itens da 4° linha: %d" , soma);
    printf("\n----------------------------------------");

    //soma itens da segunda coluna
    for(int i= 0 ; i < linha ; i++){
        soma2 += xyz[i][1];
    }
    printf("\n Soma dos itens da 2° coluna: %d" , soma2);
    printf("\n----------------------------------------");


    //soma diagonal principal

    for(int i = 0 ; i < linha ; i++){
        diagonalP += xyz[i][i];
    }
    printf("\n Soma dos itens da diagonal principal: %d" , diagonalP);
    printf("\n----------------------------------------");

    //soma diagonal segundaria


    for(int i = linha - 1 ; i >= 0 ; i--){
        diagonalS += xyz[i][contador];
        contador += 1;
    }
    printf("\n Soma dos itens da diagonal secundaria: %d" , diagonalS);
    printf("\n----------------------------------------");

    //soma de todos os elementos
    for( int i = 0 ; i < linha ; i++){
        for (int i2 = 0 ; i2 < coluna ; i2++){
            total += xyz[i][i2];
        }
    }
    printf("\n Soma de todos os itens da matriz: %d" , total);
    printf("\n----------------------------------------");



    return 0;

    


}