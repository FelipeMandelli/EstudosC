#include <stdio.h>
#include <math.h>

int main (void) {
  double x;
  printf("fala um numero\n");
  scanf("%lf", &x);
if (x > 0) {
  printf("A raiz quadrada do numero e: %.2f\n", pow(x,0.5));
  printf("O quadrado do numero e: %.2f\n", pow(x,2));
}
else {
  printf("O valor deve ser maior que zero\n");
}
return 0;
}