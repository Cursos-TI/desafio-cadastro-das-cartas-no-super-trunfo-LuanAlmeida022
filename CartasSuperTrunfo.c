#include <stdio.h>

int main(){

    // Variáveis das cartas

    char estado1 [50], estado2[50];
    char código1[50], código2[50];
    char cidade1 [50], cidade2[50];
    int população1, população2;
    float área1, área2;
    float pib1, pib2;
    int turistico1, turistico2;

    //Coleta de dados da carta 1
   
    printf("Digite o estado da carta 1: \n");
    scanf("%s", estado1 );

    printf("Digite o código da carta 1: \n");
    scanf("%s", código1);
    
    printf("Digite a cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1; \n");
    scanf("%d", &população1);

    printf("Digite a área da carta 1: \n");
    scanf("%f", &área1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o números de pontos turísticos da carta 1: \n");
    scanf("%d", &turistico1);
    
  //Coleta de dados da carta 2

    printf("Digite o estado da carta 2: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", código2);
    
    printf("Digite a cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2; \n");
    scanf("%d", &população2);

    printf("Digite a área da carta 2: \n");
    scanf("%f", &área2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o números de pontos turísticos da carta 2: \n");
    scanf("%d", &turistico2);
    
  //Informações das cartas listadas

   printf("Carta 1: \n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", código1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %d\n", população1);
   printf("Área em km²: %.2f\n", área1);
   printf("PIB: %f bilhões de reais\n", pib1);
   printf("Números de pontos turísticos: %d\n", turistico1);

   printf("Carta 2: \n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", código2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", população2);
   printf("Área em km²: %.2f\n", área2);
   printf("PIB: %f bilhões de reais\n", pib2);
   printf("Números de pontos turísticos: %d\n", turistico2);

   return 0;

}