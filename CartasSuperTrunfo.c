#include <stdio.h>


int main() {
   int população;
   float área;
   float pib;
   int pontosturisticos;
   char nome[20];

   printf("Digite a quantidade de habitantes: \n");
   scanf("%d", &população);

   printf("Digite o tamanho do estado: \n");
   scanf("%f", &área);

   printf("Digite o pib da cidade: \n");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turisticos: \n");
   scanf("%d", &pontosturisticos);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &nome);

   printf("Nome do Estado: %s - Área %f", nome, área);
   printf("População: %d - Pib: %f", população, pib);
   printf("Pontos Turísticos: %d", pontosturisticos);

   return 0;

}