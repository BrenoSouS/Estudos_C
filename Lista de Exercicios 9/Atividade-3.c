#include<stdlib.h>
#include<stdio.h>

//atividade feita por Breno de Souza Silva

int main(){

    int matriz[4][7],menor_item , minmax , marcador;

    for(int i = 0 ; i < 4 ; i++){
        for (int i2 = 0 ; i2 < 7 ; i2 ++){
            matriz[i][i2] = 0;
        }
    }

    for(int i = 0 ; i < 4 ; i++){
        for (int i2 = 0 ; i2 < 7 ; i2 ++){
            printf("Entre com o elemento da linha %d , coluna %d: " , i+1 , i2+1);
            scanf("%d" , &matriz[i][i2]);
        }
        printf("\n");
    }
    
    for(int i = 0 ; i < 4 ; i++){
        for (int i2 = 0 ; i2 < 7 ; i2 ++){
            printf(" %d " , matriz[i][i2]);
            
        }
        printf("\n");
    }

    for(int i = 0 ; i < 4 ; i++){
        for (int i2 = 0 ; i2 < 7 ; i2 ++){
            if(i == 0 && i2 == 0){
                menor_item = matriz[i][i2];
            }
            else{
                if(menor_item > matriz[i][i2]){
                    menor_item = matriz[i][i2];
                    marcador = i;
                }
            }
        }
        

        printf("\n");
    }

    

    for(int i = 0 ; i < 7 ; i++){
        if(i == 0 ){
            minmax = matriz[marcador][i];
        }
        else{
            if(minmax < matriz[marcador][i]){
                minmax = matriz[marcador][i];
            }
        }
    }
    
    printf("\nO elemento MINMAX é: %d , e está na %d° linha" , minmax , marcador+1);

    return 0 ;
}