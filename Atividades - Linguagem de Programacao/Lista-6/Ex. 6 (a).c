//qual o maior e qual o menor número digitados
#include <stdio.h>

int main(void){
  int l = 0;
  double x, y;
  while (x>0) {
    printf("Digite um numero:\n");
    scanf("%lf", &x);
    if (x > y){
      y = x;
    }
    }
  printf("O maior valor foi: %.1lf\n O menor valor foi: %.1lf", y, x);
  return 0;
}