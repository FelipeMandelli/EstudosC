// Triangulo de Floyd
#include <stdio.h>

int main (void){
  int linha = 1, valor = 1, n, porlinha, floyd = 0;
  printf("Digite o numero de linhas:");
  scanf("%d", &n);
  printf("\nTriangulo de Floyd com %d linhas:\n", n);
  while (linha <= n){
    floyd++, porlinha = 1;
    while (porlinha <= floyd){
      printf("%d\t", valor++);
      porlinha++;
    } 
    printf("\n");
    linha++;
  }
  return 0;
}