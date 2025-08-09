#include <stdio.h>
#include <string.h>
// Definido a constante para o tamanho das strings 
#define MAX_STRING_SIZE 50

// Estrutura para representar uma carta do super trunfo
typedef struct {
    char estado;                          // 'A' a 'H'
    char codigo [5];                      // EX:"S01", "R02" 4 caracteres + 1 para o terminador null '\0'
    char nome[MAX_STRING_SIZE];           // Nome da Cidade
    int populacao;                        // Numero de Habitantes 
    float Área_km2;                       // Área em Km
    float PIB;                            // Produto Interno Bruto
    int num_pontos_turisticos;            // Numero de pontos turisticos 
    float densidade_populacional;         // Novo campo
    float pib_per_capita;                 // Novo campo
    float super_poder;                    // Novo campo
} Carta;

void mostrarCarta(Carta c) {
    printf("1) Estado: %c\n", c.estado);
    printf("2) Codigo: %s\n", c.codigo);
    printf("3) Cidade: %s\n", c.nome);
    printf("4) População: %d\n", c.populacao);
    printf("5) PIB: %.2f\n", c.PIB);
    printf("6) Área: %.2f\n", c.Área_km2);
    printf("7) num_pontos_turisticos; %d\n", c.num_pontos_turisticos);
    printf("8) Densidade Populacional: %.2f\n", c.densidade_populacional);
    printf("9) PIB per Capita: %.2f\n", c.pib_per_capita);
    printf("10) super_poder: %.2f\n", c.super_poder);
}

// função para calcular super poder da carta
float calcularsuperpoder(Carta c){
    // A logica para o super poder pode variar.
    //uma abordagem simples e a de alguns atributos.

    // declara e atribui o valor a variavel local.
    // a variavel 'c' e o parametro da função, então.
    // usamos 'c.'para acessar seus atributos.
    float superPodercalculado = c.PIB + c.populacao + c.Área_km2 + c.num_pontos_turisticos + c.pib_per_capita + c.densidade_populacional;
    // Retorna ao valor calculado.

    return superPodercalculado;
    }


int main() {
    // Iniciar da Carta 'saoPaulo' com os valores corretos 
    Carta saoPaulo = {
    'S',                                             // estado (char)
    "S01",                                           // codigo (string)
    "São Paulo",                                     // nome (string)
    12325000,                                        // populacao (int)
    699.28,                                          // area_km2 (float)
    1521.11,                                         // pib (float)
    50,                                              // num_pontos_turisticos (int)
    0.0,                                             // inicializado com 0.0, será calculado a seguir
    0.0,                                             // inicializado com 0.0, será calculado a seguir
    0.0                                              // inicializado com 0.0, sera calculado a seguir 

    };

    Carta rio = {
    'R',
    "R02",
    "Rio de Janeiro",
    6748000,
    300.50,
    1200.25,
    30,
    0.0,
    0.0,
    0.0
    };

    // -- ADIÇÃO DA LOGICA DE CALCULO --
    // Calculando e atribuindo os novos valores a primeira carta
    saoPaulo.densidade_populacional = (float)saoPaulo.populacao / saoPaulo.Área_km2;
    saoPaulo.pib_per_capita = (saoPaulo.PIB * 1000000000) / (float)saoPaulo.populacao; // o PIB da carta esta em bilhões

    // Calculando e atribuindo os novos valores
    rio.densidade_populacional = (float)rio.populacao / rio.Área_km2;
    rio.pib_per_capita = (rio.PIB * 1000000000) / (float)rio.populacao;

    // Calcula e atribui o superpoder
    saoPaulo.super_poder = calcularsuperpoder(saoPaulo);
    rio.super_poder = calcularsuperpoder(rio);

    
    int escolha;

    printf("Sua carta:\n");
    mostrarCarta(saoPaulo); 

    do {
        printf("Escolha o atributo para comparar (1-Populacao, 2-PIB, 3-Área 4-num_pontos_turisticos): ");
        if (scanf("%d", &escolha) != 1) {
            while (getchar() != '\n'); // limpa buffer
            escolha = 0;
        }
    } while (escolha < 1 || escolha > 3);

    printf("\nCarta do adversário:\n");
    mostrarCarta(rio);

    // Usando ponteiros para evitar repetição
    int atributosSP[] = {saoPaulo.populacao, saoPaulo.Área_km2,saoPaulo.PIB, saoPaulo.num_pontos_turisticos};
    int atributosRJ[] = {rio.populacao, rio.Área_km2,rio.PIB, rio.num_pontos_turisticos};

    int valorSP = atributosSP[escolha - 1];
    int valorRJ = atributosRJ[escolha - 2];

    printf("\nResultado: ");
    if (valorSP > valorRJ)
        printf("Você ganhou!\n");
    else if (valorSP < valorRJ)
        printf("Você perdeu!\n");
    else
        printf("Empate!\n");

    return 0;
}


