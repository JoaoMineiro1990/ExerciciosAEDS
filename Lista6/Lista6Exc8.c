#include <stdio.h>
#include <stdlib.h>
/*
aluno: JuAAAAAAOU(barulho de sabre de luz) Vitor Mendes Moreira
ultima atualização: 23/05/23
objetivo: mucho cansado pra conseguir escrever
*/
void preencher( int* M, int maxcol, int maxln)
{
  for(int i=0;i<maxln;i++)
    {
      for(int j=0;j<maxcol;j++)
        {
        printf ("o valor da posição [%d][%d]: ", i,j);
        scanf("%d",&M[i*maxcol+j]);
        }
    }
    for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          printf("%d ",M[i*maxcol+j]);
        }
      printf("\n");
    }
}

void troca28(int* M, int maxcol, int maxln)
{
  int* R=(int*)malloc(maxcol*maxln*sizeof(int));//criando o vetor temporario

  for(int i=0;i<maxln;i++)//enchendo o vetor R
    {
      for(int j=0;j<maxcol;j++)
        {
        R[i*maxcol+j]=M[i*maxcol+j];
        }
    }
  
  printf("aqui o trocado as linhas 2 e 8: \n");
  int troca28, troca82;
  for(int i=0;i<maxln;i++)
    {
        troca28 = R [ 1 * maxcol + i];
        troca82 = R [ 7 * maxcol + i];
        R [ 1 * maxcol +i] = troca82;
        R [ 7 * maxcol +i] = troca28;
    } 
  for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          printf("%d ",R[i*maxcol+j]);
        }
      printf("\n");
    }
}  


void troca410(int* M, int maxcol, int maxln)
{
  int* R=(int*)malloc(maxcol*maxln*sizeof(int));//criando o vetor temporario

  for(int i=0;i<maxln;i++)//enchendo o vetor R
    {
      for(int j=0;j<maxcol;j++)
        {
        R[i*maxcol+j]=M[i*maxcol+j];
        }
    }
  printf("aqui o trocado as linhas 4 e 10: \n");
  int troca410, troca104;
  for(int i=0;i<maxln;i++)
    {
        troca410 = R [ i * maxcol + 3];
        troca104 = R [ i * maxcol + 9];
        R [ i * maxcol + 3] = troca104;
        R [ i* maxcol + 9] = troca410;
    }
  for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          printf("%d ",R[i*maxcol+j]);
        }
      printf("\n");
    }
}

void diagonais(int* M, int maxcol, int maxln)
{
  int* R=(int*)malloc(maxcol*maxln*sizeof(int));//criando o vetor temporario

  for(int i=0;i<maxln;i++)//enchendo o vetor R
    {
      for(int j=0;j<maxcol;j++)
        {
        R[i*maxcol+j]=M[i*maxcol+j];
        }
    }
  printf("aqui o trocado diagonais: \n");
  int trocaPS, trocaSP, col=9;
  for(int i=0;i<maxln;i++)
    {
      trocaPS = R [i * maxcol + i ];
      trocaSP = R [i * maxcol + col ];
      R[ i * maxcol + i ] = trocaSP;
      R[ i * maxcol + col ] = trocaPS;      
      col--;
    } 
  for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          printf("%d ",R[i*maxcol+j]);
        }
      printf("\n");
    }
}

void LinhaCol(int* M, int maxcol, int maxln)
{
  int* R=(int*)malloc(maxcol*maxln*sizeof(int));//criando o vetor temporario

  for(int i=0;i<maxln;i++)//enchendo o vetor R
    {
      for(int j=0;j<maxcol;j++)
        {
        R[i*maxcol+j]=M[i*maxcol+j];
        }
    }
  printf("aqui o trocado as linhas 5 e Coluna 10: \n");
  int trocaL5C10, trocaC10L5;
  for(int i=0;i<maxln;i++)
    {
        trocaL5C10 = R [ 4 * maxcol + i];
        trocaC10L5 = R [ i * maxcol + 9];
        R [ 4 * maxcol + i] = trocaC10L5;
        R [ i* maxcol + 9] = trocaL5C10;
    }
  for(int i=0;i<maxln;i++)
    {
      for( int j=0; j<maxcol;j++)
        {
          printf("%d ",R[i*maxcol+j]);
        }
      printf("\n");
    }
}

int main(void) {
  int maxln=0, maxcol=0;
  printf(" digite o valor da linha e coluna\n");
  scanf("%d %d", &maxln, &maxcol);
  int* M=(int*)malloc(maxcol*maxln*sizeof(int));

  preencher(M, maxcol, maxln);
  troca28(M, maxcol, maxln);
  troca410(M, maxcol, maxln);
  diagonais(M, maxcol, maxln);
  LinhaCol(M, maxcol, maxln);
  free(M);
  return 0;
}