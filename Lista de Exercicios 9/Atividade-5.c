#include<stdlib.h>
#include<stdio.h>

//Atividade feita por Breno de Souza Silva

int main(){
    int matriz[4][4] ,somaD = 0,somaD2 = 0 , somaL[4] , somaC[4] , controle = 0; 

    for(int i = 0 ; i < 4 ; i++){
        somaL[i] = 0;
        somaC[i] = 0;
    }

    for(int i = 0 ; i < 4 ; i++){
        for(int i2 = 0 ; i2 < 4 ; i2++){
            matriz[i][i] = 0;
        }
    }

    for(int i = 0 ; i < 4 ; i++){
        for(int i2 = 0 ; i2 < 4 ; i2++){
            printf("Entre com o elemento da linha %d , coluna %d: " , i+1 , i2+1);
            scanf("%d" , &matriz[i][i2]);
        }
        printf("\n");
    }

    for(int i = 0 ; i < 4 ; i++){
        for(int i2 = 0 ; i2 < 4 ; i2++){
            printf("%d " , matriz[i][i2]);
        }
        printf("\n");
    }

    for(int i = 0 ; i < 4 ; i++){
        for (int i2 = 0 ; i2 < 4 ; i2++){
            somaL[i] += matriz[i][i2];
        }
    }
//-print
    for(int i = 0 ; i < 4 ;i++){
        printf("%d ," ,somaL[i]);
    }
//---------------------------------


    for(int i = 0 ; i < 4 ; i++){
        for (int i2 = 0 ; i2 < 4 ; i2++){
            somaC[i] += matriz[i2][i];
        }
    }
    
    //-print
    printf("\n-------------------------\n");
    for(int i = 0 ; i < 4 ;i++){
        printf("%d ," ,somaC[i]);
    }
//---------------------------------

    for(int i = 0 ; i < 4 ; i++){
        somaD += matriz[i][i];
        
    }
    
    for(int i = 0 , i2 = 3; i < 4 ; i++){
        
            somaD2 += matriz[i][i2];
            i2 -= 1;
        
    }
    printf("\n-------------------------\n");
    printf("soma D: %d" ,somaD);
    printf("\nsoma DS: %d" ,somaD2);

    for(int i = 0 ; i < 4 ; i++){

       if(somaC[i] == somaL[i] && somaL[i] == somaD2 && somaD2 == somaD){
            continue;
        }else{
            controle += 1;
        }
    }
    

    if(controle == 0){
        printf("\n######################################\n");
        printf("      É um quadrado magico!!!");
        printf("\n######################################\n");
    }else{
        printf("\n######################################\n");
        printf("      Não é um quadrado magico!!!");
        printf("\n######################################\n");
    }
    return 0;
}