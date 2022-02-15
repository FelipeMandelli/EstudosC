#include <stdio.h>

  int main(void){
    int x =1;
    float y, a;
    printf("Digite o 1 valor\n");
    scanf("%f", &a);
    y = a;
    x = x+1;
    while (x<5){
      printf("diite o %d valor\n", x);
      scanf("%f", &a);
      if (a > y){
        y = a;
      }
      x = x+1;
    }
    printf("O maior valor digitado foi: %.2f", y);
  return 0;
}