#include<stdio.h>
#include<stdlib.h>

void exibe(int vetor[] , int tam);

int main(){
    int t[10] , i;
    for(int i = 0 ; i < 10 ; i++){
        t[i] = i;
    }

    exibe(t,10);

return 0;
}

void exibe(int vetor[] , int tam){
    for(int i = 0 ; i < tam ; i++){
        printf("%d" , vetor[i]);
    }
}
