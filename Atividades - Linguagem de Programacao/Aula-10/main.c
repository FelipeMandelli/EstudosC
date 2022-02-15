#include <stdio.h>
struct aluno {
  int matricula;
  char nome[50];
  float P1;
  float P2;
  float P3;
};

int main(void) {
  int alunos;
  printf("Quantos aluos sao?\t");
  scanf("%d", &alunos);
  struct aluno a[alunos];
  for(int i=0; i<alunos; i++){
    printf("\nDigite o nome do %d aluno: ", i+1);
    setbuf(stdin,NULL);
    fgets(a[i].nome,50,stdin);
    printf("Digite a matricula do %d aluno: ",i+1);
    scanf("%d", &a[i].matricula);
    printf("Digite a Primeira Nota: ");
    scanf("%f", &a[i].P1);
    printf("Digite a Segunda Nota: ");
    scanf("%f", &a[i].P2);
    printf("Digite a Terceira Nota: ");
    scanf("%f", &a[i].P3);
  }
  for(int i=0; i<alunos; i++){
    printf("\n\n Aluno %d:\nNome: %sMatricula: %d\nNota P1: %.2f\tNota P2: %.2f\tNota P3: %.2f\nMedia: %.2f", i+1, a[i].nome, a[i].matricula, a[i].P1, a[i].P2, a[i].P3, (a[i].P1 + a[i].P2 + a[i].P3)/3);
  }
  return 0;
}