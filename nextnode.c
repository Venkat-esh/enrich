#include<stdlib.h>
#include<malloc.h>
#include<stdio.h>
struct node
{
	int element;
	struct node*next;
}
*first=NULL,*last=NULL;
void insert(int num)
{
	struct node*newnode;
	newnode=malloc(sizeof(struct node));
	newnode->element=num;
	if(first==NULL)
	{
		first=last=newnode;
		newnode->next=NULL;
	}
	else
	{
		last->next=newnode;
		newnode->next=NULL;
		last=newnode;
	}
}
int find(int x)
{   int count=1;
	struct node*newnode;
	for(newnode=first;newnode!=last;newnode=newnode->next)
	{
		if(newnode->element==x)
		{
			if(newnode->next!=NULL)
			{
				newnode=newnode->next;
				count=newnode->element;
			}
		}
	}
	return count;
}
void main()
{
	int i,num,x,k,pos;
	printf("enter the num of the elements");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&num);
		insert(num);
	}
	printf("enter the element to be searched");
	scanf("%d",&x);
	pos=find(x);
	if(pos>0)
	{
		printf("%d",pos);
	}
	else
	{
		printf("no element is present after the node");
	}
}

