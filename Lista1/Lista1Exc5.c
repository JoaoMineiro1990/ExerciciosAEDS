#include <stdio.h>
/*
aluno:João Vitor Mendes moreira
ultima atualização: 17/03/2023
objetivo: Um hotel com 80 apartamentos deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária. Com isto, espera aumentar sua taxa de ocupação de 50%
para 80%. Sendo dado o valor normal da diária, calcular e imprimir:
a) o valor da diária promocional;
b) o valor total arrecadado com 80% de ocupação e diária promocional;
c) o valor total arrecadado com 50% de ocupação e diária normal;
d) a diferença entre estes dois valores.
*/
int main(void) 
{
  //declaração de variavel
  float apart=80, descont=0.25, ocupa1=0.5, ocupa2=0.8, diaria=0, Dpromo=0, dianormal=0, diapromo=0, dife=0;

  //leitura de diaria
  printf("Qual valor da diaria? \n");
  scanf("%f",&diaria);

  //calculo
  Dpromo=diaria-diaria*0.25;
  dianormal=(apart*ocupa1)*diaria;
  diapromo=(apart*ocupa2)*Dpromo;
  dife=diapromo-dianormal;

  //exibição
  printf("Valor promocional: %.2f\n",Dpromo);
  printf("Promocional com 80%% ocupado: %.2f\n",diapromo);
  printf("Normal com 50%% ocupado: %.2f\n",dianormal);
  printf("Diferença entre os valores: %.2f\n",dife);
return 0;
}