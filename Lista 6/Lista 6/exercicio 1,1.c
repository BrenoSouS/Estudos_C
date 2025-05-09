#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//exercicio feito por Breno de Souza Silva

int main(){



for(int i = 1 ; i<=6 ; i++){
    int nota1;
    int nota2;

    printf("\n---------------------------------");
    printf("\nEntre com a primeira nota do aluno %d: " , i);
    scanf("%d" , &nota1);

    printf("\nEntre com a segunda nota do aluno %d: " , i);
    scanf("%d" , &nota2);

    if(nota1 + nota2 / 2 >= 6 ){
        printf("Parabens o aluno %d foi aprovado" , i);

    }else{
        printf("Infelizmente as notas do aluno %d foram muito baixas" , i);
    }


}

printf("---------------------------------");
printf(" fIm dos alunos ");

}
