#include <stdio.h>
#include <stdlib.h>
/*
aluno: JUAAAAOU Vitor Mendes Moreira
ultima atualização: 23/05/23
objetivo: Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba
uma matriz preenchida, calcule e retorne cada uma das somas a seguir (uma função para
cada letra abaixo):
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz.
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar
o seu uso
*/
int linha4(int* M, int maxln, int maxcl)
{
  int somatorio=0;
  for(int i=0;i<maxcl;i++)
    {
      somatorio+= M[maxln*i+1];
    }
  return somatorio;  
}
// 4 0 = 4*0+1=1
// 4 1 = 4*1+1=9
//

int coluna2 (int *matriz,int maxcl, int maxln) {
  int soma = 0;
  for (int ln = 0; ln < 5; ln++) {
    soma += *(matriz + (ln * maxcl) + 1);
  }
  return soma;
}

int diagonalprincipal(int* M, int maxln, int maxcl) {
  int somatorio = 0, col=0;
  
  // M[0][0] M[1][1] M[2][2]...
  // M[0] M[6] M[11]...
  // 0 = 5 * 0 + 0
  // 6 = 5 * 1 + 1
  // 12 = 5 * 2 + 2
  // 18 = 5*3 +3 
  
  for(int i = 0; i < maxln; i++) 
  {
    somatorio+= M[i*maxln+col];
    col++;
   }
  
  return somatorio;
}
// 0 4 = 4
// 1 3 = 5*1+3=8 
// 2 2 = 2*5+2= 12
// 3 1
// 4 0
int diagonalsecundaria(int* M, int maxln, int maxcl)
{
  
  int somatorio=0, col = maxcl;
  for(int i=0; i<maxln;i++)
    {
      somatorio+=M[i*maxln+col];
      col--;
    }
  return somatorio;
}

int todamatriz(int* M, int maxln, int maxcl) {
  int somatorio = 0;
  for(int i = 0; i < maxln; i++) 
  {
    for(int j = 0; j < maxcl; j++) 
    {
      somatorio += M[maxcl * i + j];
    }
  }

  return somatorio;
}

void preenchermatriz(int* M, int maxln, int maxcl)
{
    for(int i=0;i<maxln;i++) 
    {
    for(int j=0;j<maxcl;j++) {
        scanf("%d",&(M [i*maxcl+j]));
    }
  }
}

int main(void) {
  int maxln=5, maxcl=5;
  int* M = (int*) malloc (maxln*maxcl*sizeof(int)); 
  
  preenchermatriz(M, maxln, maxcl);
  printf("soma linha 4 %d\n",linha4(M,maxln,maxcl));
  printf("soma coluna2 %d\n",coluna2(M,maxln,maxcl));
  printf("%d soma diagonal principal\n",diagonalprincipal(M,maxln,maxcl));
  printf("%d soma diagonal secundaria\n",diagonalsecundaria(M,maxln,maxcl));
  printf("%d soma toda matrz\n",todamatriz(M,maxln,maxcl));
  return 0;
}