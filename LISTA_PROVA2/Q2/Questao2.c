#include<stdlib.h>
#include<stdio.h>
#define LINHA 5
#define COLUNA 5

int main()
{
    int campo[5][5], controlePosicao1,controlePosicao2, controleNavios = 5, controlador = 0, navios1[5][5], navios2[5][5], qtdNavios1 = 0, qtdNavios2 = 0, comando = 0;
    char jogador1[20], jogador2[20];

    for (int i = 0 ; i <LINHA ; i++)
    {
        for (int i2 = 0 ; i2 < COLUNA ; i2++)
        {
            campo[i][i2] = 0;
            navios1[i][i2] = 0;
            navios2[i][i2] = 0;
        }
    }

    for( int i = 1 ; i < 3 ; i++)
    {
        system("cls");
        controleNavios = 5;
        printf("Entre com o nome do jogador %d: ",i);
        if(i == 1)
        {
            gets(jogador1);
            do
            {
                printf("Ola %s , entre com o posicionamento (x,y)dos seus 5 navios",jogador1);
                printf("\n Restam %d Navios \n",controleNavios );

                scanf("%d", &controlePosicao1);
                scanf("%d", &controlePosicao2);
                if(controlePosicao1  > 4 || controlePosicao2 > 4)
                {
                    system("cls");
                    printf("ERRO: tente novamente\n");
                }
                else
                {
                    if(campo[controlePosicao1][controlePosicao2] != 1)
                    {
                        campo[controlePosicao1][controlePosicao2] = 1;
                        navios1[controlePosicao1][controlePosicao2] = 1;
                        controleNavios -= 1;
                    }
                    else
                    {
                        printf("ERRO: esse local ja esta ocupado\n");

                        continue;
                    }
                }
                if(controleNavios == 0)
                {
                    break;
                }

            }
            while( (controlePosicao1 > 4) || (controlePosicao2 > 4) ||(controlePosicao2 < 0)|| (controlePosicao1 < 0)||(controleNavios > 0 ));
        }
        else if (i == 2)
        {
            fflush(stdin);
            gets(jogador2);


            do
            {
                printf("Ola %s , entre com o posicionamento (x,y)dos seus 5 navios",jogador2);
                printf("\n Restam %d Navios \n",controleNavios );

                scanf("%d", &controlePosicao1);
                scanf("%d", &controlePosicao2);
                if(controlePosicao1  > 4 || controlePosicao2 > 4)
                {
                    system("cls");
                    printf("ERRO: tente novamente\n");
                }
                else
                {
                    if(campo[controlePosicao1][controlePosicao2] != 1)
                    {
                        campo[controlePosicao1][controlePosicao2] = 1;
                        navios2[controlePosicao1][controlePosicao2] = 1;
                        controleNavios -= 1;
                    }
                    else
                    {
                        printf("ERRO: esse local ja esta ocupado\n");

                        continue;
                    }
                }
                if(controleNavios == 0)
                {
                    break;
                }

            }
            while( (controlePosicao1 > 4) || (controlePosicao2 > LINHA) ||(controleNavios > 0 ));
        }

    }
    //checando quantidade de navios
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int i2 = 0 ; i2 < 5 ; i2++)
        {
            if(navios1[i][i2] == 1)
            {
                qtdNavios1 += 1;
            }

            if(navios2[i][i2] == 1)
            {
                qtdNavios2 += 1;
            }
        }
    }

    //FAZE DE ATAQUE

    controlador = 1;
    do
    {


        system("cls");
        printf("\n##########################################\n");
        printf("                O JOGO COMECOU              ");
        printf("\n##########################################\n");

        if(controlador % 2 != 0)
        {
            printf("Jogador 1: %s", jogador1);
            printf("\nQuantidade de navios: %d", qtdNavios1);
            printf("\n##########################################\n");

            printf("Escolha o local onde sera efetuado o ataque: \n");
            scanf("%d", &controlePosicao1);
            scanf("%d", &controlePosicao2);

            if(controlePosicao1 > 4 || controlePosicao2 < 0)
            {
                printf("ERRO: tente outra posicao");
                sleep(2);
            }
            else
            {
                if(campo[controlePosicao1][controlePosicao2] == navios1[controlePosicao1][controlePosicao2] && campo[controlePosicao1][controlePosicao2] == 1)
                {
                    printf("\n##########################################\n");
                    printf("                ATACOU O PROPRIO NAVIO         ");
                    printf("\n##########################################\n");


                    campo[controlePosicao1][controlePosicao2] = 0;
                    qtdNavios1 -= 1;
                    controlador += 1;

                    printf("Digite 0 para continuar:");
                    scanf("%d", &comando);
                }
                else if(campo[controlePosicao1][controlePosicao2] == navios2[controlePosicao1][controlePosicao2] && campo[controlePosicao1][controlePosicao2] == 1)
                {
                    printf("\n##########################################\n");
                    printf("                ATACOU O NAVIO INIMIGO        ");
                    printf("\n##########################################\n");


                    campo[controlePosicao1][controlePosicao2] = 0;
                    qtdNavios2 -= 1;
                    controlador += 1;
                    printf("Digite 0 para continuar:");
                    scanf("%d", &comando);

                }
                else
                {
                    printf("\n##########################################\n");
                    printf("                ERROU O ATAQUE        ");
                    printf("\n##########################################\n");

                    controlador += 1;
                    printf("Digite 0 para continuar:");
                    scanf("%d", &comando);

                }

            }

        }
        else
        {

            printf("Jogador 2: %s", jogador2);
            printf("\nQuantidade de navios: %d", qtdNavios2);
            printf("\n##########################################\n");

            printf("Escolha o local onde sera efetuado o ataque: \n");
            scanf("%d", &controlePosicao1);
            scanf("%d", &controlePosicao2);

            if(controlePosicao1 > 4 || controlePosicao2 < 0)
            {
                printf("ERRO: tente outra posicao");
                sleep(2);
            }
            else
            {
                if(campo[controlePosicao1][controlePosicao2] == navios2[controlePosicao1][controlePosicao2] && campo[controlePosicao1][controlePosicao2] == 1)
                {
                    printf("\n##########################################\n");
                    printf("                ATACOU O PROPRIO NAVIO         ");
                    printf("\n##########################################\n");


                    campo[controlePosicao1][controlePosicao2] = 0;
                    qtdNavios2 -= 1;
                    controlador += 1;

                    printf("Digite 0 para continuar:");
                    scanf("%d", &comando);
                }
                else if(campo[controlePosicao1][controlePosicao2] == navios1[controlePosicao1][controlePosicao2] && campo[controlePosicao1][controlePosicao2] == 1)
                {
                    printf("\n##########################################\n");
                    printf("                ATACOU O NAVIO INIMIGO        ");
                    printf("\n##########################################\n");


                    campo[controlePosicao1][controlePosicao2] = 0;
                    qtdNavios1 -= 1;
                    controlador += 1;
                    printf("Digite 0 para continuar:");
                    scanf("%d", &comando);

                }
                else
                {
                    printf("\n##########################################\n");
                    printf("                ERROU O ATAQUE        ");
                    printf("\n##########################################\n");

                    controlador += 1;
                    printf("Digite 0 para continuar:");
                    scanf("%d", &comando);

                }

            }


        }

    }
    while(qtdNavios1 > 0 && qtdNavios2 > 0  && comando == 0);

    if(qtdNavios1 == 0)
    {
        system("cls");
        printf("\n###############################################################\n");
        printf("                O JOGADOR %s VENCEU A PARTIDA       ", jogador2);
        printf("\n###############################################################\n");

    }
    else if(qtdNavios2 == 0)
    {
        system("cls");
        printf("\n###############################################################\n");
        printf("      O(A) JOGADOR %s VENCEU A PARTIDA       ", jogador1);
        printf("\n###############################################################\n");
    }

    // IMPRIMINDO AS MATRIZES DE CADA UM
    /*
        for(int j = 0 ; j < 5 ; j++){
                for( int j2 = 0 ; j2 < 5 ; j2++){
                    printf("%d " , navios1[j][j2]);
                }
                printf("\n");
            }

        printf("\n---------------------------------\n");

        for(int j = 0 ; j < 5 ; j++){
                for( int j2 = 0 ; j2 < 5 ; j2++){
                    printf("%d " , navios2[j][j2]);
                }
                printf("\n");
            }
    */
    return 0;
}
