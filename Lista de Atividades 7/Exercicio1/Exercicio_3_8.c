#include<stdio.h>
#include<stdlib.h>

//Essa atividade foi feita por Breno de Souza Silva

int main(){
int maior_numero , menor_numero , numeros[6];



for(int i = 0 ; i < 6 ; i++){
    
    printf("Entre com um numero inteiro: ");
    scanf("%d" , &numeros[i]);
    
    if(i == 0 ){
        maior_numero = numeros[i];
        menor_numero = numeros[i];

    }else if( numeros[i] < menor_numero){
        menor_numero = numeros[i];

    }else if( numeros[i] > maior_numero){
        maior_numero = numeros[i];

    }


}
system("clear");
printf("\n###################################################\n");
printf("\n\tO maior numero enviado foi: %d" , maior_numero);
printf("\n\tO menor numero enviado foi: %d \n" , menor_numero);
printf("\n###################################################\n");

return 0;
}

