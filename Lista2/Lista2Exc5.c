#include <stdio.h>

int main(void) 
{
  float salario=0, contadorgente=0, salariototal=0, filhos=0, filhostotal=0, salario100=0, salariomaior=0;

  while (salario>=0)
    {
      contadorgente++;
      salariototal+=salario;
      filhostotal+=filhos;
      printf("%.2f",filhostotal);
      if(salario<=100 && salario>=0)
      {
        salario100++;
      }
      if(salariomaior<=salario)
      {
        salariomaior=salario;  
      }
      printf("\n");
      scanf("%f %f",&salario,&filhos);
    }
  printf("%.2f\n",(salariototal/contadorgente));
  printf("%.2f\n",(filhostotal/contadorgente));
  printf("%.2f\n",salariomaior);
  printf("%.2f\n",((salario100/contadorgente)*100));
  
  return 0;
}