#include <stdio.h>
int ordem1(int n1,int n2, int n3)
{
  if(n1>=n2&&n1>=n3)
  {
    if(n2>=n3)
    {
      return (printf("%d %d %d\n",n3,n2,n1));
    }
    else
      return (printf("%d %d %d\n",n2,n3,n1));
  }
  if(n2>=n1&&n2>=n3)
  {
    if(n1>=n3)
    {
      return (printf("%d %d %d\n",n3,n1,n2));
    }
    else
      return (printf("%d %d %d\n",n1,n3,n2));
  }
  if(n3>=n1&&n3>=n2)
  {
    if(n1>=n2)
    {
      return (printf("%d %d %d\n",n2,n1,n3));
    }
    else
      return (printf("%d %d %d\n",n1,n2,n3));
  }
  return(-1);
}

int main(void) 
{
int repeticoes=0, a=0, b=0, c=0;
  //printf("quantas repetições?");
  scanf("%d",&repeticoes);

  for(int i=1;i<=repeticoes; i++)
    {
      //printf("escreva 3 numeros");
      scanf("%d %d %d",&a,&b,&c);
      int ajuste=ordem1(a, b, c);
    }
}