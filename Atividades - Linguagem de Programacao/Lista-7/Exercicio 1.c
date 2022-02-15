// Volume de Cilindro
#include <stdio.h>
#define pi (3.1414592)

int Cil (float h, float r){
  float v = pi * r * r * h;
  return v;
}

int main (void){
  float h, r, vol;
  printf("Digite o raio da base:\n");
  scanf("%f", &r);
  printf("Digite o valor da altura:\n");
  scanf("%f", &h);
  vol = Cil(h, r);
  printf("O volume e: %.2f", vol);
  return 0;
}