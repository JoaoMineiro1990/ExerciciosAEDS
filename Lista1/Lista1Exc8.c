#include <stdio.h>

int main(void) 
{
  float salario;
  char x;

  printf("sabendo que \nA - Aumento de Salario de 8%\nB - Aumento de salario de 11%\nC - Aumento de salario fixo\ninforme que tipo de aumento vc recebeu\n");
  scanf("%c",&x);
  printf("informe seu salario\n");
  scanf("%f",&salario);

  switch(x)
    {
      case'a':case'A':
        printf("%.2f\n",(salario*1.08));
      break;
      case'b':case'B':
        printf("%.2f\n",salario*1.11);
      break;
      case'C':case'c':
        if(salario<=1000)
      {
        printf("%.2f\n",salario+350);
      }
      else
      {
        printf("%.2f\n",salario+200);
      }
    }
}