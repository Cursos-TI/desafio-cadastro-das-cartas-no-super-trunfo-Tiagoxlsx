#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int peso;
    int altura;
    int populacao;
} Carta;

void mostrarCarta(Carta c) {
    printf("Cidade: %s\n", c.nome);
    printf("1) Peso: %d\n", c.peso);
    printf("2) Altura: %d\n", c.altura);
    printf("3) População: %d\n", c.populacao);
}

int main() {
    Carta saoPaulo = {"São Paulo", 100, 760, 12300000};
    Carta rio = {"Rio de Janeiro", 95, 600, 6740000};

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
    int atributosSP[] = {saoPaulo.peso, saoPaulo.altura, saoPaulo.populacao};
    int atributosRJ[] = {rio.peso, rio.altura, rio.populacao};

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


