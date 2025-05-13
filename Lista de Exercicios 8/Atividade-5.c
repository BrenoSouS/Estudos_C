#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Atividade feita por Breno de Souza Silva

int main(){
    
    char String[100] , String2[100] , String3[100];
    int contador = 0, tamanhoString , i2;

    printf("Entre com uma string: ");
    fgets(String , 100 , stdin);

    tamanhoString = strlen(String);

    for(int i = 0  ; i < tamanhoString ; i++){
        if(String[i] == 32 ){
            contador += 1;
        }
    }
    

    for(i2 = tamanhoString-1; i2 >= 0  && String[i2] != ' '; i2--);

    for(int i = 0; i2 != tamanhoString && String[i2] != '\n' ; i++){
        String3[i] = String[i2];
        i2 += 1;
    }
    printf("%s ," , String3);


    for(int i = 0 ; i < tamanhoString ; i++){
        if(String[i] != 32 ){
            String2[i] = String[i];
        }else{
            break;
        }

    }
    printf("%s." , String2);

    return 0 ; 
}