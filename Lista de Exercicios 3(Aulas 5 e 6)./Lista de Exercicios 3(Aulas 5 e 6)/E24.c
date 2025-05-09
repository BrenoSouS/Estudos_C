#include<stdio.h>
#include<stdlib.h>

//Atividade feita por: Breno de Souza Silva

int main(){
    int Dia = 14, Mes = 5, Ano=2011, a, y, m, q, d ;
    char* mes;

    printf("Entre com o dia: ");
    scanf("%d" , &Dia);

    printf("Entre com o mes: ");
    scanf("%d" , &Mes);

    printf("Entre com o ano: ");
    scanf("%d" , &Ano);

    a = (14 - Mes) /12;
    y = Ano - a;
    m = Mes + (12 * a) - 2;
    q = Dia + ((31 * m)/12) + y + (y/4) - (y/100) + (y/400);
    d = (q % 7);

    switch(d){

        case 0:
            printf("Domingo");
            break;

        case 1:
            printf("Segunda-Feira");
            break;

        case 2:
            printf("Terça-Feira");
            break;

        case 3:
            printf("Quarta-Feira");
            break;

        case 4:
            printf("Quinta-Feira");
            break;

        case 5:
            printf("Sexta-Feira");
            break;

        case 6:
            printf("Sabado");
            break;

    }
    switch(m){
        case 1:
            mes = "Março";
            break;
        case 2:
            mes = "Abril";
            break;
        case 3:
            mes = "Maio";
            break;
        case 4:
            mes = "Junho";
            break;
        case 5:
            mes = "Julho";
            break;
        case 6:
            mes = "Agosto";
            break;
        case 7:
            mes = "Setembro";
            break;
        case 8:
            mes = "Outubro";
            break;
        case 9:
            mes = "Novembro";
            break;
        case 10:
            mes = "Dezembro";
            break;
        case 11:
            mes = "Janeiro";
            break;
        case 12:
            mes = "Fevereiro";
            break;
    }

    printf(" , %d de %s de %d" , Dia , mes , Ano);


return 0;
}
