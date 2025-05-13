#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Atividade feita por Breno de Souza Silva

int main(){
    char String [100];
    int TamanhoString;

    printf("Entre com uma mensagem: ");
    fgets(String , 100 , stdin);

    TamanhoString = strlen(String);

    for(int i = 0 ; i < TamanhoString ; i++){
        if(String[i] != 32 && String[i] != '\0'){
            String[i] = String[i] - 32;
        }else{
            continue;
        }
    }

    printf("%s\b" ,String);


    return 0 ;
}