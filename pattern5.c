#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=1,c[10][10],n;
	clrscr();
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
	   for(j=1;j<=n;j++)
		{
			c[i][j]=k++;
		}
		for(j=1;j<=n;j++)
		{
			c[n+1-i][j]=k++;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{   if(j==1)
				printf("%d",c[i][j]);
			else
				printf("*%d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
