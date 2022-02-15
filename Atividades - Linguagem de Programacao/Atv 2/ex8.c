#include <stdio.h> 

int main (void) {
double h, sexo;
printf("Qual a sua altura?\n");
scanf("%lf", &h);
printf("Qual seu sexo?\n1 para masculino\n2 para feminino\n");
scanf("%lf", &sexo);
if (sexo == 1) {
  printf("Peso ideal: %.1f", (72.7*h)-58);
}
if (sexo == 2) {
  printf("Peso ideal: %.1f", (62.1*h)-44.7);
}
return 0;
}