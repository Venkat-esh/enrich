#include<stdio.h>
#include<conio.h>
void main()
{
  int n,temp=0,rev=0,k=0;
  printf("enter the number");
  scanf("%d",&n);
  temp=n;
  while(temp!=0)
  {
     k=temp%10;
     temp=temp/10;
     rev=rev*10+k;
  }
  if(n==rev)
    printf("%d is a palindrome",n);
  else
    printf("%d is not a palindrome",n);
  getch();
}
