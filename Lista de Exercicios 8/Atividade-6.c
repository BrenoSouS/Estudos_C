#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//Atividade feita por Breno de Souza Silva

int main(){

    char nome[100] , nome2[100];
    int contador = 0 , i2;

    printf("Entre com Seu nome: ");
    fgets(nome , 100 , stdin);

    for(int i = 0 ; nome[i] != '\0' ; i++){
        if(contador == 0){
            nome2[i] = nome[i];
            if(nome[i] == 32){
                contador += 1;
                nome2[i] = nome[i] ;
                i2 = i;
            }
        }else{
         
            if(nome[i] < 97){
                nome2[i2] = nome[i];

                if(nome[i] != 32){
                    nome2[i2+1] = '.';
                    i2 += 2;
                }else{
                    i2 += 1;
                }

            }else{
                continue;
            }

        }

        
        
    }
    printf("%s" , nome2);

    return 0 ;

}