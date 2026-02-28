#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
    #include <stdio.h>

int main() {

    // Nivel Novato
   
    // Declaração de variáveis mantendo seu padrão técnico
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; 
    float areaKm1, areaKm2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // --- CADASTRO CARTA 1 ---
    printf("Cadastro da carta 1\n===================\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código: ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf("%lu", &populacao1); 
    printf("Digite a Área em km²: ");
    scanf("%f", &areaKm1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / areaKm1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    // --- CADASTRO CARTA 2 ---
    printf("\nCadastro da carta 2\n===================\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código: ");
    scanf("%s", codigo_carta2);
    printf("Digite a Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2); 
    printf("Digite a Área em km²: ");
    scanf("%f", &areaKm2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / areaKm2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- LÓGICA DE COMPARAÇÃO (ATRIBUTO: POPULAÇÃO) ---
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Atributo: População\n\n");
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    // Estrutura de decisão para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }


    return 0;
}
