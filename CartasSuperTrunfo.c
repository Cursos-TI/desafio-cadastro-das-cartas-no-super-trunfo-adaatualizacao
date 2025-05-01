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
    /*Variáveis da Carta 1 e 2*/
    char estado1, estado2;
    char codCarta1, codCarta2;
    char cidade1[50], cidade2[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;


    //Criando as mensagens e capturando os dados inseridos pelo usuário
    printf("Olá Viajante! Venha se aventurar no jogo Super Trunfo. Vamos começar realizando o cadastro das cartas. \n \n \n \n ");

    //pegando Letra do estado
    printf("Digite o código do Estado (A-H): \n" );
    scanf("%c", &estado1);

    //pegando codigo da carta
    printf("Digite o código da carta: \n");
    scanf(" %c", &codCarta1);

    // Limpa o buffer do stdin antes de fgets()
    while (getchar() != '\n');

    //pegando o nome da cidade
    printf("Favor digite o nome da cidade: \n");
    fgets(cidade1, 50, stdin);

    // Remover a quebra de linha
    cidade1[strcspn(cidade1, "\n")] = '\0';

    //pegando população
    printf("Digite o valor da população: \n");
    scanf("%u", &populacao1);

    //pegando área em km2
    printf("Digite o Km2 da Area: \n");
    scanf("%f", &area1);

    // Pegando o valor do PIB da cidade
    printf("Favor digite o PIB desta cidade (em bilhões): \n");
    scanf("%f", &pib1);

    //Pegando quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Agora que realizou o cadastro da primeira carta. Vamos realizar o cadastro da segunda carta.\n \n \n \n");

    // Limpa o buffer do stdin antes de fgets()
    while (getchar() != '\n');

    //pegando Letra do estado
    printf("Digite o código do Estado (A-H): \n" );
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
    scanf("%u", &populacao2);

    //pegando área em km2
    printf("Digite o Km2 da Area: \n");
    scanf("%f", &area2);
    
    // Pegando o valor do PIB da cidade
    printf("Favor digite o PIB desta cidade(em bilhões): \n");
    scanf("%f", &pib2);

    //Pegando quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Realizando o Cálculo da Densidade Populacional[populacao1 / area1]

    densidadePopulacional1 = ((float)populacao1 / area1);
    densidadePopulacional2 = ((float)populacao2 / area2);
       

    // Realizando o Cálculo do PIB per Capita[Pib1/populacao1]
    pibPerCapita1 = (pib1 / populacao1);
    pibPerCapita2 = (pib2 / populacao2);

    // Calculando o Super Pode de cada carta
    superPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (area1 / populacao1));
    superPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (area2 / populacao2));
    

    // Exibindo os dados formatados corretamente
	printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║CARTA-1    🃏 SUPER TRUNFO                ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║ Estado: %c                             \n", estado1);
    printf("║ Código: %c0%c                          \n", estado1, codCarta1);
    printf("║ Cidade: %s                             \n", cidade1);
    printf("║ População: %u                          \n", populacao1);
    printf("║ Área: %.2f km²                         \n", area1);
    printf("║ PIB: %.2f bilhões                      \n", pib1);
    printf("║ Pontos Turísticos: %d                  \n", pontosTuristicos1);
    printf("║ Densidade Populacional: %.2f hab/Km²   \n", densidadePopulacional1);
    printf("║ Pib Per Capita: %.2f  reais            \n", pibPerCapita1);
    printf("╚══════════════════════════════════════════╝\n");
    printf("\n");
	
	
	
	printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║CARTA-2    🃏 SUPER TRUNFO                ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║ Estado: %c                             \n", estado2);
    printf("║ Código: %c0%c                          \n", estado2, codCarta2);
    printf("║ Cidade: %s                             \n", cidade2);
    printf("║ População: %u                          \n", populacao2);
    printf("║ Área: %.2f km²                         \n", area2);
    printf("║ PIB: %.2f bilhões                      \n", pib2);
    printf("║ Pontos Turísticos: %d                  \n", pontosTuristicos2);
    printf("║ Densidade Populacional: %.2f hab/Km²   \n", densidadePopulacional2);
    printf("║ Pib Per Capita: %.2f reais             \n", pibPerCapita2);
    printf("╚══════════════════════════════════════════╝\n");
    printf("\n");



    // Comparações dos atributos
    printf("\n════════════════ COMPARAÇÕES ATRIBUTOS ════════════════\n");

    printf("População: Carta %d venceu (%d)\n", 2 - (populacao1 > populacao2), populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", 2 - (area1 > area2), area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", 2 - (pib1 > pib2), pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - (pontosTuristicos1 > pontosTuristicos2), pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - (densidadePopulacional1 < densidadePopulacional2), densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - (pibPerCapita1 > pibPerCapita2), pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - (superPoder1 > superPoder2), superPoder1 > superPoder2);


    // Exibir a comparação de população
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("\nCarta 1 - %s (%c): %u\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %u\n", cidade2, estado2, populacao2);

    // Comparação de População
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate! Ambas as cartas têm a mesma população.\n");
    }


    // Menu de atributos para realizar comparação que o usuário decidir
    int opcao;
    printf("\n════════════════ ESCOLHA UM DOS ATRIBUTOS PARA COMPARAÇÃO ════════════════\n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turísticos \n");
    printf("5 - Densidade Demográfica \n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);


    // switch onde será comparado conforem decisão do usuário
    switch(opcao) {
        case 1:
            printf("Comparando População\n");
            printf("%s: %u \n", cidade1, populacao1);
            printf("%s: %u \n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparando Área\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparando PIB\n");
            printf("%s: %.3f trilhões\n", cidade1, pib1);
            printf("%s: %.3f trilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparando Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparando Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }


    // seleção do usuário para dois atributos
    printf("\n════════════════ ESCOLHA DOIS DOS ATRIBUTOS PARA COMPARAÇÃO ════════════════\n");
    int escolha1, escolha2;

    // valores das variáveis para cálculo
    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;
    float soma1 = 0, soma2 = 0;

       // Menu do primeiro atributo
       printf("Escolha o primeiro atributo:\n");
       printf("1 - População\n");
       printf("2 - Área\n");
       printf("3 - PIB\n");
       printf("4 - Densidade Demográfica\n");
       printf("5 - Pontos Turísticos\n");
       printf("Escolha: ");
       scanf("%d", &escolha1);
   
       // Menu do segundo atributo (dinâmico)
       printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
   
       switch (escolha1) {
           case 1:
               printf("2 - Área\n3 - PIB\n4 - Densidade Demográfica\n5 - Pontos Turísticos\n"); break;
           case 2:
               printf("1 - População\n3 - PIB\n4 - Densidade Demográfica\n5 - Pontos Turísticos\n"); break;
           case 3:
               printf("1 - População\n2 - Área\n4 - Densidade Demográfica\n5 - Pontos Turísticos\n"); break;
           case 4:
               printf("1 - População\n2 - Área\n3 - PIB\n5 - Pontos Turísticos\n"); break;
           case 5:
               printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Demográfica\n"); break;
           default:
               printf("Opção inválida\n");
       }
   
       printf("Escolha: ");
       scanf("%d", &escolha2);
   
       if (escolha2 == escolha1) {
           printf("\nVocê escolheu o mesmo atributo duas vezes. Tente novamente.\n");
   
           // Segunda tentativa
           printf("\nEscolha o segundo atributo:\n");
   
           switch (escolha1) {
               case 1:
                   printf("2 - Área\n3 - PIB\n4 - Densidade Demográfica\n5 - Pontos Turísticos\n"); break;
               case 2:
                   printf("1 - População\n3 - PIB\n4 - Densidade Demográfica\n5 - Pontos Turísticos\n"); break;
               case 3:
                   printf("1 - População\n2 - Área\n4 - Densidade Demográfica\n5 - Pontos Turísticos\n"); break;
               case 4:
                   printf("1 - População\n2 - Área\n3 - PIB\n5 - Pontos Turísticos\n"); break;
               case 5:
                   printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Demográfica\n"); break;
           }
   
           printf("Escolha: ");
           scanf("%d", &escolha2);
   
           if (escolha2 == escolha1) {
               printf("\nEscolha repetida novamente. O programa seguirá mesmo assim.\n");
           }
       }
   
       // Obtem os valores do primeiro atributo
       switch (escolha1) {
           case 1: valor1A = populacao1; valor2A = populacao2; break;
           case 2: valor1A = area1; valor2A = area2; break;
           case 3: valor1A = pib1; valor2A = pib2; break;
           case 4: valor1A = densidadePopulacional1; valor2A = densidadePopulacional2; break;
           case 5: valor1A = pontosTuristicos1; valor2A = pontosTuristicos2; break;
       }
   
       // Obtem os valores do segundo atributo
       switch (escolha2) {
           case 1: valor1B = populacao1; valor2B = populacao2; break;
           case 2: valor1B = area1; valor2B = area2; break;
           case 3: valor1B = pib1; valor2B = pib2; break;
           case 4: valor1B = densidadePopulacional1; valor2B = densidadePopulacional2; break;
           case 5: valor1B = pontosTuristicos1; valor2B = pontosTuristicos2; break;
       }
   
       // Ajusta a lógica da densidade demográfica (menor vence)
       if (escolha1 == 4) {
           valor1A = -valor1A;
           valor2A = -valor2A;
       }
       if (escolha2 == 4) {
           valor1B = -valor1B;
           valor2B = -valor2B;
       }
   
       // Soma os valores para decidir o vencedor
       soma1 = valor1A + valor1B;
       soma2 = valor2A + valor2B;
   
       // Exibe resultado
       printf("\n==== Resultado da Rodada ====\n");
       printf("%s x %s\n", cidade1, cidade2);
   
       printf("\nAtributo 1 (Escolha %d):\n", escolha1);
       printf("%s: %.2f | %s: %.2f\n", cidade1, (escolha1 == 4 ? -valor1A : valor1A), cidade2, (escolha1 == 4 ? -valor2A : valor2A));
   
       printf("\nAtributo 2 (Escolha %d):\n", escolha2);
       printf("%s: %.2f | %s: %.2f\n", cidade1, (escolha2 == 4 ? -valor1B : valor1B), cidade2, (escolha2 == 4 ? -valor2B : valor2B));
   
       printf("\nSoma dos Atributos:\n");
       printf("%s: %.2f\n", cidade1, soma1);
       printf("%s: %.2f\n", cidade2, soma2);
   
       // Resultado final
       printf("\n>>> Resultado final:\n");
       if (soma1 > soma2)
           printf("Vitória de %s!\n", cidade1);
       else if (soma2 > soma1)
           printf("Vitória de %s!\n", cidade2);
       else
           printf("Empate!\n");

    return 0;
}
