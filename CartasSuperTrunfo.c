#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
printf("--- Cadastro de Nova cara de Super trunfo ---\n");

printf("Digite o Estado (apenas com uma letra,ex;S para SP):");
scanf("%s",&novacarta.estado); // Espaço antes de %c para consumir o newline  residual

printf("Digite o Codigo da Carta (ex; SP01): ");
scanf("%s", novacarta.codigo_carta); // Lê uma string até um espaço

printf("Digite o Nome da Cidade:");
// Usar fgets para ler o nome da cidade com espaços
// Limpar o buffer de entrada antes de usar fgets
while (gechar() !='\n'); // consome qualquer caractere restante no buffer, incluindo o '\n'
fgets(novacarta.nome_cidade,sizef(novaCarta.nome_cicade),stdin);
// Remover o caractere newline '\n' que fgetspode incluir
novaCarta.nome-cidade[strcspn(novaCarta.nome_cidade),"\n"] = 0;

printf("Digete a Populacao:");
scanf("%d", &novaCarta.populacao);

printf("Digite a area em Km:");
scanf("%f", &novaCarta.area_km2);

printf("Digite o PIb (em bilhoes, ex: 763,8):");
scanf("%f", &novaCarta.pib);

printf("Digite o numero de Pontos Turisticos: ");
scanf("%d", &novaCarta.num_pontos_turisticos);

printf("\nCarta cadastrada com sucesso!\n");

// 3, Exibição dos Dados das Cartas:
// Sugestão: Utilize o função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("\n--- Informacoes da Carta Cadastrada ---\n");
printf("Estado: %c\n", novaCarta.estado);
printf("Codigo da Carta:%s\n", novaCarta.codigo_carta);
printf("Nome da Carta: %s\n", novaCarta.nome_cidade);
printf("Populacai; %d habitantes\n",novaCarta.populacao);
printf("Area: %.2fkm2\n", novaCarta.area_km2);
printf("Pib: %.2f bilhoes (BRL)\n", novaCarta.pib);
printf("Pontos Turisticos: %d\n, novaCarta.num_pontos_turisticos");


    return 0;
}
