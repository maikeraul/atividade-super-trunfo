#include <stdio.h>
int main (){
        int numero1= 1;
        int numero2= 2;
        char codigocarta;
        char codigocarta2;
        char nomecidade[20];
        char nomecidade2[20];
        int populacao;
        int populacao2;
        float area;
        float area2;
        float pib;
        float pib2;
        int pturistico;
        int pturistico2;

        char real;

        printf("Esta será a sua primeira carta, insira os dados necessários\n");
        printf("Insira uma letra, de A à H, (representando um dos oito estados): ");
        scanf("%c", &codigocarta);

        printf("Insira o nome da cidade da sua carta: ");
        scanf("%s", &nomecidade);

        printf("Insira o número de habitantes da cidade da sua carta: ");
        scanf("%d", &populacao);

        printf("Insira a área da cidade, em quilômetros quadrados, da sua carta: ");
        scanf("%f", &area);

        printf("Insira o Produto interno bruto (PIB) de sua carta: ");
        scanf("%f", &pib);

        printf("Insira o número de pontos turisticos da cidade da sua carta: ");
        scanf("%d", &pturistico);

//segunda carta

        printf("Esta será a sua segunda carta, insira os dados necessários\n"); 
        printf("Insira uma letra, de A à H, (representando um dos oito estados): ");
        scanf("%s", &codigocarta2);

        printf("Insira o nome da cidade da sua carta: ");
        scanf("%s", &nomecidade2);

        printf("Insira o número de habitantes da cidade da sua carta: ");
        scanf("%d", &populacao2);

        printf("Insira a área da cidade, em quilômetros quadrados, da sua carta: ");
        scanf("%f", &area2);

        printf("Insira o Produto interno bruto (PIB) de sua carta: ");
        scanf("%f", &pib2);

        printf("Insira o número de pontos turisticos da cidade da sua carta: ");
        scanf("%d", &pturistico2);

        printf("Carta: %d\n", numero1);
        printf("Estado: %c\n", codigocarta);
        printf("Código: %c0%d\n", codigocarta, numero1);
        printf("Nome da Cidade: %s\n", nomecidade);
        printf("População: %d\n", populacao);
        printf("Área: %.3f Km² \n", area);
        printf("PIB: %.2f\n", pib);
        printf("Número de Pontos Turisticos: %d\n", pturistico);
//segunda carta
        printf("Carta: %d\n", numero2);
        printf("Estado: %c\n", codigocarta2);
        printf("Código: %c0%d\n", codigocarta2, numero2);
        printf("Nome da Cidade: %s\n", nomecidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.3f Km² \n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Número de Pontos Turisticos: %d\n", pturistico2);
        return 0;


}