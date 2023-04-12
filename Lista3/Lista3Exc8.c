#include <stdio.h>
/*
aluno:João Vitoria Mendes Moreira
ultima atualização:11/04/23
objetivo: receber valor de N e fazer calculos;
*/
float matematicas(int n)//função q vai fazer o procedimento matematico
{
  float somatoriaS=0, sembaixo, semcima, s=0;
  int PA=0;
  
  for(int i=0;i<n;i++)
    {
      {
        semcima=2+PA;
        sembaixo=(4+i);
        PA+=3+2*i;
        s=semcima/sembaixo;
      }
      somatoriaS+=s;
   }
  return(somatoriaS);//retorno da somatoria do s
  
}

int main(void) 
{
//declaração de variavel
  int n=0;
  float imprimir;
//"recebimento de valor?"(frase estranha)
//printf("qual valor q vc deseja fazer a somatoria");
scanf("%d",&n);
printf("%.6f\n",matematicas(n));
}