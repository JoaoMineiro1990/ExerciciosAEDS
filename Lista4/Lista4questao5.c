#include <stdio.h>
/*
Aluno:João Vitor Mendes Moreira
ultima atualização:24/04/23
objetivo: receber um valor N e calcular a função S
*/

//criando a função
float Fatorial(float n)
{
//Fatorial
  if(n==1||n==0)
  {
    return (1);
  }
  else
  {
  return Fatorial(n-1)*n;
  }
}
float SomaS(float n)
{
  if(n<=0)
  {
    return 0;
  }
  else
  {
    return SomaS(n-1)+(1/Fatorial(n));
  }
}
 int main(void) 
{
  //declaração de variavel
  int n;

  //leitura de variavel
  //printf("Digite o numerador: ");
  scanf("%d",&n);

  //resposta
  printf("%.2f\n",SomaS(n));
   
  return 0;
}
