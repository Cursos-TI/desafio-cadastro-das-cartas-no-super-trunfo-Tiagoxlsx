#include <stdio.h>   // Para funções de entrada/saída como printf e scanf
#include <string.h>  // Para funções de manipulação de strings como strcpy

// Definição da estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;                // Ex: 'S' para SP, 'R' para RJ
    char codigo_carta[5];       // Ex: "SP01", "RJ02" (Tamanho 5 para 4 caracteres + '\0' terminador)
    char nome_cidade[50];       // Ex: "São Paulo", "Rio de Janeiro"
    int populacao;              // Número inteiro de habitantes
    float area_km2;             // Área em quilômetros quadrados
    float pib;                  // Produto Interno Bruto (em alguma unidade, talvez milhões/bilhões)
    int num_pontos_turisticos;  // Número de pontos turísticos
} CartaSuperTrunfo;


int main() {
    // Declaramos duas variáveis do tipo CartaSuperTrunfo
    CartaSuperTrunfo carta1;
    CartaSuperTrunfo carta2;

    // --- CADASTRO DA PRIMEIRA CARTA ---
    printf("--- Cadastro da PRIMEIRA Carta de Super Trunfo ---\n");

    printf("Digite o Estado (apenas uma letra, ex: S para SP): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o Codigo da Carta (ex: SP01): ");
    scanf("%s", carta1.codigo_carta);

    printf("Digite o Nome da Cidade: ");
    while (getchar() != '\n'); // Limpa o buffer antes do fgets
    fgets(carta1.nome_cidade, sizeof(carta1.nome_cidade), stdin);
    carta1.nome_cidade[strcspn(carta1.nome_cidade, "\n")] = 0;

    printf("Digite a Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &carta1.area_km2);

    printf("Digite o PIB (em bilhoes, ex: 763.8): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    printf("\nPrimeira carta cadastrada com sucesso!\n\n");


    // --- CADASTRO DA SEGUNDA CARTA ---
    printf("--- Cadastro da SEGUNDA Carta de Super Trunfo ---\n");

    printf("Digite o Estado (apenas uma letra, ex: S para SP): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Codigo da Carta (ex: RJ01): ");
    scanf("%s", carta2.codigo_carta);

    printf("Digite o Nome da Cidade: ");
    while (getchar() != '\n'); // Limpa o buffer antes do fgets
    fgets(carta2.nome_cidade, sizeof(carta2.nome_cidade), stdin);
    carta2.nome_cidade[strcspn(carta2.nome_cidade, "\n")] = 0;

    printf("Digite a Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &carta2.area_km2);

    printf("Digite o PIB (em bilhoes, ex: 370.0): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    printf("\nSegunda carta cadastrada com sucesso!\n");


    // --- EXIBIÇÃO DAS INFORMAÇÕES DAS CARTAS ---
    printf("\n\n--- INFORMACOES DA PRIMEIRA CARTA ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo da Carta: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d habitantes\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area_km2);
    printf("PIB: %.2f bilhoes (BRL)\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);

    printf("\n--- INFORMACOES DA SEGUNDA CARTA ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo da Carta: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d habitantes\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area_km2);
    printf("PIB: %.2f bilhoes (BRL)\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);


    return 0;
}
