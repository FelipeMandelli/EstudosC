//qual o maior e qual o menor número digitados
#include <stdio.h>

int main(void){
  int l = 0;
  double x, y, z = 1e38;
  while (x>0) {
    printf("Digite um numero:\n");
    scanf("%lf", &x);
    if (x > y){
      y = x;
    }
    if (x < z && x > 0){
      z = x;
    }
    }
  printf("O maior valor foi: %.1lf\n O menor valor foi: %.1lf", y, z);
  return 0;
}