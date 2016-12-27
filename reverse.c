#include<stdio.h>
#include<conio.h>
void main()
{
  int n,rev,k;
  printf("Enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    k=n%10;
    rev=rev*10+k;
    n=n/10;
  }
  printf("\n The reverse of the number is %d",rev);
  getch();
}
