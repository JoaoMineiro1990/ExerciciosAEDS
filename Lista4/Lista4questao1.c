#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
Ultima atualização: 27/04/23 
objetivo:contar quantos digitos o numero digitado tem
*/
int contador(int numero)// função que conta os numeros
{
  int contagem=0;
  if (numero==0)
  {
    return 1;
  }
  else
  {
    while (numero !=0)
      {
      contagem++;
      numero=numero/10;
      }
    return contagem;
  }
}
int main(void) 
{
//declaração de variavel
int numero=0;

//raciocinio
//printf("digite o numero\n");
scanf("%d",&numero);

//resposta
printf("%d\n",contador(numero));
}
