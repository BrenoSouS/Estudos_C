#include<stdlib.h>
#include<stdio.h>

//Atividade feita por Breno de Souza Silva

int main(){
    int matriz[8][5] , marcador , repeticao , repetidos[20] , controle = 0 , itera = 0;

    

    for (int i = 0 ; i < 8 ; i++){
        for(int i2 = 0 ; i2 < 5 ; i2++){
            matriz[i][i2] = 0;
        }
    }

    for (int i = 0 ; i < 8 ; i++){
        for(int i2 = 0 ; i2 < 5 ; i2++){
            printf("Entre com o elemento da linha %d , coluna %d : " , i+1 , i2+1);
            scanf("%d" , &matriz[i][i2]);
        }
        printf("\n");
    }

    for (int i = 0 ; i < 8 ; i++){
        for(int i2 = 0 ; i2 < 5 ; i2++){
            printf(" %d " , matriz[i][i2]);
        }
        printf("\n");
    
    }

    for (int i = 0 ; i < 8 ; i++){

        for(int i2 = 0 ; i2 < 5 ; i2++){
            marcador = matriz[i][i2];
            repeticao = 0;
            controle = 0;

            for(int i5 = 0 ; i5 < 20 ; i5++){
                if(marcador != repetidos[i5]){
                    continue;
                }else{
                    controle += 1;
                }
            }
            if(controle == 0){
                
                for(int i3 = 0 ; i3 < 8 ; i3++){
                    for(int i4  = 0 ; i4 < 5; i4++){
                        
                        if(marcador == matriz[i3][i4] ){
                            repeticao += 1;

                        }
                    }
                    
                }
            }
            

            if(repeticao > 1){

                repetidos[itera] = marcador;
                itera += 1 ;
            
                printf("\nO numero %d , é repetido %d vezes na matriz" , marcador , repeticao);
                printf("\n---------------------------------------------------------\n");
                
            }
    
        }
    }


    return 0;

}