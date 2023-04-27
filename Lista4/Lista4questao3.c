#include <stdio.h>
/*
Aluno:João Vitor Mendes Moreira
ultima atualização:24/04/23
objetivo: receber 2 numeros e voltar o resto da divisao
*/

//criando a função
int divisao(int numerador, int denominador)
{
  if(denominador == 0)
  {
  return 0;
  }
  else
  {
    while(numerador>=denominador)
    {
      return(1+divisao(numerador-denominador,denominador));
    }
  return (0);
  }
}
 int main(void) 
{
  //declaração de variavel
  int numerador, denominador;

  //leitura de variavel
  //printf("Digite o numerador: ");
  scanf("%d",&numerador);
  //printf("Digite o denominador: ");
  scanf("%d",&denominador);

  //resposta
  printf("%d\n",divisao(numerador,denominador));
   
  return 0;
}
