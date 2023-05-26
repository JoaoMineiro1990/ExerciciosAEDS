#include <stdio.h>
#include <stdlib.h>
/*
aluno: Juaaaaaaaaaaaaauo Vitor Mendes Moneira
ultima atualização: 23/05/23
objetivo:...
*/
void preencher (int* M, int maxcol, int maxln)
{
  for(int i=0;i<maxln;i++)
    {
      for(int j=0;j<maxcol;j++)
        {
        printf ("o valor da posição [%d][%d]: ", i,j);
        scanf("%d",&M[i*maxcol+j]);
        }
    }
}

int* Soma(int* S, int* A, int* B, int maxcol, int maxln)
{
  for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          S[i*maxcol+j]=A[i*maxcol+j]+B[i*maxcol+j];
        }
    }
  return S;
}
int* Diferenca(int* D, int* A, int* B, int maxcol, int maxln)
{
  for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          D[i*maxcol+j]=A[i*maxcol+j]-B[i*maxcol+j];
        }
    }
  return D;
}

void exibir(int* M, int maxcol, int maxln)
{
  for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          printf("%d ",M[i*maxcol+j]);
        }
    }
}
int main(void) {
  
  int maxln, maxcol;
  printf("digite o tamanho da matriz\n");
  scanf("%d %d",&maxln,&maxcol);
  
  int* A=(int*)malloc(maxcol*maxln*sizeof(int));
  int* B=(int*)malloc(maxcol*maxln*sizeof(int));
  int* S=(int*)malloc(maxcol*maxln*sizeof(int));//soma
  int* D=(int*)malloc(maxcol*maxln*sizeof(int));//diferença
  
  preencher(A, maxcol, maxln);
  preencher(B, maxcol, maxln);
  Soma(S,A,B,maxcol,maxln);
  Diferenca(D,A,B, maxcol, maxln);
  printf("Matriz A\n");
  exibir(A,maxcol,maxln);
  printf("\nMatriz B\n");
  exibir(B,maxcol,maxln);
  printf("\nMatriz S\n");
  exibir(S,maxcol,maxln);
  printf("\nMatriz D\n");
  exibir(D,maxcol,maxln);
  
  return 0;
}