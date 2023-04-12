#include <stdio.h>
float salariofun(float salario)
{  
  float mediasalario=0;
  int contagente=-1, filho=0;
  while (salario>=0)
    {
      contagente++;
      mediasalario+=salario;
      scanf("%f %d",&salario,&filho);
    }
  return (mediasalario/contagente);
}
int main(void) 
{
float salario=0, salariototal=0, mediasalario=0;
int contagente=-1, filhos=0;

  salariototal=salariofun(salario);
  
  printf("%.2f",salariototal);
}