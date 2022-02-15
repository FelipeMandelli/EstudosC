//Ordem Crescente
#include <stdio.h>

int main(void) {
  unsigned int n, a=0;
  printf("digite um valor inteiro:");
  scanf("%d", &n);
  while (a <= n ) {
    printf("%d\t", a);
    a = a+1;
  }
  printf("\nFim do programa\n");
  return 0;
}