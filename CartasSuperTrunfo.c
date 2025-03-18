#include <stdio.h>
#include <string.h>  // Inclua essa biblioteca para usar strcspn()

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Iniciando com a declaração de variáveis.
    char estado;
    char codCarta;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;


    //Criando as mensagens e capturando os dados inseridos pelo usuário

    //pegando Letra do estado
    printf("Digite o código do Estado: \n" );
    scanf("%c", &estado);

    //pegando codigo da carta
    printf("Digite o código da carta: \n");
    scanf(" %c", &codCarta);

    // Limpa o buffer do stdin antes de fgets()
    while (getchar() != '\n');

    //pegando o nome da cidade
    printf("Favor digite o nome da cidade: \n");
    fgets(cidade, 50, stdin);

    // Remover a quebra de linha
    cidade[strcspn(cidade, "\n")] = '\0';

    //pegando população
    printf("Digite o valor da população: \n");
    scanf("%d", &populacao);

    //pegando área em km2
    printf("Digite o Km2 da Area: \n");
    scanf("%f", &area);

    // Pegando o valor do PIB da cidade
    printf("Favor digite o PIB desta cidade: \n");
    scanf("%f", &pib);

    //Pegando quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos);

    // Exibindo os dados formatados corretamente
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c0%c  \n", estado, codCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);




    return 0;
}
