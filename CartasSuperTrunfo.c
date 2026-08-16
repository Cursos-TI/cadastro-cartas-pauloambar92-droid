#include <stdio.h>
int main() {

char estado[3],estado2[3];
char codigo[3],codigo2[3];
char nome[20],nome2[20];
int populacao,populacao2;
float area_km²,area_km²_2;
float PIB,PIB2;
int pontos_turismo,pontos_turismo2;
float densidade1 ,densidade2;
float pibc1,pibc2;



printf("*****CADASTO DE CARTAS DO SUPER TRUNFO*****\n ");


printf("Digite o estado:\n");
scanf("%s",estado);


printf("Digite o codigo do estado:\n");
scanf("%s", codigo);


printf("Digite o nome da cidade:\n");
scanf("%s", nome);


printf("Digite a população da cidade:\n");
scanf("%d", &populacao);


printf("Digite a area da cidade em km²:\n");
scanf("%f", &area_km²);


printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB);

printf("pontos turisticos da cidade:\n");

scanf("%d", &pontos_turismo);

densidade1 = (float)(populacao / area_km²);
pibc1 = (float)(PIB / populacao);



printf("digite o estado:\n");
scanf("%s",estado2);

printf("digite o codigo do estado:\n");
scanf("%s", codigo2);

printf("digite o nome da cidade:\n");
scanf("%s", nome2);

printf("digite a população da cidade:\n");
scanf("%d", &populacao2);

printf("digite a area da cidade em km²:\n");
scanf("%f", &area_km²_2);

printf("digite o PIB da cidade:\n");
scanf("%f", &PIB2);

printf("pontos turisticos da cidade:\n");
scanf("%d", &pontos_turismo2);

densidade2 = (float)(populacao2 / area_km²_2);
pibc2 = (float)(PIB2 / populacao2);


printf("**CARTA SUPER TRUNFO 1**:\n\n");

printf("estado: %s\n", estado);
printf("codigo do estado: %s\n", codigo);
printf("nome da cidade: %s\n", nome);
printf("população da cidade: %d\n", populacao);
printf("area da cidade em km²: %.2f\n", area_km²);
printf("PIB da cidade: %.2f\n", PIB);
printf("pontos turisticos da cidade: %d\n", pontos_turismo);
printf ("Densidade Populacional hab/km²: %.2f \n", densidade1);
printf ("PIB por Capita $: %.2f\n\n" , pibc1);

printf("**CARTA SUPER TRUNFO 2**:\n\n");

printf("estado: %s\n", estado2);
printf("codigo do estado: %s\n", codigo2);
printf("nome da cidade: %s\n", nome2);
printf("população da cidade: %d\n", populacao2);
printf("area da cidade em km²: %.2f\n", area_km²_2);
printf("PIB da cidade: %.2f\n", PIB2);
printf("pontos turisticos da cidade: %d\n", pontos_turismo2);
printf ("Densidade Populacional hab/km²: %.2f \n", densidade2);
printf ("PIB per Capita $: %.2f\n" , pibc2);



}