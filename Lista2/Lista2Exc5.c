#include <stdio.h>

int main(void) 
{
  float salario=0,  salariototal=0,  salario100=0, salariomaior=0;
int filhos=0, filhostotal=0,contadorgente=0;
  
  scanf("%f %d",&salario,&filhos);
  while (salario>=0)
    {
      contadorgente++;
      salariototal+=salario;
      filhostotal+=filhos;
      if(salario<=100 && salario>=0)
      {
        salario100++;
      }
      if(salariomaior<=salario)
      {
        salariomaior=salario;  
      }
      scanf("%f %d",&salario,&filhos);
    }
  printf("%.2f\n",(salariototal/contadorgente));
  printf("%d \n",(filhostotal/contadorgente));
  printf("%.2f\n",salariomaior);
  printf("%.2f\n",((salario100/contadorgente)*100));
}