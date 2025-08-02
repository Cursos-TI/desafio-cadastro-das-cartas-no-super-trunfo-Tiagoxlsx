#include <stdio.h>   // Para funções de entrada/saída como printf e scanf
#include <string.h>  // Para funções de manipulação de strings como strcpy

// Definição da estrutura para representar uma carta do Super Trunfo
// ESTA PARTE É FUNDAMENTAL E DEVE ESTAR AQUI FORA DE QUALQUER FUNÇÃO,
// GERALMENTE NO INÍCIO DO ARQUIVO OU EM UM HEADER (.h) INCLUÍDO.
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
    // 1. Definição Variáveis:
    // Sugestão: Defina variáveis separadas para cada atributo da cidade
    // Exemplo de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // A variável 'novaCarta' DEVE SER DECLARADA AQUI, ANTES DE SER USADA.
    CartaSuperTrunfo novaCarta;


    printf("--- Cadastro de Nova Carta de Super Trunfo ---\n"); // Linha 9 no seu print

    printf("Digite o Estado (apenas com uma letra, ex: S para SP): "); // Linha 11 no seu print
    // + scanf(" %c", &novaCarta.estado); // Espaco antes de %c para consumir o newline
    // Correção: a linha de comentário acima está atrapalhando o scanf.
    scanf(" %c", &novaCarta.estado); // Linha 13 no seu print

    printf("Digite o Codigo da Carta (ex: SP01): "); // Linha 14 no seu print
    // scanf("%s", &novaCarta.codigo_carta); // %s lê uma string ate um espaco // Linha 16 no seu print
    // Correção: O & antes de novaCarta.codigo_carta está errado para arrays de char com %s.
    // %s já espera um ponteiro para o início do array.
    scanf("%s", novaCarta.codigo_carta);

    printf("Digite o Nome da Cidade: "); // Linha 18 no seu print
    // Usar fgets para ler o nome da cidade com espacos
    // Limpar o buffer de entrada antes de usar fgets
    while (getchar() != '\n'); // Consome qualquer caractere restante no buffer, incluindo o '\n'
    // fgets(novaCarta.nome_cidade, sizeof(novaCarta.nome_cidade), stdin); // Linha 22 no seu print
    // Correção: novaCarta.nome_cidade ao invés de cidade
    fgets(novaCarta.nome_cidade, sizeof(novaCarta.nome_cidade), stdin);
    // Remover o caractere newline '\n' que fgets pode incluir
    novaCarta.nome_cidade[strcspn(novaCarta.nome_cidade, "\n")] = 0;

    // Adicione o restante das entradas (População, Área, PIB, Pontos Turísticos)
    // Se não adicionar, você terá erros de "não está definido" para esses campos também.
    printf("Digite a Populacao: ");
    scanf("%d", &novaCarta.populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &novaCarta.area_km2);

    printf("Digite o PIB (em bilhoes, ex: 763.8): ");
    scanf("%f", &novaCarta.pib);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &novaCarta.num_pontos_turisticos);

    printf("\nCarta cadastrada com sucesso!\n");

    // 3. Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Informacoes da Carta Cadastrada ---\n");
    printf("Estado: %c\n", novaCarta.estado);
    printf("Codigo da Carta: %s\n", novaCarta.codigo_carta);
    printf("Nome da Cidade: %s\n", novaCarta.nome_cidade);
    printf("Populacao: %d habitantes\n", novaCarta.populacao);
    printf("Area: %.2f km2\n", novaCarta.area_km2);
    printf("PIB: %.2f bilhoes (BRL)\n", novaCarta.pib);
    printf("Pontos Turisticos: %d\n", novaCarta.num_pontos_turisticos);


    return 0;
}
