#include <stdio.h>

//exercicio feito por Breno de Souza Silva

int main() {
    int idade, peso;
    float altura;
    int jogadores_inferiores_18 = 0, jogadores_acima_80kg = 0;
    int total_idades = 0, total_altura = 0;
    int jogadores_total = 0, jogadores_acima_80kg_total = 0;
    
    for (int time = 1; time <= 5; time++) {
        int total_idade_time = 0, total_altura_time = 0;
        
        printf("Digite as informações dos jogadores do time %d:\n", time);
        
        for (int jogador = 1; jogador <= 4; jogador++) {
            printf("Jogador %d:\n", jogador);
            
            printf("Idade: ");
            scanf("%d", &idade);
            printf("Peso: ");
            scanf("%d", &peso);
            printf("Altura: ");
            scanf("%f", &altura);
            
            if (idade < 18) {
                jogadores_inferiores_18++;
            }
            
            total_idade_time += idade;
            total_altura_time += altura;
            
            total_idades += idade;
            total_altura += altura;
            jogadores_total++;
            
            if (peso > 80) {
                jogadores_acima_80kg++;
                jogadores_acima_80kg_total++;
            }
        }
        
        printf("Média das idades do time %d: %.2f\n", time, (float)total_idade_time / 4);
    }
    
    printf("\nMédia das idades de todos os jogadores: %.2f\n", (float)total_idades / (5 * 4));
    printf("Média das alturas de todos os jogadores do campeonato: %.2f\n", (float)total_altura / (5 * 4));
    printf("Quantidade de jogadores com idade inferior a 18 anos: %d\n", jogadores_inferiores_18);
    printf("Percentagem de jogadores com mais de 80 quilos: %.2f%%\n", (float)jogadores_acima_80kg_total / jogadores_total * 100);
    
    return 0;
}
