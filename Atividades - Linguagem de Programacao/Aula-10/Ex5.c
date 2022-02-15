#include <stdio.h>
struct aluno {
  int matricula;
  char nome[50];
  float P1;
  float P2;
  float P3;
};

int main(void) {
  int i;
  struct aluno a, b, c;
  printf("Digite o nome do primeiro aluno: ");
  setbuf(stdin,NULL);
  fgets(a.nome,50,stdin);
  printf("Digite a matricula do primeiro aluno: ");
  scanf("%d", &a.matricula);
  printf("Digite as 3 notas do primeiro aluno:\n");
  scanf("%f %f %f", &a.P1, &a.P2, &a.P3);
  printf("Digite o nome do segundo aluno: ");
  setbuf(stdin,NULL);
  fgets(b.nome,50,stdin);
  printf("Digite a matricula do segundo aluno: ");
  scanf("%d", &b.matricula);
  printf("Digite as 3 notas do segundo aluno:\n");
  scanf("%f %f %f", &b.P1, &b.P2, &b.P3);
  printf("Digite o nome do terceiro aluno: ");
  setbuf(stdin,NULL);
  fgets(c.nome,50,stdin);
  printf("Digite a matricula do terceiro aluno: ");
  scanf("%d", &c.matricula);
  printf("Digite as 3 notas do terceiro aluno:\n");
  scanf("%f %f %f", &c.P1, &c.P2, &c.P3);
  printf("\n\n Aluno 1:\nNome: %sMatricula: %d\nNota P1: %.2f\tNota P2: %.2f\tNota P3: %.2f\nMedia: %.2f", a.nome, a.matricula, a.P1, a.P2, a.P3, (a.P1 + a.P2 + a.P3)/3);
  printf("\n\n Aluno 2:\nNome: %sMatricula: %d\nNota P1: %.2f\tNota P2: %.2f\tNota P3: %.2f\nMedia: %.2f", b.nome, b.matricula, b.P1, b.P2, b.P3, (b.P1 + b.P2 + b.P3)/3);
  printf("\n\n Aluno 3:\nNome: %sMatricula: %d\nNota P1: %.2f\tNota P2: %.2f\tNota P3: %.2f\nMedia: %.2f", c.nome, c.matricula, c.P1, c.P2, c.P3, (c.P1 + c.P2 + c.P3)/3);
  return 0;
}