#include<stdio.h>
#include<stdlib.h>

//Código feito Por Breno de Souza Silva

int main(){
    int ano_atual = 2025 , ano_inicio = 2002;
    float salario = 1000.0;

    while(ano_inicio < ano_atual){
        ano_inicio ++;

        if(ano_inicio > 2003){
            salario += salario * 0.06;
            printf("\nmais um ano de empresa : aumento de 6 por cento");
            printf("\n----------------------------------------------------");
        }
        else{
            salario += salario * 0.05;
            printf("\nPrimeiro ano de empresa: Aumento de 5 por cento");
            printf("\n----------------------------------------------------");
        }


    }

    printf("\nO salario atual do funcionario é de: R$ %.2f" , salario);


return 0;
}
