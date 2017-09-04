#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,c[10][10],n,s;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{   for(s=0;s<n-1-i;s++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			if(j==0||j==i)
			{
				c[i][j]=1;
				printf("%d",c[i][j]);
			}
			else
			{
				c[i][j]=c[i-1][j]+c[i-1][j-1];
				printf("%d ",c[i][j]);
			}
		}
		for(s=0;s<n-1-i;s++)
		{
			printf(" ");
		}
		printf("\n");
	}
	getch();
	}
