#include <stdio.h>

int main() {

    

    char carta1estado [10];
    char carta1codigo [4];
    char carta1nome [10];
    int carta1populacao;
    float carta1area;
    float carta1densidadepop;
    float carta1pib;
    float carta1pibpercapta;
    int  carta1turismo;

    char carta2estado [10];
    char carta2codigo [4];
    char carta2nome [10];
    int  carta2populacao;
    float carta2area;
    float carta2densidadepop;
    float carta2pib;
    float carta2pibpercapta;
    int  carta2turismo;

    carta1densidadepop = (float) (carta1populacao / carta1area);
    carta1pibpercapta = (float) (carta1pib / carta1populacao);

    carta2densidadepop = (float) (carta2populacao / carta2area);
    carta2pibpercapta = (float) (carta2pib / carta2populacao);

    printf("      DESAFIO SUPER TRUNFO \n");
    printf("   CARTA 1 \n");

    printf("Digite o Estado descrito na sua carta: \n");
    scanf("%s", carta1estado);
    
    printf("Digite o Código da sua carta: \n ");
    scanf("%s", carta1codigo);

    printf("Digite o nome da cidade descrita na carta: \n");
    scanf("%s", carta1nome);

    printf("Digite os dados da população descrito na carta: \n");
    scanf("%d", &carta1populacao);

    printf("Digite a área descrita na carta: \n");
    scanf("%f", &carta1area);

    printf("Digite o PIB descrito na carta: \n");
    scanf("%f", &carta1pib);

    printf("Digite o número de pontos turísticos descrito na carta: \n");
    scanf("%d", &carta1turismo);  
    
    

    printf("   CARTA 2 \n");

    printf("Digite o Estado descrito na sua carta: \n");
    scanf("%s", carta2estado);
    
    printf("Digite o Código da sua carta: \n ");
    scanf("%s", carta2codigo);

    printf("Digite o nome da cidade descrita na carta: \n");
    scanf("%s", carta2nome);

    printf("Digite os dados da população descrito na carta: \n");
    scanf("%d", &carta2populacao);

    printf("Digite a área descrita na carta: \n");
    scanf("%f", &carta2area);

    printf("Digite o PIB descrito na carta: \n");
    scanf("%.f", &carta2pib);

    printf("Digite o número de pontos turísticos descrito na carta: \n");
    scanf("%d", &carta2turismo);
    
    printf("    Dados das cartas 1 e 2: \n");
    printf("   CARTA1 \n");

    printf("Estado: %s \n", carta1estado);
    printf("Código: %s \n", carta1codigo);
    printf("Cidade: %s \n", carta1nome);
    printf("População: %f \n", carta1populacao);
    printf("Área Total: %.2fkm²\n" , carta1area);
    printf("PIB: %.2f bilhões de reais\n" , carta1pib);
    printf("Locais Turísticos: %d \n" , carta1turismo);
    printf("Densidade Pupulacional: %.2f por km²\n", carta1densidadepop);
    printf("O Pib per capto é: %.2f reais \n", carta1pibpercapta);

    printf("   CARTA2 \n");

    printf("Estado: %s \n", carta2estado);
    printf("Código: %s \n", carta2codigo);
    printf("Cidade: %s \n", carta2nome);
    printf("População: %f \n", carta2populacao);
    printf("Área Total: %.2fkm² \n" , carta2area);
    printf("PIB: %.2f bilhões de reais\n" , carta2pib);
    printf("Locais Turísticos: %d \n" , carta2turismo);
    printf("Densidade Pupulacional: %.2f por km²\n", carta2densidadepop);
    printf("O Pib per capto é:  %.2f reais \n", carta2pibpercapta);
    







   return 0;








    }

