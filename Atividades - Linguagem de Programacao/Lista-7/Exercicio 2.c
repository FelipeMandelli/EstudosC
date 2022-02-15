#include <stdio.h>

int times (int h, int m, int s){
  return h*3600 + m*60 + s;
}

int main(void) {
  int h, m, s, emsegundos;
  printf("Digite as Horas: ");
  scanf("%d", &h);
  printf("Digite os Minutos: ");
  scanf("%d", &m);
  printf("Digite os Segundos: ");
  scanf("%d", &s);
  emsegundos = times(h,m,s);
  printf("Em segundos temos: %dsegundos", emsegundos);
  return 0;
}