#include <stdio.h>

int main(){

    // Variáveis das cartas

    char estado1 [50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1 [50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, densidade1, densidade2, cap1, cap2, pib1, pib2;
    int turistico1, turistico2;

    //Coleta de dados da carta 1
   
    printf("Digite o estado da carta 1: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo1);
    
    printf("Digite a cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1; \n");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &turistico1);
    
  //Calculo da Densidade Populacional e do  PIB per Capita carta 1
    densidade1= (float) populacao1 / area1;
    cap1= pib1 / populacao1;

  //Coleta de dados da carta 2

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo2);
    
    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2; \n");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &turistico2);
    
  //Calculo da Densidade Populacional e do  PIB per Capita carta 2
    densidade2= (float) populacao2 / area2;
    cap2= pib2 / populacao2;


  //Informações das cartas listadas

   printf("Carta 1: \n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área em km²: %.2f\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Números de pontos turísticos: %d\n", turistico1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
   printf("PIB per Capita: %.2f reais\n", cap1);

   printf("Carta 2: \n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área em km²: %.2f\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Números de pontos turísticos: %d\n", turistico2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf("PIB per Capita: %.2f reais\n", cap2);
 
 
 
   return 0;

}