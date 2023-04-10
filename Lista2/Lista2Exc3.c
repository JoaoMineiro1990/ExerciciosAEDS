#include <stdio.h>

int main(void)
{
  int contador, numero, div39=0, div2=0, div5=0, a=1, nao=1;
  
  for(contador=1;contador<=10;contador++)
    {
      printf("");
      scanf("%d",&numero);
      
        if (numero%3==0 && numero%9==0)
        {
          div39++;
          nao=0;
        }
        if (numero%2==0)
        {
          div2++;
          nao=0;
        }  
        if(numero%5==0)
        {
          div5++;
          nao=0;
        }
        if(nao==1)
        {
          printf("Número não é divisível pelos valores\n");
        }
      nao=1;
    }
printf("%d Números são divisíveis por 3 e 9\n",div39);
printf("%d Números são divisíveis por 2\n",div2);
printf("%d Números são divisíveis por 5\n",div5);
}
  