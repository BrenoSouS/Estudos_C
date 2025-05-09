#include <stdio.h>

//exercicio feito por Breno de Souza Silva

int main() {
    int idade, soma = 0, contador = 0;

    do {
        printf("Digite uma idade (0 para encerrar): ");
        scanf("%d", &idade);

        if (idade > 0) {
            soma += idade;
            contador++;
        }

    } while (idade != 0);

    if (contador > 0) {
        float media = soma / (float)contador;
        printf("Média das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade válida foi digitada.\n");
    }

    return 0;
}
