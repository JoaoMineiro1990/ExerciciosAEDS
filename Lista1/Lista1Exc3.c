#include <stdio.h>
#include <time.h>
/*
Aluno:João Vitor Mendes Moreira
Ultima atualização: 17/03/2023
objetivo:
*/
int main(void) 
{
  //Declaração de variavel
  int ano=0, ano_atual=2023;
  char a;

  //leitura de variavel
  printf("qual ano vc nasceu?\n");
  scanf("%d",&ano);
  printf("sabendo que \nS = sim\nN = não\nVoce ja fez niver esse ano?\n");
  scanf(" %c",&a);

  switch(a)
    {
      case's':case'S':
      ano=-ano+ano_atual;
      printf("%d\n",ano);
        if(ano>=18)
        {
          printf("Pode dirigir\n");
        }
        else
        {
          printf("Não pode dirigir\n");
        }
      break;
      case'n':case'N':
      ano=(-ano+ano_atual)-1;
      printf("%d\n",ano);
        if(ano>=18)
        {
          printf("Pode dirigir\n");
        }
        else
        {
          printf("Não pode dirigir\n");
        }
      break;
    }
  

  /*struct tm*anoatual;
  time_t segundos;
  time(&segundos);
  anoatual=localtime(&segundos); 
  
  //calculo/logica
  switch(a)
    {
      case's':case'S':
      ano=-ano+(anoatual->tm_year+1900);
      printf("%d\n",ano);
        if(ano>=18)
        {
          printf("Pode dirigir\n");
        }
        else
        {
          printf("Não pode dirigir\n");
        }
      break;
      case'n':case'N':
      ano=-ano+(anoatual->tm_year+1899);
      printf("%d\n",ano);
        if(ano>=18)
        {
          printf("Pode dirigir\n");
        }
        else
        {
          printf("Não pode dirigir\n");
        }
      break;  
    }*/
  
  
  
  return 0;
}