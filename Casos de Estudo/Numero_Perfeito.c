#include<stdio.h>
#include<stdlib.h>
#define tamanho  3



int numPerfeito(int numero);
void numerosPerfeitos(int vetor[]);

int main(){
    int numeros[tamanho];
    numerosPerfeitos(numeros);

    return 0 ;
}
//função 1
int numPerfeito(int numero){
    float soma = 0.0;

    for (int i = 1 ; i < numero ; i++){
        if(numero % i == 0){
            soma += i;
        }
    }

    if(soma == numero){
        return 1;

    }
    else{
        return 0;
    }

}
//função 2
void numerosPerfeitos(int vetor[]){
    int interador = 1 , i2 = 0;

    for(int i = 0 ; i < tamanho ; i++){
        vetor[i] = 0;
    }
    while(i2 < tamanho){
        if(numPerfeito(interador) == 1){
            vetor[i2] = interador;
            i2 += 1;
        }

        interador += 1;

    }

    for(int i = 0 ; i < tamanho ; i++){
        printf("%d ," , vetor[i]);
    }
}


