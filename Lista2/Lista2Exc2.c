#include <stdio.h>

int main(void) 
{
float contapositivos=0, contanegativos=0, contazeros=0, positivos, negativos, zeros, n, valor, contagem=0;
  printf("");
  scanf("%f",&n);
  while(contagem<n)
    {
      printf("");
      scanf(" %f",&valor);
      if (valor>0)
      {
        contapositivos++;
      }
      else if(valor<0)
      {
        contanegativos++;
      }
      else
      {
        contazeros++;
      }
      contagem++;
    }
	positivos=contapositivos/n*100;
	negativos=contanegativos/n*100;
	zeros=contazeros/n*100;

  printf("%.0f%% POSITIVOS \n",positivos);
  printf("%.0f%% NEGATIVOS\n",negativos);
  printf("%.0f%% ZEROS\n",zeros);
  return 0;
}