#include<stdio.h>
#include<stdlib.h>

float calculoMedia(float nota1 , float nota2 , float nota3 , char opcao);

int main(){

    printf("Resultado : %f" , calculoMedia(2,2,2,'P'));


    return 0;
}

//funções

float calculoMedia(float nota1 , float nota2 , float nota3 , char opcao){
     int resultado = 0;

    if(opcao == 'A' || opcao == 'a'){
        resultado = (nota1 + nota2 + nota3 )/ 3;
        
    }else if(opcao == 'P' || opcao == 'p'){
        resultado = (nota1 * 5  + nota2 * 3 + nota3 * 2) / 5 + 3 + 2;
    }
    
    return resultado;
    
}