//Ordem Decrescente
#include <stdio.h>

int main(void) {
  int n;
  printf("Digite um valor: ");
  scanf("%d", &n);
  while (n>=0) {
    printf("%d\t", n);
    n=n-1;
  }
  printf("\nFim do Programa\n");
  return 0;
}