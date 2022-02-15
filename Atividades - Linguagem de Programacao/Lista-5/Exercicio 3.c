#include <stdio.h>

int main(void) {
  double a, b, oper;
  printf("bem-vindo\n");
  printf("digite um numero\n");
  scanf("%lf", &a);
  printf("Qual a operacao?\n");
  printf("1 para soma\n2 para subtracao\n3 para multiplicacao\n4 para divisao\n");
  scanf("%lf", &oper) ;
  if (oper == 1)
  {
  printf("somar com:\n");
  scanf("%lf", &b);
  double result = a + b;
  printf("resultado: %.2f\n", result);
  }
  else
    if (oper == 2)
    {
    printf("Subtrair:\n");
    scanf("%lf", &b);
    double result = a - b;
    printf("resultado: %.2f\n", result);
    }
    else
      if (oper == 3)
      {
        printf("multiplicar por:\n");
        scanf("%lf", &b);
        double result = a * b;
        printf("resultado: %.2f\n", result);
      }
      else
        if (oper == 4)
        {
          printf("dividir por:\n");
          scanf("%lf", &b);
          double result = a / b;
          printf("resultado: %.2f\n", result);
        }

  return 0;
}
//Calculadora