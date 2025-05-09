#include<stdio.h>
#include<stdlib.h>

//atividade feita por Breno de Souza Silva

int main(){
    int vet1[5] , vet2[5] , vetInterpolacao[10] , vetConcatenacao[10] ,contador1 = 1 ,
    contador2 = 1;

    for(int i = 0 ; i < 10 ; i++){
        if(i< 5){
            vet1[i] = 0;
            vet2[i] = 0;
            continue;
        }
        vetInterpolacao[i] = 0;
        vetConcatenacao[i] = 0;

    }

    for(int i = 0 ; i < 5 ; i++){
        
        printf("Entre com o %d° numero inteiro para o primeiro vetor: \n" , (i+1));
        scanf("%d" , &vet1[i]);

        printf("Entre com o %d° numero inteiro para o segundo vetor: \n" , (i+1));
        scanf("%d" , &vet2[i]);

    }
    // printf("%d ," , vet2[0]);
    // printf("%d ," , vet2[1]);
    // printf("%d ," , vet2[2]);
    // printf("%d ," , vet2[3]);
    // printf("%d ," , vet2[4]);

//definindo o vetor concatenado
    for(int i = 0 ; i < 10 ; i++){
        if(i<5){
            vetConcatenacao[i] = vet1[i];
        }
        else{
            vetConcatenacao[i] = vet2[i-5];
        }
    }
    printf("\n----------------------------------------\n");



//definindo vetor interpolado
    for(int i = 0 ; i < 10 ; i++){

        if(i == 0 ){
            vetInterpolacao[i] = vet1[i];
        
        }else{
            if(i % 2 != 0){
                vetInterpolacao[i] = vet2[i-contador1];
                contador1 += 1;
            }else{
                vetInterpolacao[i] = vet1[i-contador2];
                contador2 += 1;
            }
        }
        
    }
//imprimindo vetor concatenado
    for(int i = 0 ; i < 10 ; i++){

        printf(" %d ," , vetConcatenacao[i]);
        if( i == 9){
            printf("\b.");
        } 
    }

    printf("\n----------------------------------------\n");

//imprimindo vetor interpolado
    for(int i = 0 ; i < 10 ; i++){

        printf(" %d ," , vetInterpolacao[i]);
        if(i == 9){
            printf("\b.\n");
        } 
    }
    return 0 ;
}