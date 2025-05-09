#include<stdio.h>
#include<stdlib.h>

//atividade feita por Breno de Souza Silva

int main(){
    int fila1_voo1[5] , fila2_voo1[5] , fila1_voo2[5] , fila2_voo2[5] , controle , entrada , assento,contador = 0 , contador2 = 0 , cancel1  = 0, cancel2 = 0;
    
    for (int i = 0 ; i < 5 ; i++){
        fila1_voo1[i] = 0 ;
        fila2_voo1[i] = 0 ;
        fila1_voo2[i] = 0 ;
        fila2_voo2[i] = 0 ;


    }
    
    do{
        system("clear");
        printf("\n+---------------------------------------+\n");
        printf("\n|       Escolha uma opção               |");
        printf("\n+---------------------------------------+\n");
        printf("\n\t1-fazer reserva; \n");
        printf("\n\t2-cancelar reserva; \n");
        printf("\n\t3-verificar assentos disponiveis; \n");
        printf("\n\t4-relatorio de voo. \n");
        printf("\n\t0- SAIR \n");

        scanf("%d" , &controle);

        while(controle == 1){
            system("clear");
            printf("\n--------------------------------------------\n");
            printf("Escolha qual voo pretende fazer a reserva\n");
            printf("\n 1 - opção 1\n");
            printf("\n 2 - opção 2\n");
            printf("\n--------------------------------------------\n");

            scanf("%d" ,&entrada);

            if(entrada == 1){
                
                system("clear");
                printf("\n--------------------------------------------\n");
                printf("Escolha o assento que deseja reservar:");
                printf("\n--------------------------------------------\n");

                scanf("%d" , &assento);

                

                if(assento <= 5 && fila1_voo1[(assento-1)]!= 1){
                    fila1_voo1[(assento-1)] = 1;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t1 - Efetuar outra reserva;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    scanf("%d" , &controle);

                }else if (assento >= 5 && fila2_voo1[(assento-1)]!= 1){
                    fila2_voo1[(assento-6)] = 1;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t1 - Efetuar outra reserva;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    scanf("%d" , &controle);

                }else{
                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("\nERRO: assento invalido ou já ocupado! \nTente outro local ou se preferir revise os assentos disponiveis voltando ao menu rincipal :)\n");
                    printf("\n1- Tente novamente com outro\n");
                    printf("\n5 - voltar ao menu principal\n");
                    printf("\n\t0 - SAIR\n");
                    printf("\n--------------------------------------------\n");
                    scanf("%d" , &controle);
                    
                }
                
            }else if(entrada == 2){
                
                system("clear");
                printf("\n--------------------------------------------\n");
                printf("Escolha o assento que deseja reservar:");
                printf("\n--------------------------------------------\n");

                scanf("%d" , &assento);

                

                if(assento <= 5 && fila1_voo2[(assento-1)]!= 1){
                    fila1_voo2[(assento-1)] = 1;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t1 - Efetuar outra reserva;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    scanf("%d" , &controle);

                }else if (assento >= 5 && fila2_voo2[(assento-1)]!= 1){
                    fila2_voo2[(assento-6)] = 1;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t1 - Efetuar outra reserva;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    scanf("%d" , &controle);

                }else{
                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("\nERRO: assento invalido ou já ocupado! \nTente outro local ou se preferir revise os assentos disponiveis voltando ao menu rincipal :)\n");
                    printf("\n1- Tente novamente com outro\n");
                    printf("\n5 - voltar ao menu principal\n");
                    printf("\n\t0 - SAIR\n");
                    printf("\n--------------------------------------------\n");
                    scanf("%d" , &controle);
                    
                }
            

        }
        }

        while(controle == 2){

            system("clear");
            printf("\n--------------------------------------------\n");
            printf("Escolha qual voo pretende fazer o cancelamento\n");
            printf("\n 1 - opção 1\n");
            printf("\n 2 - opção 2\n");
            printf("\n--------------------------------------------\n");

            scanf("%d" ,&entrada);

            if(entrada == 1){
                system("clear");
                printf("\n--------------------------------------------\n");
                printf("Escolha o assento que deseja cancelar a  reservar:");
                printf("\n--------------------------------------------\n");

                scanf("%d" , &assento);

                if(assento <= 5 && fila1_voo1[(assento - 1)] == 1){
                    fila1_voo1[(assento-1)] = 0;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Cancelamento de reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t2 - Efetuar outro cancelamento;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    cancel1 += 1;
                    scanf("%d" , &controle);
                    

                }
                else if(assento >= 5 && fila2_voo1[(assento - 6) == 1]){
                    fila2_voo1[(assento-6)] = 0;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Cancelamento de reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t2 - Efetuar outro cancelamento;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    cancel1 += 1;
                    scanf("%d" , &controle);
                    
                }
                else{
                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("\nERRO: assento invalido ou nâo ocupado! \nTente outro local ou se preferir revise os assentos disponiveis voltando ao menu rincipal :)\n");
                    printf("\n2 - Tente novamente com outro\n");
                    printf("\n5 - voltar ao menu principal\n");
                    printf("\n\t0 - SAIR\n");
                    printf("\n--------------------------------------------\n");
                    scanf("%d" , &controle);
                    
                }

            }
            else if ( entrada == 2){

                system("clear");
                printf("\n--------------------------------------------\n");
                printf("Escolha o assento que deseja cancelar a  reservar:");
                printf("\n--------------------------------------------\n");

                scanf("%d" , &assento);
                
                if(assento <= 5 && fila1_voo2[(assento - 1)] == 1){
                    fila1_voo2[(assento-1)] = 0;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Cancelamento de reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t2 - Efetuar outro cancelamento;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    cancel2 += 1;
                    scanf("%d" , &controle);

                }
                else if(assento >= 5 && fila2_voo2[(assento - 6) == 1]){
                    fila2_voo2[(assento-6)] = 0;

                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("Cancelamento de reserva efetuada com sucesso!");
                    printf("\n--------------------------------------------\n");
                    printf("\n\t2 - Efetuar outro cancelamento;\n");
                    printf("\n\t5 - voltar ao menu principal;\n");
                    printf("\n\t0 - SAIR\n");
                    cancel2 += 1;
                    scanf("%d" , &controle);
                }
                else{
                    system("clear");
                    printf("\n--------------------------------------------\n");
                    printf("\nERRO: assento invalido ou nâo ocupado! \nTente outro local ou se preferir revise os assentos disponiveis voltando ao menu rincipal :)\n");
                    printf("\n2- Tente novamente com outro\n");
                    printf("\n5 - voltar ao menu principal\n");
                    printf("\n\t0 - SAIR\n");
                    printf("\n--------------------------------------------\n");
                    scanf("%d" , &controle);
                    
                }
            }
        }
        while(controle == 3){
            system("clear");
            printf("\n--------------------------------------------\n");
            printf("\nMapa de ocupação\n");
            printf("\n--------------------------------------------\n");
            printf("Legenda: 1 - ocupado  / 2 - desocupado");
            printf("\n--------------------------------------------\n");

            //VOO 1
            printf("Mapa de ocupação voo 1:");
            printf("\nFila 1:  ");

            for(int i = 0 ; i < 5 ; i++){
                
                printf("%d ," , fila1_voo1[i]);
                if(i == 4 ){
                    printf("\b.");
                }

            } 
            printf("\nFila 2:  ");

            for(int i = 0 ; i < 5 ; i++){
                
                printf("%d ," , fila2_voo1[i]);
                if(i == 4 ){
                    printf("\b.");
                }

            } 
            //VOO2

            printf("\n--------------------------------------------\n");
            printf("Mapa de ocupação voo 2:");
            printf("\nFila 1:  ");

            for(int i = 0 ; i < 5 ; i++){
                
                printf("%d ," , fila1_voo2[i]);
                if(i == 4 ){
                    printf("\b.");
                }

            } 
            printf("\nFila 2:  ");

            for(int i = 0 ; i < 5 ; i++){
                
                printf("%d ," , fila2_voo2[i]);
                if(i == 4 ){
                    printf("\b.");
                }

            } 

            printf("\nOque pretende fazer a seguir?");
            printf("\n5- voltar ao Menu principal.");
            printf("\n0- SAIR.");
            scanf("%d" , &controle);
            
        }

        while(controle == 4){
            
            system("clear");
            printf("\n--------------------------------------------\n");
            printf("\nRelatorio de voo\n");
            printf("\n--------------------------------------------\n");

            printf("quantidade de assentos desocupados  voo 1: ");
            for(int i = 0 ; i < 10 ; i++){
                if(i < 5){
                    if(fila1_voo1[i] == 0){
                        contador += 1;
                    }
                }else{
                    if(fila2_voo1[i-5] == 0){
                        contador += 1;
                    }
                }
            }
            printf("%d" , contador);
            contador = 0;
//---
            printf("\nquantidade de assentos ocupados  voo 1: ");
            for(int i = 0 ; i < 10 ; i++){
                if(i < 5){
                    if(fila1_voo1[i] == 1){
                        contador2 += 1;
                    }
                }else{

                    if(fila2_voo1[i-5] == 1){
                        contador2 += 1;
                    }
                }
            }
            printf("%d" , contador2);
            printf("\nOcorrencia de cancelamentos no voo:  %d" , cancel1);

            //Testanto situação do voo 1
            if(contador2 < 6 && contador2 != 0){
                printf("\n\nSituacao do voo: BAIXA OCUPACAO");
            }else if( contador2 = 0){
                printf("\nSituacao do voo: LOTADO");
            }else if( contador2 = 10){
                printf("\n\nSituacao do voo: VAZIO");
            }
            

            contador2 = 0;

            
            printf("\n--------------------------------------------\n");

            // --------------------------------------------------------------------

            printf("\nquantidade de assentos desocupados  voo 2: ");
            for(int i = 0 ; i < 10 ; i++){
                if(i < 5){
                    if(fila1_voo2[i] == 0){
                        contador += 1;
                    }
                }else{
                    if(fila2_voo2[i-5] == 0){
                        contador += 1;
                    }
                }
            }
            printf("%d" , contador);
            contador = 0;

            printf("\nquantidade de assentos ocupados  voo 2: ");
            for(int i = 0 ; i < 10 ; i++){
                if(i < 5){
                    if(fila1_voo1[i] == 1){
                        contador2 += 1;
                    }
                }else{
                    if(fila2_voo1[i-5] == 1){
                        contador2 += 1;
                    }
                }

            }

            printf("%d" , contador2);
            printf("\nOcorrencia de cancelamentos no voo:  %d" , cancel2);
            
            //Testanto situação do voo 2
            if(contador2 < 6 && contador2 != 0){
                printf("\n\nSituacao do voo: BAIXA OCUPACAO");
            }else if( contador2 = 0){
                printf("\nSituacao do voo: LOTADO");
            }else if( contador2 = 10){
                printf("\n\nSituacao do voo: VAZIO");
            }
            
            contador2 = 0;
            printf("\n--------------------------------------------\n");
            printf("--------------------------------------------\n");

            printf("\nOque pretende fazer a seguir?");
            printf("\n5- voltar ao Menu principal.");
            printf("\n0- SAIR.");
            scanf("%d" , &controle);


    }
    
    }while (controle != 0);



return 0;

}