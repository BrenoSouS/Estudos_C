#include<stdio.h>
#include<stdlib.h>

//Atividade feita por Breno de Souza Silva

int main(){
    int cod_Produto[10] , total_produtos[10] , cod ,cod_qtd, controlador , verificador_de_produto  , qtd;
    char nome[100];



    for(int i = 0 ; i < 10 ; i++) {
        cod_Produto[i] = 0 ;
        total_produtos[i] = 0;
    }

    
    for(int i = 0 ; i < 10 ; i++) {
        controlador = 0;

        

        printf("\n----------------------------------------------\n");
        printf("entre com os dados necessarios para o sistema");
        printf("\nProduto: %d" , (i+1));
        printf("\n---------------------------------------------\n");
        

        do{
            verificador_de_produto = 0;
            printf("\n Codigo do produto: \n");
            scanf("%d" , &cod);

            //vendo se ja tem esse codigo na lista
            for(int ii = 0 ; ii < 10 ; ii++){

                if(cod_Produto [ii] == cod){
                    verificador_de_produto += 1;
                }
            
            }

            if(verificador_de_produto != 0){
                printf("\n----------------------------------------------\n");
                printf("    Codigo invalido , ou ja esta em uso.");
                printf("\n---------------------------------------------\n");
                
            }
            else{
                cod_Produto[i] = cod;
                controlador = 1;
            }
            
        }while(controlador != 1);
        
            
        
        
        printf("\n QTD em estoque produto: \n");
        scanf("%d" , &total_produtos[i]);
        system("clear");
        

    }

    controlador = 1;

    do{
        printf("\n+-----------------------------------------------+\n");
        printf("|                    BEM-VINDO                  |");
        printf("\n+-----------------------------------------------+\n");
        printf("Preencha as informacoes abaixo para efetuar seu pedido:\n");
        printf("\n-digite seu codigo (Caso queira sair digite 0.)\n");

        scanf("%d" , &controlador);
        printf("\nAgora seu nome:");
        scanf(" %s" ,nome);

        system("clear");
        printf("Ola %s \nfaca seu pedido preenchendo as informacoes a baixo: \n" , nome);
        printf("\n+------------------------------------------------------+\n");

        // testando se tem o produto no catalogo
        do{
            verificador_de_produto = 1;
            printf("\n\t-Codigo do produto:");
            scanf("\n %d" , &cod);
            printf("\n+------------------------------------------------------+\n");
            for(int i = 0 ; i < 10 ; i++){
                if(cod_Produto[i] == cod){
                    verificador_de_produto = 0;
                    cod_qtd = i;
                    
                }else if(verificador_de_produto != 0 && i == 9){
                    system("clear");
                    printf("ERRO: Codigo de produto inexistente");
                    printf("\n+------------------------------------------------------+\n");
                }
            }
            
        }while(verificador_de_produto != 0);

        // testando se tem a quantidade necessaria 
        do{
            verificador_de_produto = 1;
            printf("\n\t-Quantidade :");
            scanf("\n %d" , &qtd);

            if(total_produtos[cod_qtd] < qtd){
                printf("Nao temos estoque suficiente para esse produto!\n");
                printf("Quantidade atual: %d" , total_produtos[cod_qtd]);

            }else{
                total_produtos[cod_qtd] -= qtd;
                verificador_de_produto = 0;
            }
            
        }while(verificador_de_produto != 0);

        system("clear");
        printf("\n+------------------------------------------------------+\n");
        printf("\tPEDIDO REALIZADO COM SUCESSO!.");
        printf("\n+------------------------------------------------------+\n");

        printf("Item: %d" , cod);
        printf("\nQuantidade: %d" , qtd);
        printf("\n+------------------------------------------------------+\n");

        printf("\n1- Fazer outro pedido");
        printf("\n2- Ver catalogo de produtos atualizado");
        printf("\n0- Sair");
        scanf("%d" , &controlador);

        while(controlador == 2){
            system("clear");
            printf("\n+------------------------------------------------------+\n");
            for(int i = 0 ; i < 10 ; i++){
                printf("Produto: %d" , cod_Produto[i]);
                printf("\nQuantidade: %d" , total_produtos[i]);
                printf("\n+------------------------------------------------------+\n");
            }
            printf("\n+------------------------------------------------------+\n");
            printf("Escolha uma opção:\n\t1-Voltar ao menu\n\t0-Sair\n");
            scanf("%d" , &controlador);
        }
        

    }while(controlador != 0);



    return 0;
    
}
