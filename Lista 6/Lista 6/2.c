#include <stdio.h>

int main() {
    int codigo, num_veiculos, num_acidentes;
    int maior_acidente = -1, menor_acidente = 1000000;
    int cidade_maior, cidade_menor;
    int total_veiculos = 0, total_acidentes = 0;
    int cidades_com_menos_2000 = 0, total_acidentes_menos_2000 = 0;
    
    for (int i = 1; i <= 5; i++) {
        printf("Digite o código da cidade %d: ", i);
        scanf("%d", &codigo);
        
        printf("Digite o número de veículos de passeio da cidade %d: ", i);
        scanf("%d", &num_veiculos);
        
        printf("Digite o número de acidentes com vítimas da cidade %d: ", i);
        scanf("%d", &num_acidentes);
        
        if (num_acidentes > maior_acidente) {
            maior_acidente = num_acidentes;
            cidade_maior = codigo;
        }
        if (num_acidentes < menor_acidente) {
            menor_acidente = num_acidentes;
            cidade_menor = codigo;
        }
        
        total_veiculos += num_veiculos;
        
        if (num_veiculos < 2000) {
            cidades_com_menos_2000++;
            total_acidentes_menos_2000 += num_acidentes;
        }
        
        total_acidentes += num_acidentes;
    }
    
    printf("\nMaior índice de acidentes: %d (Cidade %d)\n", maior_acidente, cidade_maior);
    printf("Menor índice de acidentes: %d (Cidade %d)\n", menor_acidente, cidade_menor);
    printf("Média de veículos: %.2f\n", (float)total_veiculos / 5);
    
    if (cidades_com_menos_2000 > 0) {
        printf("Média de acidentes nas cidades com menos de 2000 veículos: %.2f\n", (float)total_acidentes_menos_2000 / cidades_com_menos_2000);
    } else {
        printf("Nenhuma cidade com menos de 2000 veículos para calcular a média de acidentes.\n");
    }

    return 0;
}
