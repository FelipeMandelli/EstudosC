#include <stdio.h>

int main(void) {
  int x, y;
  printf("digite um numero\n");
  scanf("%d", &x);
  printf("digite outro numero\n");
  scanf("%d", &y);
  if (x > y) {
    printf("o numero %d e maior que %d\n", x, y);
    }
  else
    if (x < y) {
      printf("o numero %d e maior que %d\n", y, x);
      }
    else { 
      printf("os numeros sao iguais\n");
    }
  return 0;
}
/*maior menor igual*/