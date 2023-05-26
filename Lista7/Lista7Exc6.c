#include <stdio.h>
#include <stdlib.h>
/*
aluno: João Vitor Mendes moreira
ultima atualização: 25/05/23
objetivo: somar os valores de um vetor usando ponteiro
*/
int main(void) {
  int vezes, somatorio = 0;
  printf("qual tamanho do seu vetor? ");//pegando o tamanho do vetor
  scanf("%d", &vezes);
  while (vezes > 10) {// verificando se o tamanho é aceitavel
    printf("o vetor tem q ter no máximo 10 numeros: ");
    scanf("%d", &vezes);
  }
  int *M = (int *)malloc(vezes * sizeof(int));//criando o vetor
  for (int i = 0; i < vezes; i++) {//preenchendo e somando
    printf("Digite o valor da posição [%d] ", i);
    scanf("%d", (M + i));
    somatorio += *(M + i);
  }
  printf("o valor da soma dos vetores é: %d \n", somatorio);//resultado
  free(M);
  return 0;
}