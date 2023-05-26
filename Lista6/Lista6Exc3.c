#include <stdio.h>
#include <stdlib.h>
/*
aluno:João Vitor Mendes Moreira
ultima atualização: 23/05/23
objetivo: Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando
as posições de 0 a 9 em cada vetor). Faça um outro procedimento que receba dois vetores
preenchidos e gera um novo vetor com os elementos desses 2 vetores intercalados de tal
forma que nas posições ímpares do novo vetor estejam os elementos do primeiro vetor e nas
posições pares os elementos do segundo vetor recebido por parâmetro. Faça um
procedimento que receba e exiba o conteúdo de um vetor. Faça um programa que faça as
devidas declarações e acione os módulos para exemplificar o seu uso.
*/

void preencher (int* vetox, int*vetoy)//preenchendo
{
  for( int i=0;i<10;i++)
    {
      //printf("o valor na posição %d\n",i);
      scanf("%d", (vetox+i));
    }
  for( int i=0;i<10;i++)
    {
      //printf("o valor na posição %d\n",i);
      scanf("%d", (vetoy+i));
    }
}

void vetorzaum (int* vetox, int* vetoy, int* grandor)
{
    
  for (int i = 0; i < 10; i++) {
        *(grandor + 2 * i) = *(vetox + i);//prencher os pares
        *(grandor + 2 * i + 1) = *(vetoy + i);//prencher os impares
    }
}

void exibir (int* grandevetor)
{
  for(int i=0;i<20;i++)
    {
      printf("%d",*(grandevetor+i));//exibir o vetor
    }
}


int main(void) {
  int* grandevetor=(int*)malloc(20*sizeof(int));//criando o vetor resultado
  int* vetorx=(int*)malloc(10*sizeof(int));
  int* vetory=(int*)malloc(10*sizeof(int));

  preencher(vetorx,vetory);//preenchendo os dois vetores
  vetorzaum(vetorx, vetory, grandevetor);//prenche o vetor grandao
  exibir(grandevetor);//exibie o msm
  
  return 0;
}