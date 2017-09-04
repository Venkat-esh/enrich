#include<stdio.h>

main()
{
	int i,j,n,c=0,d[10][10];

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			d[i][j]=++c;
			printf("%d",d[i][j]);
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			d[i][j]=c--;
			printf("%d",d[i][j]);
		}
		printf("\n");
	}

	}
