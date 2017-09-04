#include<stdio.h>

main()
{
	int i,j,n,d[10][10];

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			d[i][j]=i;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==0)
			{
				d[i][1]=d[i][2]+1;
			}
			else
			{
				d[i][n]=d[i][2]+1;
			}
		}
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",d[i][j]);
		}
		printf("\n");
	}

}
