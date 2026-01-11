#include <stdio.h>

int main(){
    //Variaveis carta01

    char estado01;
    char codigo01 [4];
    char nomedacidade01 [20];
    int populacao01;
    float area01;
    float pib01;
    int n_pontostur01;

    //Variaveis carta02

    char estado02;
    char codigo02 [4];
    char nomedacidade02 [20];
    int populacao02;
    float area02;
    float pib02;
    int n_pontostur02;

    // Preenchendo os valores das variáres para carta 01

    puts("Preencha os dados da primeira carta!\n");
    printf("Letra que referencia o Estado que a carta pertence(APENAS LETRA DE A-H):");
    scanf("%1s", &estado01);
    printf("Código da carta:");
    scanf("%3s", codigo01);
    while(getchar() != '\n');
    printf("Nome da Cidade:");
    fgets(nomedacidade01, sizeof(nomedacidade01), stdin);
    nomedacidade01[strcspn(nomedacidade01, "\n")] = '\0';
    printf("População:");
    scanf("%d", &populacao01);
    printf("Área(km2):");
    scanf("%f", &area01);
    printf("PIB(bilhões):");
    scanf("%f", &pib01);
    printf("Quantidades de pontos turisticos:");
    scanf(" %d", &n_pontostur01);
    printf("\n");
    printf("DADOS DA PRIMEIRA CARTA PREENCHIDOS COM SUCESSO\n\n");

    // Preenchendo os valores das variáres para carta 02

    puts("Preencha os dados da segunda carta:\n");
    printf("Letra que referencia o Estado que a carta pertenca(APENAS LETRA DE A-H):");
    scanf(" %c", &estado02);
    printf("Código da carta:");
    scanf("%s", &codigo02);
    while(getchar() != '\n');
    printf("Nome da Cidade:");
    fgets(nomedacidade02, sizeof(nomedacidade02), stdin);
    nomedacidade02[strcspn(nomedacidade02, "\n")] = '\0';
    printf("População:");
    scanf("%d", &populacao02);
    printf("Área(km2):");
    scanf("%f", &area02);
    printf("PIB(bilhões):");
    scanf("%f", &pib02);
    printf("Quantidades de pontos turisticos:");
    scanf("%d", &n_pontostur02);
    printf("\n");
    printf("DADOS DA SEGUNDA CARTA PREENCHIDOS COM SUCESSO\n\n");

    //Mostrando dados das cartas

    //Carta01

    printf("===========================================\n");
    printf("\tDADOS DA PRIMEIRA CARTA:\n");
    printf("===========================================\n");
    printf("Estado: %35c\n", estado01);
    printf("Código da carta: %26s\n", codigo01);
    printf("Nome da Cidade: %28s\n", nomedacidade01);
    printf("População: %32d\n", populacao01);
    printf("Área(km2): %32.2f\n", area01);
    printf("PIB(bilhões): %29.2f\n", pib01);
    printf("Quantidades de pontos turisticos: %9d\n", n_pontostur01);
    printf("*******************************************\n\n\n");

    //Carta02

    printf("===========================================\n");
    printf("\tDADOS DA SEGUNDA CARTA:\n");
    printf("===========================================\n");
    printf("Estado: %35c\n", estado02);
    printf("Código da carta: %26s\n", codigo02);
    printf("Nome da Cidade: %27s\n", nomedacidade02);
    printf("População: %32d\n", populacao02);
    printf("Área(km2): %32.2f\n", area02);
    printf("PIB(bilhões): %29.2f\n", pib02);
    printf("Quantidades de pontos turisticos: %9d\n", n_pontostur02);
    printf("*******************************************\n\n\n");


return 0;


}