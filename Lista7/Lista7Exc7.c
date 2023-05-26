#include <stdio.h>
#include <stdlib.h>
/*
aluno: João Vitor Mendes Moreira
ultima atualização: 25/05/23
obejtivo: escrever o vetor na ordem inversa
*/

int main(void) 
{
  int vezes, cont=0;
  printf("Qual tamanho do vetor? ");
  scanf("%d",&vezes);
  int* M=(int*)malloc(vezes*sizeof(int));
  for(int i=0; i<vezes; i++)
    {
      printf("digite o valor da posição [%d]: ",i);
      scanf("%d",M+i);
    }
  for(int i=vezes-1; i>=0; i--)
    {
      printf("o valor da posição [%d] é: %d \n",cont,*(M+i));
      cont++;
    }

  free(M);
  return 0;
}