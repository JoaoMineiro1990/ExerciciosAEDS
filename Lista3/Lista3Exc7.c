#include <stdio.h>
#include <stdbool.h>
/*
Aluno:João Vitor Mendes Moreira
ultima atualização:11/04/23
objetivo: receber um valor inteiro e dizer se he positivo ou negativo
*/
bool posiounega(float n)//função para repsonder true ou false
{
  if(n>0)
  {
    return true;
  }
  else
  {
    return false; 
  }
}

int main(void) 
{
  //declaração de varaivel
  int num;
  float n=0;

  //raciocinio
  //printf("escreve o numero de repetições ");
  scanf("%d",&num);

  for(int i=1;i<=num;i++)//repetição com limite num
  {
    scanf("%f",&n);
    
     if(posiounega(n)==true)
      {
        printf("SIM\n");
      }
      else
      {
        printf("NAO\n");
      }
  }
}