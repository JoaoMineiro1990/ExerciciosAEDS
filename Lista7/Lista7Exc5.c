#include <stdio.h>
#include <stdlib.h>
/*
aluno: Jo~~ao Vitor Mendes Moreira
ultima atulização: 25/05/23
objetivo: ordernar valores
*/
void troca (int* a, int* b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

void crescente (int*M,int vezes)
{
  int indicemaior=0;
  for(int i=0;i<vezes-1;i++)
    {
      indicemaior=i;
      for(int j=i+1;j<vezes;j++)
        {
          if(*(M+j)>*(M+indicemaior))
          {
            indicemaior=j;
          }
        }
      if(indicemaior != i)
          {
            troca((M+i),(M+indicemaior));
          }
    }
}
int main(void) 
{
  int vezes;
  int* M;
  printf("Quantos numeros vc ira digitar: ");
  scanf("%d",&vezes);

  M=(int*)malloc(vezes*sizeof(int));
  for(int i=0;i<vezes;i++)
    {
      printf("Digite o valor da posição %d: ",i);
      scanf("%d",M+i);
    }
  printf("Vetor original\n");
  for(int i=0;i<vezes;i++)
    {
      printf("%d ",*(M+i));
    }
  crescente(M, vezes);
  
  printf("\nVetor maior pro menor\n");
  for(int i=0;i<vezes;i++)
    {
      printf("%d ",*(M+i));
    }
  free(M);
  return 0;
}