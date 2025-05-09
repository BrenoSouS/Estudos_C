#include <stdio.h>

//exercicio feito por Breno de Souza Silva

int main() {
    int codigo, quantidade;
    float total_geral = 0, total_item = 0;

    printf("CARDÁPIO:\n");
    printf("100 - Cachorro quente  - R$ 2.20\n");
    printf("101 - Bauru simples     - R$ 2.40\n");
    printf("102 - Bauru com ovo     - R$ 3.00\n");
    printf("103 - Hambúrguer        - R$ 2.50\n");
    printf("104 - Cheeseburguer     - R$ 3.20\n");
    printf("105 - Refrigerante      - R$ 2.00\n");

    do {
        printf("\nDigite o código do item (0 para encerrar): ");
        scanf("%d", &codigo);

        if (codigo == 0) break;

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        switch (codigo) {
            case 100:
                total_item = 2.20 * quantidade;
                printf("Cachorro quente - Total: R$ %.2f\n", total_item);
                break;
            case 101:
                total_item = 2.40 * quantidade;
                printf("Bauru simples - Total: R$ %.2f\n", total_item);
                break;
            case 102:
                total_item = 3.00 * quantidade;
                printf("Bauru com ovo - Total: R$ %.2f\n", total_item);
                break;
            case 103:
                total_item = 2.50 * quantidade;
                printf("Hambúrguer - Total: R$ %.2f\n", total_item);
                break;
            case 104:
                total_item = 3.20 * quantidade;
                printf("Cheeseburguer - Total: R$ %.2f\n", total_item);
                break;
            case 105:
                total_item = 2.00 * quantidade;
                printf("Refrigerante - Total: R$ %.2f\n", total_item);
                break;
            default:
                printf("Código inválido!\n");
                total_item = 0;
        }

        total_geral += total_item;

    } while (codigo != 0);

    printf("\nTotal geral do pedido: R$ %.2f\n", total_geral);

    return 0;
}
