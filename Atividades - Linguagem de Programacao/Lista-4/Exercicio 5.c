#include <stdio.h>
#define ano (2021)
int main(void) {
 int idade;
 printf("Qual a sua idade?\n");
 scanf("%d", &idade);
 printf("Voce nasceu em %d", ano - idade);
}
//Ano de Nascimento