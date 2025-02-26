#include <stdio.h>

int main(){
    char state1[1], card_code1[3], city_name1[50], state2[1], card_code2[3], city_name2[20];
    int population1, spots1, population2, spots2; 
    float area1, pib1, area2, pib2;
    /*
    Nesta parte incial do código utilizo para definir os tipos e os nomes das variavéis. Como teremos duas cartas, repliquei os nomes e inclui o ID de cada carta, no caso 1 e 2
    */

    printf("Carta 1\n");
    printf("Digite o Estado da Carta e Pressione enter: \n");
    scanf("%s", &state1);
    printf("Digite o Código da Carta e Pressione enter: \n");
    scanf("%s", &card_code1);
    printf("Digite o Nome da Cidade e Pressione enter: \n");
    scanf("%s", &city_name1);
    printf("Digite a População da Cidade e Pressione enter: \n");
    scanf("%d", &population1);
    printf("Digite a Área da Cidade e Pressione enter: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade e Pressione enter: \n");
    scanf("%f", &pib1);
    printf("Digite a Quantidade de Pontos Turísticos da Cidade e Pressione enter: \n");
    scanf("%d", &spots1);
    /*
    Aqui solicito todas as informações da carta 1 atraves do comando scanf e salvo nas variaveis 
    */


    printf("\e[H\e[2J");
    printf("Carta 2\n");
    printf("Digite o Estado da Carta e Pressione enter: \n");
    scanf("%s", &state2);
    printf("Digite o Código da Carta e Pressione enter: \n");
    scanf("%s", &card_code2);
    printf("Digite o Nome da Cidade e Pressione enter: \n");
    scanf("%s", &city_name2);
    printf("Digite a População da Cidade e Pressione enter: \n");
    scanf("%d", &population2);
    printf("Digite a Área da Cidade e Pressione enter: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade e Pressione enter: \n");
    scanf("%f", &pib2);
    printf("Digite a Quantidade de Pontos Turísticos da Cidade e Pressione enter: \n");
    scanf("%d", &spots2);
    /*
    Aqui solicito todas as informações da carta 2 atraves do comando scanf e salvo nas variaveis 
    */

    printf("\e[H\e[2J");
    printf("Informação das Cartas\n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %s \n", state1);
    printf("Código: %s \n", card_code1);
    printf("Nome da Cidade: %s \n", city_name1);
    printf("População: %d \n", population1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", spots1);
    printf("\n");
    /*
    Aqui primeiro eu limpo o terminal por estetica, para não embaralhar as informações digitadas, das que irei apresentar ao usuario e apresento as informações da carta 1
    */

    printf("Carta 2: \n");
    printf("Estado: %s \n", state2);
    printf("Código: %s \n", card_code2);
    printf("Nome da Cidade: %s \n", city_name2);
    printf("População: %d \n", population2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", spots2);
    /*
    Aqui eu apresento as informações da carta 2
    */

}
