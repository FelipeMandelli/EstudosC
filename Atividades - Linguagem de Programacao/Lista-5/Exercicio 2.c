#include <stdio.h>
int main (void){
  int a;
  double p;
  printf("Digite sua altura em centimetros:");
  scanf("%d", &a);
  printf("Qual o seu peso em kg?\n");
  scanf("%lf", &p);
  if (a<120) {
    if (p <= 60){
    printf("Sua categoria e: A");
    }
    if (p > 60 && p <= 90){
    printf("Sua categoria e: D");
    }
    if (p>90) {printf("Sua categoria e: G");
    }
  }
  if (a>=120 && a<=170) {
    if (p <= 60)
    printf("Sua categoria e: B");
    if (p > 60 && p <= 90)
    printf("Sua categoria e: E");
    if (p>90) { printf("Sua categoria e: H");
    }
  }
  if (a>170) {
    if (p <= 60)
    printf("Sua categoria e: C");
    if (p > 60 && p <= 90)
    printf("Sua categoria e: F");
    if (p>90) { printf("Sua categoria e: I");
    }
  }
  return 0;
}