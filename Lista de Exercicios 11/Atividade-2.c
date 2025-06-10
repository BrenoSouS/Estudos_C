#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Atividade feita por Breno de Souza Silva

void Preenche(char palavra[], int qtdeEsp, char Alinhamento);

int main(){
    char Nome[6] = "Breno";

    printf("%s" , Nome);

    printf("\npalavra formatada:");
    Preenche(Nome , 10 , 'd');
    printf(".");
    
    return 0;
}

void Preenche(char palavra[], int qtdeEsp, char Alinhamento){
    int tamanho = strlen(palavra) , it = 0;
    char duplicata[(tamanho + qtdeEsp)];
    int tamanho_DP = (tamanho + qtdeEsp);


    for (int i = 0 ; i <  tamanho_DP; i++){

        if((Alinhamento == 'e' || Alinhamento == 'E') && i < qtdeEsp){
            duplicata[i] = ' ';
            
        }
        else{
            duplicata[i] = palavra[it];
    
            it += 1;
        }

        if((Alinhamento == 'd' || Alinhamento == 'D') && i >= tamanho){
            duplicata[i] = ' ';
            
        }
    }

    printf("%s" , duplicata);
}