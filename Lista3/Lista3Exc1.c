#include <stdio.h>
/*
Aluno:João Vitor Mendes moreira
Ultima atualização: 08/04/23
objetivo: Receber 3 notas de N alunos e calcular o valor da media de acordo com o tipo da mesma.
*/
float notas(float nota1,float nota2,float nota3,char a)
{
  if (a=='a'||a=='A')
  {
    return (nota1+nota2+nota3)/3;
  }
  else if (a=='p'||a=='P')
  {
    return (((nota1*5)+(nota2*3)+(nota3*2))/10);
  }
  else
    return(0);//coloquei o -1 para verificar se esta entrnado na função pois hipoteticamente n existe nota negativa
}

int main(void)
{ 
  float n1=0,n2=0,n3=0, media=0,Alunos=0;
  char Tipo;
  //printf("Sera feia a media de quantos alunos?\n");
  scanf("%f",&Alunos);
  for (int i=1;i<=Alunos;i++)
    {
      //printf("digite suas 3 notas e o tipo de média \n");
      scanf("%f %f %f %c",&n1,&n2,&n3,&Tipo);
      media=notas(n1,n2,n3,Tipo);
      if(media>=0)
      {
        printf("%.2f\n",media);
      }
      else
      {
        printf("nota invalida");
      }
    }
  return 0;
}	