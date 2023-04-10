#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
ultima atualização: 18/03/20023
objetivo: Faça um programa para calcular e imprimir o valor de Y, dado um valor de X:
*/
int main(void)
{
  //printf("Hello World\n");
  //declaração de variavel
  float x=0;
  int y=0;

  //leitura de variavel
  printf("Digite o valor de x: ");
  scanf("%f",&x);

  //calculo/logica
  if(x<=1)
  {
    printf("1\n");
  }
  else if (x>1&&x<=2)
  {
    printf("2\n");
  }
  else if(x>2&&x<=3)
  {
    printf("%.2f\n",(x*x));
  }
  else
  {
    printf("%.2f\n",(x*x*x));
  }
  
  return 0;
}