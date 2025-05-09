#include <stdio.h>

//exercicio feito por Breno de Souza Silva

int main() {
    float num1, num2, resultado;
    int operacao;

    do {
        printf("\nEscolha uma operação:\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Finalizar\n");
        printf("Opção: ");
        scanf("%d", &operacao);

        if (operacao < 1 || operacao > 5) {
            printf("Operação inválida!\n");
            continue;
        }

        if (operacao == 5) {
            printf("Encerrando a calculadora.\n");
            break;
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (operacao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro! Divisão por zero não é permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;
        }

    } while (1);

    return 0;
}
