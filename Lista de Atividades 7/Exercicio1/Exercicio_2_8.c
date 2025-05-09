#import<stdlib.h>
#import<stdio.h>

//Essa atividade foi feita por Breno de Souza Silva

int main(){
    int numeros[8];
    int igual_trinta[8];


    for(int i = 0 ; i <=8 ; i++){
        numeros[i] = 0 ;

    }

    for (int i = 0 ; i <= 8 ; i++){
        printf("\nAdicione mais um numero: \n");
        scanf("%d" , &numeros[i]);


        if(numeros[i] == 30){
            igual_trinta[i] = i;

        }else{
            igual_trinta[i] = 0;
        }

    }


    for( int i = 0 ; i <= 8 ; i++){

        if(igual_trinta[i] != 0){
            printf("\n---------------------------------------");
            printf("\nUm numero igual a 30 na posicao %d" , igual_trinta[i]);
            printf("\n---------------------------------------\n");
        }
}





return 0;
}
