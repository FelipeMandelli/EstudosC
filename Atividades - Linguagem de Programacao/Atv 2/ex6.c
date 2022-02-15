#include <stdio.h>

int main (void) {
double sal, emp;
printf("qual o seu salario?\n");
scanf("%lf", &sal);
printf("qual o emprestimo?\n");
scanf("%lf", &emp);
if ( emp <= 0.2*sal ) {
 printf("Emprestimo concedido\n");
}
else {
  printf("Emprestimo negado\n");
}
  return 0;
}