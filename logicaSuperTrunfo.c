#include <stdio.h>


int main() {

    // --- Nivel Mestre ---
    // Variáveis 
    char estado1[50], estado2[50], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int opcao1, opcao2;

    // --- CADASTRO ---
    printf("Cadastro Carta 1 - Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    densidade1 = (float)populacao1 / area1;

    printf("\nCadastro Carta 2 - Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1); 
    printf("Area (km2): ");
    scanf("%f", &area2);
    densidade2 = (float)populacao2 / area2;

    // --- Menu dinamico ---
    printf("\n--- COMPARAÇÃO DUPLA ---\n");
    printf("Escolha o 1º atributo (1-Populacao, 2-PIB, 3-Densidade): ");
    scanf("%d", &opcao1);
    printf("Escolha o 2º atributo (1-Populacao, 2-PIB, 3-Densidade): ");
    scanf("%d", &opcao2);

    // Variáveis para armazenar os valores
    float val1_C1, val1_C2, val2_C1, val2_C2;

    // Lógica de atribuição baseada na escolha 
    val1_C1 = (opcao1 == 1) ? (float)populacao1 : (opcao1 == 2) ? pib1 : densidade1;
    val1_C2 = (opcao1 == 1) ? (float)populacao2 : (opcao1 == 2) ? pib2 : densidade2;
    
    val2_C1 = (opcao2 == 1) ? (float)populacao1 : (opcao2 == 2) ? pib1 : densidade1;
    val2_C2 = (opcao2 == 1) ? (float)populacao2 : (opcao2 == 2) ? pib2 : densidade2;

    // --- Lógica de decisão
   
    float peso1_C1 = (opcao1 == 3) ? (1/val1_C1) : val1_C1;
    float peso1_C2 = (opcao1 == 3) ? (1/val1_C2) : val1_C2;
    float peso2_C1 = (opcao2 == 3) ? (1/val2_C1) : val2_C1;
    float peso2_C2 = (opcao2 == 3) ? (1/val2_C2) : val2_C2;

    float somaC1 = peso1_C1 + peso2_C1;
    float somaC2 = peso1_C2 + peso2_C2;

    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s: %.2f pontos\n", cidade1, somaC1);
    printf("%s: %.2f pontos\n", cidade2, somaC2);

    // Uso de Operador Ternário 
    (somaC1 > somaC2) ? printf("VENCEDOR: %s\n", cidade1) : 
    (somaC2 > somaC1) ? printf("VENCEDOR: %s\n", cidade2) : printf("EMPATE!\n");

    return 0;
}
