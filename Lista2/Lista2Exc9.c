#include <stdio.h>
int subtracao(int a,int b,int c){
 return (a+b+c)/3;
}
int main(void)
{
 int i, numTermos, num1, num2, num3;
 printf("\nDigite um numero: ");
 scanf("%d", &numTermos);
 num1 = 5;
 num2 = 2;
 num3 = 2;
 num2 = subtracao(num1,num2,num3);
 printf("\nNum3 = %d",num2);
 i = 4;
 while (i <= numTermos)
 {
 num1 += 15;
 printf("\nNum1 = %d", num1);
 i++;
 while(num2 <= 10)
 {
 num2 += 7;
 printf("\nNum2 = %d", num2);
 i--;
 if (i != numTermos)
 {
 num3 *= 4;
 printf("\nNum3 = %d", 
num3);
 i++;
 }
 }
 }
 return 0;
}