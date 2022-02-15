/*1.	(1,0) Escreva um programa que receba o valor em R$ (reais) de um prêmio e calcule os valores recebidos pelos três ganhadores, sendo que:
a.	O Primeiro Ganhador recebe 46% do total;
b.	O Segundo Ganhador recebe 32% do total;
c.	O Terceiro Ganhador recebe o restante.
*/
#include <stdio.h>

int main (void){
  float premio;
  printf("Programa para definir o valor da premiacao\n\n");
  printf("Qual o valor do premio em reais?\n");
  scanf("%f", &premio);
  printf("\n\nO Campeao recebe: %.2f reais\n\n", 0.46*premio);
  printf("O Segundo lugar recebe: %.2f reais\n\n", 0.32*premio);
  printf("O Terceiro lugar recebe: %.2f reais\n\n", 0.22*premio);
  return 0;
}
