#include <stdio.h>
#include <stdlib.h>
/*
aluno: Juaaaao Vitor Mendes moreira
ultima atualização: 23/05/23
objetivo: eu to muito doente
*/
int somaabaixo(int *M, int maxcol, int maxln) {
  int somatorio = M[1 * maxcol + 0];
  for (int i = 0; i < 2; i++) {
    somatorio += M[2 * maxcol + i];
  }
  for (int i = 0; i < 3; i++) {
    somatorio += M[3 * maxcol + i];
  }
  return somatorio;
}

int main(void) {
  int maxln = 0, maxcol = 0;
  printf("digit a linha e coluna da matriz\n");
  scanf("%d %d", &maxln, &maxcol);
  int *M = (int *)malloc(maxln * maxcol * sizeof(int));

  for (int i = 0; i < maxln; i++) {
    for (int j = 0; j < maxcol; j++) {
      scanf("%d", &M[i * maxcol + j]);
    }
  }
  printf("o somatorio é %d\n", somaabaixo(M, maxcol, maxln));
  for (int i = 0; i < maxcol; i++) {
    printf(" a diagonalprincipal é %d ", M[i * maxcol + i]);
  }

  return 0;
}