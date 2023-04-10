#include <stdio.h>

int main(void) 
{
  
  float N, SomatorioFat=1, fatorial=1;
  
  scanf("%f",&N);
  for(int i=1;i<N;i++)
    {
      fatorial=1;
        for(int j=1; j<=i;j++)
        {
          fatorial*=j;
        }
      fatorial=1/fatorial;
      SomatorioFat+=fatorial;      
    }
  printf("%.2f\n",SomatorioFat); 
  return 0;
}