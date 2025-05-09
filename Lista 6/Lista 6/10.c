#include <stdio.h>

//exercicio feito por Breno de Souza Silva

int main() {
    char sexo;
    float altura;
    float soma_m = 0, soma_f = 0;
    int cont_m = 0, cont_f = 0;

    do {
        printf("Digite o sexo (m/f) ou 'x' para encerrar: ");
        scanf(" %c", &sexo);

        if (sexo == 'x') break;

        if (sexo != 'm' && sexo != 'f') {
            printf("Sexo inválido! Use 'm', 'f' ou 'x'.\n");
            continue;
        }

        do {
            printf("Digite a altura (maior que zero): ");
            scanf("%f", &altura);
            if (altura <= 0) {
                printf("Altura inválida! Tente novamente.\n");
            }
        } while (altura <= 0);

        if (sexo == 'm') {
            soma_m += altura;
            cont_m++;
        } else if (sexo == 'f') {
            soma_f += altura;
            cont_f++;
        }

    } while (1);

    if (cont_f > 0) {
        printf("Média de altura das mulheres: %.2f\n", soma_f / cont_f);
    } else {
        printf("Nenhuma mulher cadastrada.\n");
    }

    if (cont_m > 0) {
        printf("Média de altura dos homens: %.2f\n", soma_m / cont_m);
    } else {
        printf("Nenhum homem cadastrado.\n");
    }

    return 0;
}
