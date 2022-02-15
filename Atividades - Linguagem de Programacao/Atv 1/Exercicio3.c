#include <stdio.h>
#include <math.h>

int main(void) {
  float x;
  printf("Digite um valor\n");
  scanf("%f", &x);
  printf("A raiz de %.2f é: %.2f\n", x, sqrt(x));
  printf("O cubo de %.2f é: %.2f\n", x, pow(x,3));
  return 0;
}
/*raiz e cubo*/