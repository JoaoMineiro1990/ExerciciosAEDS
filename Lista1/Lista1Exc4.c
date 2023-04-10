#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
ultima atualização: 17/03/2023
objetivo: receber uma nota e imprimir sua respectiva msg
*/
int main(void) 
{
  //declaração de varaiavel
  float n=0;

  //leitura de variavel
  printf("qual sua nota doidao? \n");
  scanf("%f",&n);

  //calculo/raciocinio
  if(n>=8 && n<=10)
  {
    printf("Ótimo\n");
  }
  else if(n>=7 && n<8)
  {
    printf("Bom\n");
  }
  else if(n>=5 && n<7)
  {
    printf("Regular\n");
  }
  else if(n<5)
  {
    printf("Insatisfatório\n");
  }

}