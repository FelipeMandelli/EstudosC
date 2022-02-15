/*2.	(2,0) Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:
Número	Tipo	Cálculo
1	Geométrica	x*y*z
2	Ponderada	(x + 2*y + 3*z)/6
3	Harmônica	1/(1/x + 1/y + 1/z)
4	Aritmética	(x + y + z)/3*/
#include <stdio.h>

int main (void){
  unsigned int a, b, c, tipo;
  printf("Programa para definir a media de tres valores inteiros e positivos\n\n\n");
  printf("Digite o primeiro valor inteiro positivo\n");
  scanf("%d", &a);
  printf("Digite mais um valor inteiro positivo\n");
  scanf("%d", &b);
  printf("Digite o ultimo valor inteiro positivo\n");
  scanf("%d", &c);
   escolha: printf("\n\nQual o tipo de media a ser calcudada?\n1 para Media Geometrica\t - \t2 para Media Ponderada\n3 para Media Harmonica\t - \t4 para Media Aritmetica\n");
  scanf("%d", &tipo);
  if (tipo == 1){
    printf("\nA Media Geometrica de %d, %d e %d e: %d", a, b, c, (a*b*c));
  }
  if (tipo == 2){
    printf("\nA Media Ponderada de %d, %d e %d e: %d", a, b, c, (a + 2*b + 3*c)/6);
  }
  if (tipo == 3){
    float A = a, B = b, C = c;
    printf("\nA Media Harmonica de %d, %d e %d e: %.2f", a, b, c,  1/(1/A + 1/B + 1/C));
  }
  if (tipo == 4){
    printf("\nA Media Aritmetica de %d, %d e %d e: %d", a, b, c, (a + b + c)/3);
  }
  if (tipo != 1 && tipo != 2 && tipo != 3 && tipo != 4) {
    printf("\t\t!Escolha uma operacao valida por favor!");
    goto escolha;
  }
  return 0;
}
