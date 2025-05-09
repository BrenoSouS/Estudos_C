#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//exercicio feito por Breno de Souza Silva

int main()
{
int i = 1;
int calcular = 0;

  while(i<=20){

    if(i % 2 == 0){
        calcular += i;

    }
    i++;
  }

 printf("%d" , calcular);

}
