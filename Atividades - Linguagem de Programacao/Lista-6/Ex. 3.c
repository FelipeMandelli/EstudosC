//N primeiros números naturais ímpares.
#include <stdio.h>

int main(void) {
  int n, valor = 1, i=0;
  printf("Quantos impares voce quer?\n");
  scanf("%d", &n);
  while (i<n){
    printf("%d\t", valor);
    valor = valor +2;
    i = i+1;
  }
  return 0;
}