#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
Ultima atualização 10/04/23
objetivo: receber votos de candidatos e fazer contagem*/
int main(void) 
{
 //Declaração das variaveis
  int contcand1=0, contcand2=0,contcand3=0,contcand4=0,contnulo=0,contbranco=0, voto=0;
//calculo/raciocinio
//printf("Digite \n1,2,3,4 = voto para os respectivos candidatos \n 5 = voto \n nulo 6 = voto em branco\n");
scanf("%d",&voto);

while(voto>0)
  {
    if(voto==1)
    {
      contcand1++;
    }
    if(voto==2)
    {
      contcand2++;
    }
    if(voto==3)
    {
      contcand3++;
    }
    if(voto==4)
    {
      contcand4++;
    }
    if(voto==5)
    {
      contnulo++;
    }
    if(voto==6)
    {
      contbranco++;;
    }
    scanf("%d",&voto);
  }
  //exibição de resultados
  printf("%d\n",contcand1);
  printf("%d\n",contcand2);
  printf("%d\n",contcand3);
  printf("%d\n",contcand4);
  printf("%d\n",contnulo);
  printf("%d\n",contbranco);
}
