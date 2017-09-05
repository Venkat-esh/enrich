#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,c=0,d[10][10];
	clrscr();
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			d[i][j]=++c;
			 if(j==1)
				printf("%d",d[i][j]);
			 else
				printf("*%d",d[i][j]);
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{   if(j==1)
				printf("%d",d[i][j]);
			else
				printf("*%d",d[i][j]);
		}
		printf("\n");
	}
	getch();
	}
