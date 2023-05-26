#include <stdio.h>
#include <stdlib.h>
/*
aluno: Juaaaaou Vitor Mendes Moreira
ultima atualização : 25/05/2023
objeitvo: achar o maior numero
*/

void preencher (int* M)
{
  int vezes;
  printf("Digite o numero de elementos: ");
  scanf("%d",&vezes);
  M=malloc(vezes*sizeof(int));
  for(int i=0;i<vezes;i++)
    {
      printf("digite o valor da posição %d: ",i);
      scanf("%d",M+i);
    }
  int maior=*M;
  
  for(int i=0;i<vezes;i++)
    {
      if (maior<*(M+i))
      {
        maior=*(M+i);
      }
    }
  printf("o maior valor é: %d\n",maior);
}

int main(void) 
{
  int* M;//=(int*)malloc(vezes*sizeof(int));
  
  preencher(M);
  free(M);
  return 0;
}