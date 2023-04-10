#include <stdio.h>

int main(void) {
int f1=1, f2=1, num=0, f3=0;

  scanf("%d",&num);
  if(num==0)
  {
   printf("%d ",f1);
  }
  if(num==1)
  {
   printf("%d ",f1);
   printf("%d ",f2);
  } 
  if(num>=2)
  {
    printf("%d ",f1);
    printf("%d ",f2);
    for(int i=2;i<num;i++)
    {
      f3=f1+f2;
      printf("%d ",f3);
      f1=f2;
      f2=f3;
    }
    
  }
  
}