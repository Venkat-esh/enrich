#include<stdio.h>
main()
{
	int a[100],i,j,n,temp,y=0,z=0;
	printf("enter the number of values in the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			z=i;
			break;
		}
	}
	for(z=i+1;z<n;z++)
	{
		if(a[z]%2==0)
		{
			y=a[z];
			break;
		}
	}
	if(y!=0)
	{
		printf("\n the second biggest even number in the array is %d",y);
	}
	else
	printf("\n there is only one even number");
}
