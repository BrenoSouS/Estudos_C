#include<stdlib.h>
#include<stdio.h>

int main(){
    int numero_funcionarios1 , numero_funcionarios2 , numero_funcionarios3 , tempo1 , tempo2 , tempo3 , melhor_tempo , andar;
    char* melhorT = "";

    printf("Entre com o numero de funcionarios do primeiro andar: ");
    scanf("%d" , &numero_funcionarios1);

    printf("Entre com o numero de funcionarios do Segundo andar: ");
    scanf("%d" , &numero_funcionarios2);

    printf("Entre com o numero de funcionarios do terceiro andar: ");
    scanf("%d" , &numero_funcionarios3);

    for(int i = 1 ; i<=3 ; i++){
        if(i == 1){
            tempo1 = (numero_funcionarios2 * 2) + (numero_funcionarios3 * 4);
            printf("\n--------------------------------------------------------------------------------");
            printf("\n\tO total de minutos caso a maquina estiver no primeiro andar e de: %d" , tempo1);

        }else if (i == 2){
            tempo2 = (numero_funcionarios1 * 2) + (numero_funcionarios3 * 2);
            printf("\n--------------------------------------------------------------------------------");
            printf("\n\tO total de minutos caso a maquina estiver no segundo andar e de: %d" , tempo2);




        }else{
            tempo3 = (numero_funcionarios1 * 4) + (numero_funcionarios2 * 2);
            printf("\n--------------------------------------------------------------------------------");
            printf("\n\tO total de minutos caso a maquina estiver no terceiro andar e de: %d" , tempo3);


        }
    }

    melhor_tempo = tempo1;
    melhorT = "Primeiro andar";
    if(tempo2 < melhor_tempo){
        melhor_tempo = tempo2;
        melhorT = "Segundo andar";
        printf("\nO melhor tempo e no Segundo andar: %d" , melhor_tempo);
    }else  if(tempo3 < melhor_tempo){
        melhor_tempo = tempo3;
        melhorT = "Terceiro andar";
        printf("\nO melhor tempo e no Terceiro andar: %d" , melhor_tempo);
    }else{
        printf("\nO melhor tempo e no Primeiro andar: %d" , melhor_tempo);
    }



    return 0;
}
