#include <stdio.h>


int main() {

    // --- Nivel aventureiro ---
    // Variáveis 
    char estado1, estado2;
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int opcao;

    // --- CADASTRO SIMPLIFICADO 
    printf("Cadastro Carta 1 - Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    densidade1 = (float)populacao1 / area1;

    printf("\nCadastro Carta 2 - Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    densidade2 = (float)populacao2 / area2;

    // --- MENU INTERATIVO ---
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Densidade Populacional\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO ---\n");

    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            // COMPARAÇÃO ANINHADA 
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate na populacao! Verificando Densidade...\n");
                if (densidade1 < densidade2) {
                    printf("Vencedor pelo desempate (Menor Densidade): %s\n", cidade1);
                } else {
                    printf("Vencedor pelo desempate (Menor Densidade): %s\n", cidade2);
                }
            }
            break;

        case 2:
            printf("Atributo: Densidade Populacional\n");
            // Lógica Inversa: Menor valor vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate total na Densidade!\n");
            }
            break;

        default:
            printf("Opcao invalida no menu.\n");
    }

    return 0;
}
