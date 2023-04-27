#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
Ultima atualização: 27/04/23 
objetivo:somar todos os digitos de um numero
*/
int soma(int numero)// função que soma
{
  int somatudo=0;
  if (numero==0)
  {
    return 01;
  }
  else
  {
    while (numero >0)
      {
      somatudo+=numero%10;
      numero=numero/10;     
      }
    return somatudo;
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
printf("%d\n",soma(numero));
}
