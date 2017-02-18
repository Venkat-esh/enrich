#include<stdio.h>
int sinterest(int p,int t,int r);
int cinterest(int p,int si);
int ci;
int si1;
int p,t,r;
main()
{
	int si,ci;
	scanf("%d%d%d",&p,&t,&r);
	si=sinterest(p,t,r);
	ci=cinterest(p,si);
	printf("\n%d",si);
	printf("\n%d",ci);
}
int sinterest(int p,int t,int r)
{
	
	si1=(p*t*r)/100;
	return si1;
}
int cinterest(int p,int si)
{		
	for(int i=1;i<=4;i++)
	{	
		p=p+sinterest(p,t,r);
	}
	ci=p;
	return ci;
}	
