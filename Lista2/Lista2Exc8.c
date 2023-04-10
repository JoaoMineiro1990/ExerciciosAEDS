#include <stdio.h>

int main(void) 
{
  float preço=0, venda=0, lucro=0, lucrototal=0, preçototal=0, vendatotal=0;
  int cont10=0, conta12=0, cont20=0;
  
  scanf("%f %f",&preço, &venda);
  while(preço!=0)
    {
      lucro=venda-preço;
      if(lucro<preço/10)
      {
        cont10++;
      }
      if(lucro>=preço/10 && lucro<=preço/20)
      {
        conta12++;
      }
      if(lucro>preço/20)
      {
        cont20++;
      }
      vendatotal+=venda;
      preçototal+=preço;
      lucrototal+=lucro;
      scanf("%f %f",&preço, &venda);      
    }
  printf("%d\n",cont10);
  printf("%d\n",conta12);
  printf("%d\n",cont20);
  printf("%.2f\n",vendatotal);
  printf("%.2f\n",lucrototal);
  printf("%.2f\n",preçototal);
}