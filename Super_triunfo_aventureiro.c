#include <stdio.h>
#include <string.h>

// Estrutura para armazenar informações de cada país
typedef struct {
    char nome[50];
    int populacao;           // em milhões
    float area;              // em km²
    float pib;               // em bilhões
    int pontos_turisticos;
    float densidade;         // população / área
} Carta;

int main() {
    // Duas cartas cadastradas (exemplo)
    Carta carta1 = {"Brasil", 213, 8516.0, 1847.0, 120, 213.0/8516.0};
    Carta carta2 = {"Argentina", 45, 2780.0, 519.0, 80, 45.0/2780.0};

    int opcao;

    // Menu interativo
    printf("=== Super Trunfo de Países ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Nome do país\n");
    printf("2 - Populacao (milhões)\n");
    printf("3 - Area (km²)\n");
    printf("4 - PIB (bilhoes)\n");
    printf("5 - Numero de pontos turisticos\n");
    printf("6 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", carta1.nome, carta2.nome);

    switch(opcao) {
        case 1:
            printf("Nome do país: %s x %s\n", carta1.nome, carta2.nome);
            printf("Comparação por nome não determina vencedor.\n");
            break;

        case 2: // População
            printf("Populacao: %d x %d\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // Área
            printf("Area: %.2f x %.2f\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // PIB
            printf("PIB: %.2f x %.2f\n", carta1.pib, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Pontos turísticos
            printf("Pontos turisticos: %d x %d\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.pontos_turisticos > carta1.pontos_turisticos) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // Densidade demográfica (regra invertida)
            printf("Densidade demografica: %.2f x %.2f\n", carta1.densidade, carta2.densidade);
            if (carta1.densidade < carta2.densidade) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.densidade < carta1.densidade) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 6.\n");
            break;
    }

    return 0;
}
