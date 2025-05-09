#include <stdio.h>

//exercicio feito por Breno de Souza Silva

int main() {
    int numero, i, primo = 1;

    do {
        printf("Digite um número inteiro maior que 1: ");
        scanf("%d", &numero);
    } while (numero <= 1);

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
