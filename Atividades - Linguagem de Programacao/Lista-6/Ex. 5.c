//soma dos primeiros 50 números pares
#include <stdio.h>

int main(void) {
  int x, y = 0, z=0;
  while (z < 50){
    y = y+2;
    z = z+1;
    x = x + y;
    //printf("%d" , y);
  }
  printf("Os 50 primeiros pares somam: %d",x);
  return 0;
}