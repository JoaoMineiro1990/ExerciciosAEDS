#include <stdio.h>
/*
Aluno: João Vitor Mendes Moreira
ultima atualização 19/03/23
objetivo: Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela. Se o motorista estiver dentro do limite de velocidade, imprima a mensagem “Motorista respeitou a lei”. Se o motorista tiver ultrapassado a velocidade máxima permitida, calcule e imprima o valor da multa a ser cobrada.
*/
int main(void) 
{
  //declaração de variaveis
  float vmax=0, vmoto=0;

  //leitura de variaveis
  printf("digite a velocidade maxima permitida e a velocidade do motorista: \n");
  scanf("%f %f",&vmax,&vmoto);

  //calculo/logica
  if(vmoto<=vmax)
  {
    printf("Motorista respeitou a lei\n");
  }
  else
  {
    if(vmoto>vmax&&vmoto<=(vmax+10))
    {
      printf("Multa de 50 reais\n");
    }
    else if (vmoto>(vmax+10)&&vmoto<=(vmax+30))
    {
      printf("Multa de 100 reais\n");
    }
    else
    {
      printf("Multa de 200 reais\n");
    }
  }
  return 0;
}