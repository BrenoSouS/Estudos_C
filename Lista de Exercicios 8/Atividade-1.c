#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Atividade feita por Breno de Souza Silva

int main(){
    char String[100] ,String2[100];
    int tamanho_string;

    printf("Entre com um nome:");
    // gets(String);
    fgets(String , 100 , stdin);// <--- Aparentemente uma alternativa mais segura(E funcionou melhor).

    printf("Entrada :%s" , String);
    printf("\n-----------------------------------");

    tamanho_string = strlen(String);
    
    //A)
    for(int i = 0 ; i < tamanho_string ; i++){
        
        String2[i] = String[tamanho_string - (i+1)];

    }
    printf("\nSaida A: %s" , String2);
    printf("\n-----------------------------------");

    //B)
    for(int i = 0 ; i < tamanho_string ; i++){
        if(String[i] == 'e' || String[i] == 'i' || String[i] == 'o' || String[i] == 'u'){
            String2[i] = 'a';
        }else if( String[i] == 'E' || String[i] == 'I' || String[i] == 'O' || String[i] == 'U' ){
            String2[i] = 'A';
        }else{
            String2[i] = String[i];
        }
    }

    printf("\nSaida B: %s" , String2);
    printf("\n-----------------------------------");

    //C)
    for(int i = 0 ; i < tamanho_string ; i++){
        if(String[i] == 'a' || String[i] == 'i' || String[i] == 'o' || String[i] == 'u'){
            String2[i] = 'e';
        }else if( String[i] == 'A' || String[i] == 'I' || String[i] == 'O' || String[i] == 'U' ){
            String2[i] = 'E';
        }else{
            String2[i] = String[i];
        }
    }

    printf("\nSaida B: %s" , String2);
    printf("\n-----------------------------------");


    return 0;
}