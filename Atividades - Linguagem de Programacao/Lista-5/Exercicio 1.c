#include <stdio.h>
//Categorias nadadores
int main(void) {
  int x;
  printf("Qual a idade do Nadador?\n");
  scanf("%d", &x);
  if (x < 8 && x > 4) {
    printf("O atleta esta na categoria Infantil A\n");
  }
  if (8 <= x && x <=10) {
    printf("O atleta esta na categoria Infantil B\n");
  }
  if (11 <= x && x <= 13) {
    printf("O atleta esta na categoria Juvenil A\n");
  }
  if (14 <= x && x <= 17) {
    printf("O atleta esta na categoria Juvenil B\n");
  }
  if (x >= 18) {
    printf ("O Atleta esta na categoria Senior");
  }
  else {
    printf("O atleta nao se enquadra em nenhuma categoria\n");
  }
  return 0;
}