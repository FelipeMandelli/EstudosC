#include <stdio.h>

int main (void) {
  int n;
  printf("Digite um valor de tres digitos:\n");
  scanf("%d", &n);
  int a = n/100; /*Centena*/
  int b = n - a*100; /* Sem a centena*/
  int c = b/10;
  int d = b - c*10;
  printf("%d %d %d", d, c, a);
  return 0;
}
//Valor ao Contrario