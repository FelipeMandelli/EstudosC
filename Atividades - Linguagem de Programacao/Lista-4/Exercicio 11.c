#include <stdio.h>
#include <math.h>

int main(void) {
  double l, c;
printf("Largura:");
scanf("%lf", &l);
printf("Comprimento:");
scanf("%lf", &c);
double l2 = pow(l,2), c2 = pow(c,2);
printf("Diagonal: %.2f", sqrt(l2 + c2));
return 0;
}
/*Diagonal*/