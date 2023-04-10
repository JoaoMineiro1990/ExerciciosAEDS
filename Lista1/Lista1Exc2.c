#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
Ultima atualização: 17/03/2023
objetivo: receber dois numeros e soma-los se o resultado for maior ou
igual a 10, some 5 a este número. Caso contrário some 7 a ele. Imprima o resultado final.
*/
int main(void)
{
  //declaração de variavel
  int n1=0, n2=0;

  //leitura de variavel
  printf("digite dois numeros inteiros: ");
  scanf("%d %d",&n1,&n2);

  //Calculo/logica
  if((n1+n2)>=10)
  {
    n1+=n2+5;
    printf("%d\n",n1);
  } 
  else
  {
    n1+=n2+7;
    printf("%d\n",n2);
  }
  return 0;
}