#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Atividade feita por Breno de Souza Silva


int main(){
    char String[100];
    int tamanhoString;

    printf("Entre com uma palavra ou frase: ");
    fgets(String , 100 , stdin);

    tamanhoString = strlen(String);
//criptografia
    for(int i = 0 ; i < tamanhoString ; i++){
         if(String[i] == 32 ){
            
            continue;
         
        }


        if( String[i] % 2 == 0){

            String[i] += i+(((i+8)*2) - 'A')/2;

        
        }else{

            String[i] += i+(((i+8)*2) - 'A')/2;

        }
        
    }

    printf("\n Palavra criptografada: %s" , String);

//decriptografia


for(int i = 0 ; i < tamanhoString ; i++){
    if(String[i] == 32 ){
       
       continue;
    
   }


   if( String[i] % 2 == 0){

       String[i] -= i+(((i+8)*2) - 'A')/2;

   
   }else{

       String[i] -= i+(((i+8)*2) - 'A')/2;

   }
   
}

printf("\nFrase rebobinada: %s" , String);
    return 0 ; 
}