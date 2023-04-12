#include <stdio.h>
/*
aluno:João Vitor Mendes Moreiraz
ultima atualização: 11/04/23
objetivo: receber um valor N e executar um calculo
*/
float Fatorial(int num)//fazendo a conta do fatorial
{
  float Resultadofat=1;
  for(int i=1;i <= num;i++)
  {
    float fat=1;
    
    for(int j = 1 ;j <= i;j++)
    {
      fat*=j;
    }
    Resultadofat+=1/fat;
  }
  return (Resultadofat);//retornando o valor do fatorial
  return (-1);//se algo der errado
}
int main(void) 
{
  //declarando variavel
  int num;
  float somatoda=0;
  //printf("digite o numero de repetições");
  scanf("%d",&num);
  somatoda=Fatorial(num);
    
  printf("%.6f\n",somatoda);
  return 0;
}