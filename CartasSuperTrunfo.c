#include <stdio.h>
#include <string.h>  // Inclua essa biblioteca para usar strcspn()

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("#####################################################################################################\n");
	printf("#####################################################################################################\n");
	printf("#####################################################################################################\n");
	printf("#                                                                                                   #\n");
    printf("# ███████╗ ██╗   ██╗██████╗ ███████╗██████╗   ████████╗██████╗ ██╗   ██╗███╗   ██╗███████╗ ██████╗  #\n");
    printf("# ██╔════╝ ██║   ██║██╔══██╗██╔════╝██╔══██╗  ╚══██╔══╝██╔══██╗██║   ██║████╗  ██║██╔════╝██╔═══██╗ #\n");
    printf("# ███████╗ ██║   ██║██████╔╝█████╗  ██████╔╝     ██║   ██████╔╝██║   ██║██╔██╗ ██║█████╗  ██║   ██║ #\n");
    printf("# ╚════██║ ██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗     ██║   ██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ██║   ██║ #\n");
    printf("# ███████║ ╚██████╔╝██║     ███████╗██║  ██║     ██║   ██║  ██║╚██████╔╝██║ ╚████║██║     ╚██████╔╝ #\n");
    printf("# ╚══════╝  ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝     ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝      ╚═════╝  #\n");
	printf("#                                                                                                   #\n");
    printf("#                        ██████╗  █████╗ ██╗███████╗███████╗███████╗                                #\n");
    printf("#                        ██╔══██╗██╔══██╗██║██╔════╝██╔════╝██╔════╝                                #\n");
    printf("#                        ██████╔╝███████║██║███████╗█████╗  ███████╗                                #\n");
    printf("#                        ██╔═══╝ ██╔══██║██║╚════██║██╔══╝  ╚════██║                                #\n");
    printf("#                        ██║     ██║  ██║██║███████║███████╗███████║                                #\n");
    printf("#                        ╚═╝     ╚═╝  ╚═╝╚═╝╚══════╝╚══════╝╚══════╝                                #\n");
	printf("#                                                                                                   #\n");	
	printf("#####################################################################################################\n");
	printf("#####################################################################################################\n");
	printf("#####################################################################################################\n");


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Iniciando com a declaração de variáveis.
    /*Variáveis da Carta 1 */
    char estado;
    char codCarta;
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    /*Variáveis da Carta 2 */
    char estado2;
    char codCarta2;
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    //Criando as mensagens e capturando os dados inseridos pelo usuário
    printf("Olá Viajante! Venha se aventurar no jogo Super Trunfo. Vamos começar realizando o cadastro das cartas. \n \n \n \n ");

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

    printf("Agora que realizou o cadastro da primeira carta. Vamos realizar o cadastro da segunda carta.\n \n \n \n");

    // Limpa o buffer do stdin antes de fgets()
    while (getchar() != '\n');

    //pegando Letra do estado
    printf("Digite o código do Estado: \n" );
    scanf("%c", &estado2);
    
    //pegando codigo da carta
    printf("Digite o código da carta: \n");
    scanf(" %c", &codCarta2);

    // Limpa o buffer do stdin antes de fgets()
    while (getchar() != '\n');

    //pegando o nome da cidade
    printf("Favor digite o nome da cidade: \n");
    fgets(cidade2, 50, stdin);

    // Remover a quebra de linha
    cidade2[strcspn(cidade2, "\n")] = '\0';

    //pegando população
    printf("Digite o valor da população: \n");
    scanf("%d", &populacao2);

    //pegando área em km2
    printf("Digite o Km2 da Area: \n");
    scanf("%f", &area2);
    
    // Pegando o valor do PIB da cidade
    printf("Favor digite o PIB desta cidade: \n");
    scanf("%f", &pib2);

    //Pegando quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos2);


    // Exibindo os dados formatados corretamente
	printf("\n");
    printf("╔══════════════════════════════════╗\n");
    printf("║CARTA-1    🃏 SUPER TRUNFO        ║\n");
    printf("╠══════════════════════════════════╣\n");
    printf("║ Estado: %c                       \n", estado);
    printf("║ Código: %c0%c                    \n", estado, codCarta);
    printf("║ Cidade: %s                       \n", cidade);
    printf("║ População: %d                    \n", populacao);
    printf("║ Área: %.2f km²                   \n", area);
    printf("║ PIB: %.2f bilhões                \n", pib);
    printf("║ Pontos Turísticos: %d            \n", pontosTuristicos);
    printf("╚══════════════════════════════════╝\n");
    printf("\n");
	
	
	
	printf("\n");
    printf("╔══════════════════════════════════╗\n");
    printf("║CARTA-2    🃏 SUPER TRUNFO        ║\n");
    printf("╠══════════════════════════════════╣\n");
    printf("║ Estado: %c                       \n", estado2);
    printf("║ Código: %c0%c                    \n", estado2, codCarta2);
    printf("║ Cidade: %s                       \n", cidade2);
    printf("║ População: %d                    \n", populacao2);
    printf("║ Área: %.2f km²                   \n", area2);
    printf("║ PIB: %.2f bilhões                \n", pib2);
    printf("║ Pontos Turísticos: %d            \n", pontosTuristicos2);
    printf("╚══════════════════════════════════╝\n");
    printf("\n");




    return 0;
}
