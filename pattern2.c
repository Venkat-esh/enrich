#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,c[10][10];
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d",i+2);
		}
		printf("\n");
	}
	for(i=n;i<0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d",i+2);
		}
		printf("\n");
	}
	getch();
}
