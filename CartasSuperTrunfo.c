#include <stdio.h>   // Para funções de entrada/saída como printf e scanf
#include <string.h>  // Para funções de manipulação de strings como strcpy
#include <math.h>    // Para funções matemáticas, embora não estritamente necessária aqui, é boa prática para cálculos

// Definição da estrutura para representar uma carta do Super Trunfo
// Os campos são baseados na Imagem 1
typedef struct {
    char estado;
    char codigo_carta[5];
    char nome_cidade[50];
    int populacao;
    float area_km2;
    float pib; // PIB em bilhões de reais, conforme exemplos
    int num_pontos_turisticos;
} CartaSuperTrunfo;


int main() {
    // Declaramos duas variáveis do tipo CartaSuperTrunfo
    CartaSuperTrunfo carta1;
    CartaSuperTrunfo carta2;

    // Variáveis para armazenar os valores calculados
    float densidade_populacional;
    float pib_per_capita;

    // --- CADASTRO DA PRIMEIRA CARTA ---
    printf("--- Cadastro da PRIMEIRA Carta de Super Trunfo ---\n");

    printf("Digite o Estado (apenas uma letra, ex: S para SP): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Codigo da Carta (ex: SP01): ");
    scanf("%s", carta1.codigo_carta);

    printf("Digite o Nome da Cidade: ");
    while (getchar() != '\n'); // Limpa o buffer antes do fgets
    fgets(carta1.nome_cidade, sizeof(carta1.nome_cidade), stdin);
    carta1.nome_cidade[strcspn(carta1.nome_cidade, "\n")] = 0; // Remove o '\n'

    printf("Digite a Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &carta1.area_km2);

    printf("Digite o PIB (em bilhoes de reais, ex: 699.28): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    printf("\nPrimeira carta cadastrada com sucesso!\n\n");


    // --- CADASTRO DA SEGUNDA CARTA ---
    printf("--- Cadastro da SEGUNDA Carta de Super Trunfo ---\n");

    printf("Digite o Estado (apenas uma letra, ex: R para RJ): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: RJ01): ");
    scanf("%s", carta2.codigo_carta);

    printf("Digite o Nome da Cidade: ");
    while (getchar() != '\n'); // Limpa o buffer antes do fgets
    fgets(carta2.nome_cidade, sizeof(carta2.nome_cidade), stdin);
    carta2.nome_cidade[strcspn(carta2.nome_cidade, "\n")] = 0; // Remove o '\n'

    printf("Digite a Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &carta2.area_km2);

    printf("Digite o PIB (em bilhoes de reais, ex: 300.50): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    printf("\nSegunda carta cadastrada com sucesso!\n");


    // --- EXIBIÇÃO DAS INFORMAÇÕES DA PRIMEIRA CARTA ---
    printf("\n\n--- INFORMACOES DA PRIMEIRA CARTA (%s) ---\n", carta1.nome_cidade);
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo da Carta: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d habitantes\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area_km2);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);

    // Cálculos para a primeira carta
    if (carta1.area_km2 > 0) {
        densidade_populacional = (float)carta1.populacao / carta1.area_km2;
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional);
    } else {
        printf("Densidade Populacional: N/A (Area 0)\n");
    }

    if (carta1.populacao > 0) {
        pib_per_capita = (carta1.pib * 1000000000.0f) / carta1.populacao; // Multiplica por 1 bilhão
        printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    } else {
        printf("PIB per Capita: N/A (Populacao 0)\n");
    }


    // --- EXIBIÇÃO DAS INFORMAÇÕES DA SEGUNDA CARTA ---
    printf("\n--- INFORMACOES DA SEGUNDA CARTA (%s) ---\n", carta2.nome_cidade);
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo da Carta: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d habitantes\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area_km2);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);

    // Cálculos para a segunda carta
    if (carta2.area_km2 > 0) {
        densidade_populacional = (float)carta2.populacao / carta2.area_km2;
        printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional);
    } else {
        printf("Densidade Populacional: N/A (Area 0)\n");
    }

    if (carta2.populacao > 0) {
        pib_per_capita = (carta2.pib * 1000000000.0f) / carta2.populacao; // Multiplica por 1 bilhão
        printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    } else {
        printf("PIB per Capita: N/A (Populacao 0)\n");
    }

    return 0;
}

