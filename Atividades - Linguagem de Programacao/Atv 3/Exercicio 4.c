#include <stdio.h>

int main(void) {
  double x;
  printf("Digite um numero\n");
  scanf("%lf", &x);
  printf("em notacao fica: %.2e\n", x);
  return 0;
}
/*notacao cientifica*/