#include<stdio.h>
#include<stdlib.h>

//Prototipos
void retornaValor(int *num1 ,int *num2 , int *num3);


//MAIN
int main(){
    int valor1  = 3 , valor2 = 4 , valor3 = 1;
    retornaValor(&valor1 ,&valor2 , &valor3);


    return 0;
}

//funções

void retornaValor(int *num1 ,int *num2 , int *num3){

    int maiorValor = 0 , numeros[3] = {*num1 , *num2 , *num3} ,num;

    
        if(numeros[0] > numeros[1] ){
            num = numeros[1];
            numeros[1] = numeros[0];
            numeros[0] = num;
            

        }
        if(numeros[0] > numeros[2] ){
            num = numeros[2];
            numeros[2] = numeros[0];
            numeros[0] = num;
            
            
            
        }if( numeros [1] > numeros[2] ){
            num = numeros[2];
            numeros[2] = numeros[1];
            numeros[1] = num;
        }
       
    
    

    for(int i = 0 ; i < 3 ; i++){
        printf("%d ," , numeros[i]);

        if(i == 2){
            printf("\b.");
        }
    }

    
}