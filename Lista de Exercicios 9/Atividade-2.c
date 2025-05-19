#include<stdio.h>
#include<stdlib.h>
#define COLUNA 5
#define LINHA 5

//Atividade feita por Breno de Souza Silva

int main(){
    int matriz[5][5] , controle[5] , auxiliar = 4;

    for(int i = 0; i < LINHA ; i++){
        for (int i2 = 0; i2 < COLUNA; i2++){
            matriz[i][i2] = 0;

        }
        
    }
//entrada de dados
    for(int i = 0 ; i < LINHA ; i++){
        for (int i2 = 0 ; i2 < COLUNA ; i2++){
            printf("Entre com o numero da  %d° linha %d coluna " , i , i2);
            scanf("%d" , &matriz[i][i2]);
        }
        printf("\n");

    }
//Exibir matriz
    for(int i = 0 ; i < LINHA ; i++){
        for (int i2 = 0; i2 < COLUNA; i2++){
            printf("% d "  , matriz[i][i2]);

        }
        printf("\n");
        
    }
//trocar linhas
    for(int i = 0 ; i < 5 ; i++){
        controle[i] = matriz[3][i];
        matriz[3][i] = matriz[0][i];
    }
    for(int i = 0 ; i < 5 ; i++){
        matriz[0][i] = controle[i];
    }

    printf("\n");
///Exibir matriz
    for(int i = 0 ; i < LINHA ; i++){
        for (int i2 = 0; i2 < COLUNA; i2++){
            printf("% d "  , matriz[i][i2]);

        }
        printf("\n");
        
    }

    //trocar colunas
    for(int i = 0 ; i < 5 ; i++){
        controle[i] = matriz[i][4];
        matriz[i][4] = matriz[i][1];
    }
    for(int i = 0 ; i < 5 ; i++){
        matriz[i][1] = controle[i];
    }

    printf("\n");

    //Exibir matriz
    for(int i = 0 ; i < LINHA ; i++){
        for (int i2 = 0; i2 < COLUNA; i2++){
            printf("% d "  , matriz[i][i2]);

        }
        printf("\n");
        
    }
    //trocando diagonais
    for ( int i = 0 ; i < 5 ; i++){
        controle[i] = matriz[i][i];
        
        
    }

    for(int i = 0 ; i < 5 ; i++){
        
        matriz[i][i] = matriz[i][auxiliar];
        auxiliar -= 1;
    }
    auxiliar = 4;

    for(int i = 0 ; i < 5 ; i++){
        matriz[i][auxiliar] = controle[i];    
        auxiliar -= 1;
    }
    printf("\n");

    //Exibir matriz
    for(int i = 0 ; i < LINHA ; i++){
        for (int i2 = 0; i2 < COLUNA; i2++){
            printf("% d "  , matriz[i][i2]);

        }
        printf("\n");
        
    }

    return 0;
}