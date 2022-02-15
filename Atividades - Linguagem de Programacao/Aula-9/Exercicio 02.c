//Exercicios de Aula 2
#include <stdio.h>
#include <malloc.h>

int main(void) {
  int x=0;
  char *y, *inicio;
  y = (char *) (malloc(5*sizeof(char)));
  inicio = y;
  while (x<5){
    printf("Digite o %d elemento: ", x+1);
    scanf("%s", y);
    x++;
    y++;
  }
  y = inicio, x=0;
  printf("\nFrase: ");
  while (x<5){
    printf("%c", *y);
    y++;
    x++;
  }
  return 0;
}