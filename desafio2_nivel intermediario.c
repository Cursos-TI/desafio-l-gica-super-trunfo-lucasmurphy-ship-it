#include <stdio.h>
int main()
{
    char nome[30];
    char estado1, estado2;
    char codigo_carta1[4], codigo_carta2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // 2 Variáveis novas para os atributos que serão calculados
    float densidade1, densidade2;
    float pib_percapta1, pib_percapta2;

    printf("Para iniciarmos o jogo, quero primeiro conhecer você. Qual seu nome completo? \n");
    scanf(" %29[^\n]", nome);
    printf("Maravilha \033[1;31m%s\033[0m! Bora iniciar o jogo, boa sorte!\n", nome);

    // Cadastro da primeira carta
    printf("Digite o código da carta. \n");
    scanf(" %s", codigo_carta1);

    printf("Digite o Estado. \n");
    scanf(" %c", &estado1);

    printf("Digite o nome da cidade. \n");
    scanf(" %s", cidade1);

    printf("Digite a população. \n");
    scanf(" %d", &populacao1);

    printf("Digite a área em Km2. \n");
    scanf(" %f", &area1);

    printf("Digite o PIB atual. \n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos. \n");
    scanf(" %d", &pontos1);
    printf("\nPerfeito, \033[1;31m%s\033[0m, concluimos a primeira carta, agora vamos para a próxima...", nome);

    // Os valores \033[1;31m%s\033[0m colocados em volta da máscara, são para aplicar a cor vermelha e negrito
    // Como o jogador é o mesmo, não faremos o primeiro bloco de perguntas
    // Segue cadastro da segunda carta:

    printf("Digite o código da segunda carta. \n");
    scanf(" %s", codigo_carta2);

    printf("Digite o Estado. \n");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade. \n");
    scanf(" %s", cidade2);

    printf("Digite a população. \n");
    scanf(" %d", &populacao2);

    printf("Digite a área em Km2. \n");
    scanf(" %f", &area2);

    printf("Digite o PIB atual. \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos. \n");
    scanf(" %d", &pontos2);
    printf("Prontinho, concluímos! Agora veremos como ficaram de forma estruturada \n");

    printf("\n   CARTAS CADASTRADAS   \n");

    // Novos cálculos
    // Cálculo da densidade. Passando populacao para float para não dar erro no cálculo
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Cálculo da renda Per Capta.
    pib_percapta1 = pib1 / populacao1;
    pib_percapta2 = pib2 / populacao2;

    printf("\nCARTAS CADASTRADAS\n");

    // Primeira carta cor: ciano

    printf("\n    \033[1;36mPRIMEIRA CARTA\033[0m   \n");

    printf("\033[1mEstado:\033[0m %c\n", estado1);
    printf("\033[1mCódigo da Carta:\033[0m %s\n", codigo_carta1);
    printf("\033[1mNome da Cidade:\033[0m %s\n", cidade1);
    printf("\033[1mPopulação:\033[0m %d\n", populacao1);
    printf("\033[1mÁrea:\033[0m %.2f km²\n", area1);
    printf("\033[1mPIB:\033[0m %.2f\n", pib1);
    printf("\033[1mPontos Turísticos:\033[0m %d\n", pontos1);
    printf("\033[1mDensidade Populacional:\033[0m %.2f hab/km2 \n, densidade1");
    printf("\033[1mPIB per Capta:\033[0m %.2f\n", pib_percapta1);

    // texto em roxo
    printf("\n--- \033[1;35mSEGUNDA CARTA\033[0m ---\n");

    printf("\033[1mEstado:\033[0m %c\n", estado2);
    printf("\033[1mCódigo da Carta:\033[0m %s\n", codigo_carta2);
    printf("\033[1mNome da Cidade:\033[0m %s\n", cidade2);
    printf("\033[1mPopulação:\033[0m %d\n", populacao2);
    printf("\033[1mÁrea:\033[0m %.2f km²\n", area2);
    printf("\033[1mPIB:\033[0m %.2f\n", pib2);
    printf("\033[1mPontos Turísticos:\033[0m %d\n", pontos2);
    printf("\033[1mDensidade Populacional:\033[0m %.2f hab/km2 \n, densidade2");
    printf("\033[1mPIB per Capta:\033[0m %.2f\n", pib_percapta2);

    // Comparação 1: Densidadede populacional
    // O menor valor vence esse quesito

    printf("\n==================================================\n");
    printf("\033[1;33mCOMPARAÇÃO 1: DENSIDADE POPULACIONAL (Menor vence)\033[0m\n");
    printf("==================================================\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
    printf("--------------------------------------------------\n");

    if (densidade1 < densidade2)
    {
        printf("Resultado: \033[1;32mCarta 1 (%s) venceu por menor densidade!\033[0m\n", cidade1);
    }
    else if (densidade2 < densidade1)
    {
        printf("Resultado: \033[1;32mCarta 2 (%s) venceu por menor densidade!\033[0m\n", cidade2);
    }
    else
    {
        printf("Resultado: \033[1;33mEmpate na Densidade Populacional!\033[0m\n");
    }

    // ================= COMPARAÇÃO 2: PIB PER CAPITA =================
    // Regra: O MAIOR VALOR VENCE!

    printf("\n==========================================================\n");
    printf("\033[1;33mCOMPARAÇÃO 2: PIB PER CAPITA (Maior vence)\033[0m\n");
    printf("=============================================================\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, pib_percapta1);
    printf("Carta 2 - %s: %.2f\n", cidade2, pib_percapta2);
    printf("--------------------------------------------------\n");

    if (pib_percapta1 > pib_percapta2)
    {
        printf("Resultado: \033[1;32mCarta 1 (%s) venceu no PIB per Capita!\033[0m\n", cidade1);
    }
    else if (pib_percapta2 > pib_percapta1)
    {
        printf("Resultado: \033[1;32mCarta 2 (%s) venceu no PIB per Capita!\033[0m\n", cidade2);
    }
    else
    {
        printf("Resultado: \033[1;33mEmpate no PIB per Capita!\033[0m\n");
    }

    printf("\nObrigado pela participação, até a próxima \033[1;31m%s\033[0m ", nome);

    return 0;
}
