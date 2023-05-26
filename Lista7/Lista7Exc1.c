#include <stdio.h>
#include <stdlib.h>
/*
aluno: João Vitor Mendes moreira
ultima atualização: 25/05/23
objetivo: receber 5 elementos e depois printarlos
*/
void preencher (int* M, int n)//preenchendo o veotr
{ 
  printf("insira o elemento %d na posição do vetor\n",n);
  for(int i=0;i<n;i++)
    {
      printf("Elemento [%d] - ",i);
      scanf("%d",M+i);
    }
}

void Exibir(int* M,int n)//exibindo o vetor
{
  for(int i=0;i<5;i++)
    {
      printf("%d ",*M+i);
    }
}
int main(void) 
{
  int n;
  printf("insira o numero de elementos do vetor: ");
  scanf("%d",&n);//pegando o valor do tamho do vetor
  
  int* M = (int*) malloc(n*sizeof(int));// criando o vetor
  
  preencher(M,n);//mandando preencher o vetor
  Exibir(M,n);// exibindo o vetor
  free(M);//liberando o espaço da memoria
  return 0;
}