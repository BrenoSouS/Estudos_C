#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Atividade feita por: Breno de Souza Silva.

int main(){

int qtd_pessoas ,MM ,MH, idade  = 0, codigo , qtd_mulheres = 0, qtd_homens = 0  ,maior_idade_mulheres  = 0 ,maior_idade_homens = 0 , mulheres = 0, homens = 0;
char sexo;



do{
    system("clear");
    printf("-------------------------\n");
    printf("Entre com uma opção");
    printf("\n1 - Adicionar pessoa");
    printf("\n2 - Ver lista geral");
    printf("\n0 - Sair");
    printf("\n-------------------------\n");

    scanf("%d" , &codigo);

    while(codigo == 1){
        system("clear");
        printf("Entre com a idade da pessoa:");
        scanf("%d" , &idade);

        printf("Entre com o sexo da pessoa:");
        scanf(" %c" , &sexo);

        if(sexo == 'f' || sexo == 'F'){
            qtd_mulheres += 1;
            mulheres += idade;
            if(idade > maior_idade_mulheres){
                maior_idade_mulheres = idade;
            }
        }
        else if (sexo == 'm' || sexo == 'M'){
            qtd_homens += 1;
            homens += idade ;
            if(idade > maior_idade_homens){
                maior_idade_homens = idade;
            }
        }
        if(qtd_homens != 0 ){
            MH = homens / qtd_homens;
        }else{
            MH = 0;
        }
        if(qtd_mulheres != 0 ){
            MM = mulheres / qtd_mulheres;
        }else{
            MM = 0;
        }
        
        

        qtd_pessoas += 1;
        printf("Adicionar outra pessoa?\n1 - sim \n3 - não  \n0 -  Sair: ");
        scanf("\n %d" , &codigo);
    }

    while(codigo == 2){

        system("clear");
        printf("----------------------------");
        printf("\nNumero total de pessoas: %d" , qtd_pessoas);
        printf("\nNumero total de mulheres: %d" , qtd_mulheres);
        printf("\nNumero total de homens: %d" , qtd_homens);

        printf("\n----------------------------\n");

        printf("\n maior idade entre as mulheres: %d" , maior_idade_mulheres);
        printf("\n maior idade entre os homens: %d" , maior_idade_homens);

        printf("\n----------------------------\n");


        printf("\n media idade entre as mulheres: %d" , MM);
        printf("\n media idade entre os homens: %d" ,MH);

        printf("\n----------------------------\n");

        printf("Escolha uma opção: \n 1- Adicionar mais pessoas \n3 - voltar ao menu principal \n 0 - Sair");
        scanf("\n %d" , &codigo);
    }

}while( codigo > 2 && codigo != 0);


}
