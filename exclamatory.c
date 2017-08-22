#include<stdio.h>
main()
{
	int n,i,j,m,k,l,c;
	scanf("%d",&n);
	m=n/2;
	c=1;
	for(i=0;i<n/2+1;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("!");
		}
		for(j=0;j<c;j++)
		{
			printf("*");
		}
		for(j=0;j<m;j++)
		{
			printf("!");
		}
		c=c+2;
		m--;
	  }
return 0;
}
