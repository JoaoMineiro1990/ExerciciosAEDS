#include <stdio.h>

int main(void) 
{
int f1=0, f2=1, num=0, f3=1;

scanf("%d",&num);

    while (num>=f3)
    {
      if(f3<num)
      {
        printf("%d ",f3);
      }
      f3=f1+f2;
      f1=f2;
      f2=f3;
    }
}