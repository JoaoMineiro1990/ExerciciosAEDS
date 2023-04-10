#include <stdio.h>

/* 
  Aluno: João Vitor Mendes Moreira
  Ultima atualização: 13/03/2023
  Objetivo: Ler valores de catetos de um triangulo retangulo e mostrar a hipotenusa
*/  

int main(void)
{
  //Declaração de variavel
  float catetoa=0, catetob=0, hipotenusa=0;
  
  //Leitura de variavel
  printf("insira os valores dos catetos: ");
  scanf("%f %f",&catetoa,&catetob);
    
  //calculo
  hipotenusa=sqrt(pow(catetoa, 2)+pow(catetob , 2));
  
  //exibição de resultado
  printf("Hipotenusa: %.2f\n",hipotenusa);  
  
  return 0;
}