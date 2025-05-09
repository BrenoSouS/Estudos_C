#include <stdio.h>

//exercicio feito por Breno de Souza Silva

int main() {
    int A, N, i, resultado;
    char repetir;

    do {
        do {
            printf("Digite o valor de A (inteiro e positivo): ");
            scanf("%d", &A);
        } while (A <= 0);

        do {
            printf("Digite o valor de N (inteiro e positivo): ");
            scanf("%d", &N);
        } while (N < 0); // N pode ser zero

        for (i = 0; i <= N; i++) {
            resultado = 1;
            for (int j = 1; j <= i; j++) {
                resultado *= A;
            }
            printf("%d^%d = %d\n", A, i, resultado);
        }

        do {
            printf("Deseja executar novamente? (s/n): ");
            scanf(" %c", &repetir);
        } while (repetir != 's' && repetir != 'n');

    } while (repetir == 's');

    return 0;
}
