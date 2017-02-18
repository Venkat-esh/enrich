#include<stdio.h>
int si(int principle,int time,int rate);
main()
{	int sinterest;
	int principle,time;
	int rate;
	printf("enter the principle");
	scanf("%d",&principle);
	printf("enter the time in months");
	scanf("%d",&time);
	printf("enter the rate");
	scanf("%d",&rate);
	sinterest=si(principle,time,rate);
	printf("the simple interest is%d",sinterest);
}
int si(int principle,int time,int rate)
{
	int si=0;
	si=(principle*time*rate)/100;
}
