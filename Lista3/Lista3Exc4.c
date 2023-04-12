#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
ultima atualização: 10/04/23
objetivo: receber valores de lado do triangulo e mostrar seu tipo
*/

int etriangulo(float lado1,float lado2,float lado3)// saber se o triangulo existe
{
  if(lado1<lado2+lado3 && lado2<lado3+lado1 && lado3<lado1+lado2)
  {
    return(1);
  }
  else
    return(0);
}

void qualtriangulo(float lado1, float lado2,float lado3,int triangulo)
{
  if(triangulo==1)
  {
    if(lado1==lado2&&lado1==lado3)
    {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if(lado1==lado2||lado2==lado3||lado3==lado1)
    {
      printf("TRIANGULO ISOSCELES\n"); 
    }
    else
    {
       printf("TRIANGULO ESCALENO\n"); 
    }
  }
  else
  {
   printf("NÃO TRIANGULO\n"); 
  }
}

int main(void) 
{
//declaração de variavel
  float lado1,lado2,lado3,a,triangulo;

//repetição
  a=1;
  //printf("digite os lados do triangulo");
  scanf("%f %f %f",&lado1,&lado2,&lado3);
  
  while (a>0)
  {
  triangulo=etriangulo(lado1,lado2,lado3);//vai receber 0 ou 1
  qualtriangulo(lado1, lado2, lado3,triangulo);
  scanf("%f %f %f",&lado1,&lado2,&lado3);
  if(lado1<0||lado2<0||lado3<0)
  {
    a=0;
  }
}
}
