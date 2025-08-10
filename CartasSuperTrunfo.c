#include <stdio.h>
  
int main () {
   char estado1 ,codigo1[4] ,nome1[50];
   int populacao1, pturistico1;
   float area1, pib1;
   char estado2[4] ,codigo2[4] ,nome2[50];
   int populacao2, pturistico2;
   float area2, pib2;

   printf ("digite uma letra para seu estado: \n");
   scanf ("%c", &estado1);

   printf ("digite um codigo para sua carta: \n");
   scanf ("%s", codigo1);
    
   printf ("digite um nome para sua carta: \n");
   scanf ("%s", nome1);

   printf ("digite o numero da população: \n");
   scanf ("%d", &populacao1);

   printf ("digite a area da cidade: \n");
   scanf ("%f", &area1);

   printf ("digite o pib: \n");
   scanf ("%f", &pib1);

   printf ("digite o numero de pontos turisticos: \n");
   scanf ("%d", &pturistico1);

   printf ("carta1: \n");
   printf ("estado: %c \n", estado1);
   printf ("codigo: %s \n", codigo1);
   printf ("nome da cidade: %s \n", nome1);
   printf ("população: %d \n", populacao1);
   printf ("Área: %.2f km² \n", area1);
   printf ("PIB: %.2f \n", pib1);
   printf ("número de pontos turísticos: %d \n", pturistico1);

   printf ("agora para a carta 2 digite uma letra para seu estado: \n");
   scanf ("%s", estado2);

   printf ("digite um codigo para sua carta: \n");
   scanf ("%s", codigo2);
    
   printf ("digite um nome para sua carta: \n");
   scanf ("%s", nome2);

   printf ("digite o numero da população: \n");
   scanf ("%d", &populacao2);

   printf ("digite a area da cidade: \n");
   scanf ("%f", &area2);

   printf ("digite o pib: \n");
   scanf ("%f", &pib2);

   printf ("digite o numero de pontos turisticos: \n");
   scanf ("%d", &pturistico2);

   

   printf ("carta2: \n");
   printf ("estado: %s \n", estado2);
   printf ("codigo: %s \n", codigo2);
   printf ("nome da cidade: %s \n", nome2);
   printf ("população: %d \n", populacao2);
   printf ("Área: %.2f km² \n", area2);
   printf ("PIB: %.2f \n", pib2);
   printf ("número de pontos turísticos: %d \n", pturistico2);



return 0;
}