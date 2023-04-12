#include <stdio.h>
/*
aluno: João Vitor Mendes Moreira
ultima atualização: 11/04/23
objetivo: receber valores de preço e venda e informar alguns parametros*/
int main(void) 
{
  //declaração de variavel
  float preco=0, venda=0, lucro=0, lucrototal=0, precototal=0, vendatotal=0;
  int cont10=0, conta12=0, cont20=0;
  //calculo/raciocinio
  scanf("%f %f",&preco, &venda);
  while(preco!=0)
    {
      lucro=venda-preco;// dando como exemplo 601-728= 127
      if(lucro<preco*0.1)// 127<601/10 - 127 < 60,1
      {
        cont10++;
      }
      if(lucro>=(preco*0.1) && lucro<=(preco*0.2))
      
      {
        conta12++;
      }
      if(lucro>preco*0.2)
      {
        cont20++;
      }
      vendatotal+=venda;
      precototal+=preco;
      lucrototal+=lucro;
      scanf("%f %f",&preco, &venda);      
    }
  printf("%d\n",cont10);
  printf("%d\n",conta12);
  printf("%d\n",cont20);
  printf("%.2f\n",precototal);
  printf("%.2f\n",vendatotal);
  printf("%.2f\n",lucrototal);

}