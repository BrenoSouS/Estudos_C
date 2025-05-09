#include<stdlib.h>
#include<stdio.h>

//Exercicio feito por Breno de Souza Silva

int main(){
    int comando , numero , qtd_numeros = 0, somaNumeros = 0, mediaNumeros ,menorNumero , maiorNumero;

    do{
        system("clear");
        printf("\n##################################################");
        printf("\n\tSELECIONE UMA OPCAO A SEGUIR");
        printf("\n##################################################");
        printf("\n\t1- Adicionar Numero \n\t2- ver lista geral \n\t0-Sair");
        printf("\n##################################################\n");

        scanf("%d" , &comando);

        while(comando == 1 ){
            system("clear");
            printf("\n##################################################");

            printf("\nAdicione um numero: ");
            scanf("%d" , &numero);

            if(qtd_numeros == 0){
                maiorNumero = numero;
                menorNumero = numero;
            }

            if(numero < menorNumero){
                menorNumero = numero;
            }else if( numero > maiorNumero){
                maiorNumero = numero;
            }

            qtd_numeros += 1;

            somaNumeros += numero;



            system("clear");
            printf("\n##################################################");
            printf("\nDeseja adicionar mais algum numero?\n\t1-Sim\n\t3-Não\n\t0-Fechar \n");
            scanf("%d" , &comando);



        }
        while(comando == 2 ){
            system("clear");
            mediaNumeros = somaNumeros/qtd_numeros;

            printf("\n##################################################");
            printf("\nQuantidade de numeros: %d" , qtd_numeros);
            printf("\nMaior numero: %d" , maiorNumero);
            printf("\nMenor numero: %d" , menorNumero);
            printf("\nMedia aritmedica dos numeros: %d" , mediaNumeros);
            printf("\nSoma dos numeros: %d" , somaNumeros);
            printf("\n##################################################");
            printf("\n Deseja efetuar qual operacao? ");
            printf("\n\t3-Menu \n\t0-Fechar \n");
            scanf("%d" , &comando);


        }

    }while(comando != 0 || comando == 3);


return 0;
}
