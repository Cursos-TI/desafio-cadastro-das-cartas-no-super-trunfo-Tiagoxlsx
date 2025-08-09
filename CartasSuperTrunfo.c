#include <stdio.h>
#include <string.h>
// Definido a constante para o tamanho das strings 
#define MAX_STRING_SIZE 50

// Estrutura para representar uma carta do super trunfo
typedef struct {
    char estado;                    // 'A' a 'H'
    char codigo [5];                // EX:"S01", "R02" 4 caracteres + 1 para o terminador null '\0'
    char nome[MAX_STRING_SIZE];     // Nome da Cidade
    int populacao;                  // Numero de Habitantes 
    float Área;                       // Área em Km
    float PIB;                  // Produto Interno Bruto
    int num_pontos_turisticos;      // Numero de pontos turisticos 
} Carta;

void mostrarCarta(Carta c) {
    printf("1) Estado: %s\n", c.nome);
    printf("2) Codigo: %s\n", c.nome);
    printf("3) Cidade: %s\n", c.nome);
    printf("4) População: %d\n", c.populacao);
    printf("5) PIB: %d\n", c.PIB);
    printf("6) Área: %d\n", c.Área);
    printf("7) num_pontos_turisticos; %d\n", c.num_pontos_turisticos);
}

int main() {
    Carta saoPaulo = {'S',"SP01","São Paulo",12325000,699.28,1521,11, 50};
    Carta rio = {'R', "R02" "Rio de Janeiro", 6748000, 300.50,1200.25, 30};

    int escolha;

    printf("Sua carta:\n");
    mostrarCarta(saoPaulo);

    do {
        printf("Escolha o atributo para comparar (1-Peso, 2-Altura, 3-População): ");
        if (scanf("%d", &escolha) != 1) {
            while (getchar() != '\n'); // limpa buffer
            escolha = 0;
        }
    } while (escolha < 1 || escolha > 3);

    printf("\nCarta do adversário:\n");
    mostrarCarta(rio);

    // Usando ponteiros para evitar repetição
    int atributosSP[] = {saoPaulo.populacao, saoPaulo.Área,saoPaulo.PIB, saoPaulo.num_pontos_turisticos};
    int atributosRJ[] = {rio.populacao, rio.Área,rio.PIB, rio.num_pontos_turisticos};

    int valorSP = atributosSP[escolha - 1];
    int valorRJ = atributosRJ[escolha - 1];

    printf("\nResultado: ");
    if (valorSP > valorRJ)
        printf("Você ganhou!\n");
    else if (valorSP < valorRJ)
        printf("Você perdeu!\n");
    else
        printf("Empate!\n");

    return 0;
}


