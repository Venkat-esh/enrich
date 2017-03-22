#include<stdio.h>
main()
{
	int a[10][10],i,j,k=1,n,m;
	printf("enter the number of rows\n");
	scanf("%d",&n);
	printf("enter the number of columns\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i%2==0)
			{
				a[i][j]=k;
				k++;
			}
			else
			{
				a[i][m-(j+1)]=k;
				k++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
