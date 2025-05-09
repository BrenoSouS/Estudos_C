#include<stdlib.h>
#include<stdio.h>

//Atividade feita por Breno de Souza Silva

int main(){
int numeros[8] , numerosNegativos[8] , numerosPositivos[8];

for(int i = 0 ; i < 8 ; i++){
    numeros[i] = 0 ;
    numerosPositivos[i] = 0 ;
    numerosNegativos[i] = 0 ;

}   

for(int i = 0; i < 8 ; i++){
    printf("Entre com numeros inteiros: ");
    scanf("%d" , &numeros[i]);

    if(numeros[i] > 0 ){
        numerosPositivos[i] = numeros[i];
    }else if( numeros[i] < 0){
        numerosNegativos[i] = numeros[i];
    }
}

system("clear");
printf("-------------------------------------");
printf("\nLista de entrada:");
printf("\n-------------------------------------\n");
for(int i = 0 ; i< 8 ; i++){
    printf("%d ," , numeros[i]);
    
    if (i == 7){
        printf("\b.");
    }
}
printf("\n-------------------------------------\n");
printf("\nLista de todos os numeros positivos: \n");
for(int i = 0 ; i< 8 ; i++){
    if (numerosPositivos[i] != 0){
        printf(" %d ," , numerosPositivos[i]);
    }
    
    if (i == 7){
        printf("\b.");
    }

}

printf("\n-------------------------------------\n");
printf("\nLista de todos os numeros negativos: \n");
for(int i = 0 ; i< 8 ; i++){
    if (numerosNegativos[i] != 0 ){
        printf("%d ," , numerosNegativos[i]);
    }

    if (i == 7){
        printf("\b.");
    }


}
printf("\n-------------------------------------\n");



return 0;
}