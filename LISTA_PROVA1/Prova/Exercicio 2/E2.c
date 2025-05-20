#include<stdlib.h>
#include<stdio.h>

int main(){
    int idade , qtd_homensF = 0 , qtd_homensM = 0 , qtd_homensE = 0 ,qtd_mulheres_p_media = 0;
    char sexo , nivel_ensino;
    float salario , total_salario = 0 , media_salario_mulheres = 0;

    for(int i = 1 ; i<= 10; i++ ){

        printf("\n------------------------------------------");
        printf("\nEntre com os dados");
        printf("\n------------------------------------------");
        printf("\nIdade: ");
        scanf("%d" , &idade);

        printf("\nSexo: ");
        scanf(" %c" , &sexo);

        printf("\nNivel de ensino: ");
        scanf(" %c" , &nivel_ensino);

        printf("\nSalario: ");
        scanf("%f" , &salario);

        //---------------------------------------

        if(sexo == 'F' && (idade >= 20 && idade <= 30)){
            qtd_mulheres_p_media += 1;
            total_salario += salario;
        }

        //---------------------------------------
        if(sexo =='M'&& nivel_ensino == 'F'){
            qtd_homensF += 1;

        }else if(sexo == 'M' && nivel_ensino == 'M'){
            qtd_homensM += 1;

        }else if(sexo == 'M' && nivel_ensino == 'E'){
            qtd_homensE += 1;
        }

    }
    //a)media salario mulheres entre 20 e 30 anos:
    if(qtd_mulheres_p_media != 0){
        media_salario_mulheres = total_salario / qtd_mulheres_p_media;
    }
    system("cls");
    printf("\n-----------------------------------------");
    printf("\n Media salarial entre mulheres de 20 a 30 anos: %f" , media_salario_mulheres);
    printf("\n-----------------------------------------");


    //b) quantidade de homens por nivel de ensino:
    printf("\nTotal de homens por nivel de ensino:");
    printf("\n-----------------------------------------");
    printf("\nFundamental: %d" , qtd_homensF);
    printf("\nMedio: %d" , qtd_homensM);
    printf("\nEJA: %d" , qtd_homensE);
    printf("\n-----------------------------------------");


return 0;
}
