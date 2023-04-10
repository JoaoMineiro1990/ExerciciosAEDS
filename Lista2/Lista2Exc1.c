#include <stdio.h>

int main(void) 
{
float n=0, valor=0, contagem=1, contapositivos=0, contanegativos=0, contazeros=0;
  printf("");
  scanf("%f",&n);
  while(contagem<=n)
    {
      printf("");
      scanf("%f",&valor);
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
  printf("%.0f POSITIVOS \n",contapositivos);
  printf("%.0f NEGATIVOS\n",contanegativos);
  printf("%.0f ZEROS\n",contazeros);
  return 0;
}