#include<stdio.h>
void main()
{
  int n,sum=0,digit=0,r=0;
  clrscr();
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
    digit++;
  }
  printf("the number of digits in the integer is %d",digit);
  printf("the sum of the digits in the integer is %d",sum);
 }
  
