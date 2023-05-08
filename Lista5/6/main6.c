#include <stdio.h>
/*
aluno:joão Vitor Mendes Moreira
ultima atualização: 07/05/23
objetivo: receber um numero mostrar seus divisores e somar seus divisores
*/

int main(void) {
  //criando arquivos
FILE *somatorio=fopen("somatoria","w");

  //declaração de variavel
  int a, b, r ,q,s=0;

  //logica
  //print("digite um numero");
  scanf("%d",&a);

  for(int b=a;b>0;b--)
    {
      r=a%b;
      q=a/b;
      if(r==0)
      {
        printf("%d\n",q);
        s+=q;
      }
    }
   //resposta
  fprintf(somatorio,"%d",s);
  fclose (somatorio);
  return 0;
}