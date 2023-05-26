#include <stdio.h>
#include <stdlib.h>
/*
aluno:Juaaao Vitor Mendes Moreira
Ultima atualização: 23/05/23
objetivo: preencher um vetor, depois fazer a media e a somataria de quantos
passou*/

void preencher(float *vetor) // função que preenche o vetor
{
  for (int i = 0; i < 10; i++) {
    printf("digite o valor da nota\n");
    scanf("%f", (vetor + i)); // preenchendo o vetor
  }
}

void mediaquantos(float *vetor) {
  int cont = 0; // contador pra saber quantos passou
  float media = 0, somatorio = 0, vetorvalor = 0; // alto explicativas
  for (int i = 0; i < 10; i++)                    // passar pelo vetor
  {
    if (*(vetor + i) > 6) {
      cont++; // contando quem passou
    }
    somatorio += *(vetor + i); // somando as medias
  }
  media = somatorio / 10; // media da turma
  printf("%f\n", media);  // printando
  printf("%d\n", cont);   // printando
}
int main(void) {
  float *notas = (float *)malloc(10 * sizeof(float));
  preencher(notas);    // preencher o vetor
  mediaquantos(notas); // fazer as medias
  return 0;
}