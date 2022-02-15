#include <stdio.h>

int main(void) {
  double a, b;
  printf("digite um numero para a\n");
  scanf("%lf", &a);
  if (a == 0) {
  printf("o valor de a nao pode ser 0\n");
  }
  else {
  printf("digite um numero para b\n");
  scanf("%lf", &b);
  double result = (-b)/a;
  printf("a raiz da equacao e %.2f\n", result);
  }
  return 0;
}
/*ax+b=0*/