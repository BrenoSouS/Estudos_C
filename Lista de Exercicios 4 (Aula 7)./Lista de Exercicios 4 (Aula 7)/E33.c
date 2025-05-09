#include<stdlib.h>
#include<stdio.h>

//Código feito Por Breno de Souza Silva

int main(){
    int a,b ,contador = 1;

    do{
        printf("\n---------------------------------------");
        printf("\nEntre com o primeiro numero: ");
        scanf("%d" , &a);

        printf("\nEntre com o segundo numero: ");
        scanf("%d" , &b);

        for(int i = a ; i < b ; i++){
            if(i % 2 == 0){
                printf("\t-%d" , i);
            }

        }
        contador++;
    }while( contador <= 5);



return 0;
}
