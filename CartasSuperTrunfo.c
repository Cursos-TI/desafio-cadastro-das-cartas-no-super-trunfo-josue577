#include <stdio.h>
  
int main () {
   char estado1 ,codigo1[4] ,nome1[50];
   int pturistico1;
   unsigned long int populacao1;
   float area1, pib1, pibpc1, dp1, superpoder1;
   char estado2[4] ,codigo2[4] ,nome2[50];
   int populacao2, pturistico2;
   float area2, pib2, pibpc2, dp2, superpoder2;

   int r1, r2, r3, r4, r5, r6, r7;
   

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

   dp1 = (float) area1 / populacao1;
   pibpc1 = (float) pib1 / populacao1;
   superpoder1 = (float) area1 + pib1 + populacao1 + pturistico1 + pibpc1 - dp1;

   printf ("carta1: \n");
   printf ("estado: %c \n", estado1);
   printf ("codigo: %s \n", codigo1);
   printf ("nome da cidade: %s \n", nome1);
   printf ("população: %u \n", populacao1);
   printf ("Área: %.2f km² \n", area1);
   printf ("PIB: %.2f \n", pib1);
   printf ("número de pontos turísticos: %d \n", pturistico1);
   printf ("Densidade Populacional: %.2f \n", dp1);
   printf ("PIB per Capita: %.2f \n", pibpc1);
   printf ("super poder da carta: %.2f \n", superpoder1);

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

   dp2 = (float) area2 / populacao2;
   pibpc2 = (float) pib2 / populacao2;
   superpoder2 = (float) area2 + pib2 + populacao2 + pturistico2 + pibpc2 - dp2;

   printf ("carta2: \n");
   printf ("estado: %s \n", estado2);
   printf ("codigo: %s \n", codigo2);
   printf ("nome da cidade: %s \n", nome2);
   printf ("população: %d \n", populacao2);
   printf ("Área: %.2f km² \n", area2);
   printf ("PIB: %.2f \n", pib2);
   printf ("número de pontos turísticos: %d \n", pturistico2);
   printf ("Densidade Populacional: %.2f \n", dp2);
   printf ("PIB per Capita: %.2f \n", pibpc2);
   printf ("Super poder da carta: %.2f \n", superpoder2);

   r1 = populacao1 > populacao2 ;
   r2 = area1 > area2 ;
   r3 = pib1 > pib2 ;
   r4 = pturistico1 > pturistico2 ;
   r5 = dp1 > dp2 ;
   r6 = pibpc1 > pibpc2 ;
   r7 = superpoder1 > superpoder2 ;

   printf ("1=carta1 0=carta2 \n");
   printf ("População: %d venceu \n", r1);
   printf ("Área: %d venceu \n", r2);
   printf ("PIB: %d venceu \n", r3);
   printf ("Pontos Turísticos: %d venceu \n", r4);
   printf ("Dencidade populacional: %d venceu \n", r5);
   printf ("PIB per capita: %d venceu \n", r6);
   printf ("Super Poder: %d venceu \n", r7);


return 0;
}