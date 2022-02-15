//maior número digitado.
#include <stdio.h>

  int main(void){
    int x =1;
    float y, a = -1e38;
    while (x<11){
      y = a;
      printf("diite o %d valor\n", x);
      scanf("%f", &a);
      if (a < y){
        a = y;
      }
      x = x+1;
    }
    printf("O maior valor digitado foi: %.2f", a);
  return 0;
}