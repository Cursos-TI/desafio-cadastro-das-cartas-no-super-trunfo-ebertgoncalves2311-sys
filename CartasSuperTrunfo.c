#include <stdio.h> 

int main(){
//Mensagem de boas vindas

printf("Seja bem vindo ao jogo de cartas Super Trunfo!\n");

//Definindo variáveis da primeira carta

char nome_cidade1[20], codigocarta1[3], estado1[20];
int populacao1, pontos_turisticos1;
float area1, pib1;

//Definindo variáveis da segunda carta

char nome_cidade2[20], codigocarta2[3], estado2[20];
int populacao2, pontos_turisticos2;
float area2, pib2;

//Cadastro de primeira carta

printf("==Cadastro de primeira carta==\n  ");

printf("Digite o estado(A-H): ");
scanf("%s",  estado1);

printf("Digie o codigo da carta (ex A01): ");
scanf("%s",   codigocarta1);

printf("Digite o nome da cidade: ");
scanf("%s", nome_cidade1);

printf("Digite a populacao:  ");
scanf("%i",   &populacao1);

printf("Digite a area(em Km²):  ");
scanf("%f",   &area1);

printf("Digite o pib:  ");
scanf("%f",  &pib1);

printf("Digite o número de pontos turisticos:  ");
scanf("%i",   &pontos_turisticos1);

//Cadastro segunda carta

printf("==Cadastro da segunda carta carta==\n  ");

printf("Digite o estado(A-H): ");
scanf("%s",  estado2);

printf("Digie o codigo da carta (ex A01): ");
scanf("%s",   codigocarta2);

printf("Digite o nome da cidade: ");
scanf("%s", nome_cidade2);

printf("Digite a populacao:  ");
scanf("%i",   &populacao2);

printf("Digite a area(em Km²):  ");
scanf("%f",   &area2);

printf("Digite o pib:  ");
scanf("%f",  &pib2);

printf("Digite o número de pontos turisticos:  ");
scanf("%i",   &pontos_turisticos2);






}

 







    
