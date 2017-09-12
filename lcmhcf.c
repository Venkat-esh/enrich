#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,max=0,min=0;
	clrscr();
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		max=a;
	}
	else if(b>c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	for(i=max;;i++)
	{
		if(i%a==0 && i%b==0 && i%c==0)
		{
			break;
		}
	}
	printf("%d",i);
	if(a<b && a<c)
	{
		min=a;
	}
	else if(b<c)
	{
		min=b;
	}
	else
	{
		min=c;
	}
	for(i=min;;i--)
	{
		if(a%i==0 && b%i==0 && c%i==0)
		{
			break;
		}
	}
	printf("\n%d",i);
getch();
}
