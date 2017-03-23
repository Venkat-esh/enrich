#include<stdlib.h>
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
{   int count=1,k=0;
	struct node*newnode;
	for(newnode=first;newnode!=last;newnode=newnode->next)
    {
        if(newnode->element==x)
	    {   
	        k=count;
	        break;
	    }
	    else
	    {
	        count++;
	    }
	}
	if(k<=count)
	{
	    return count;
	}
	else
	{
	    return 0;
	}
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
	if(k<=pos)
	{
	printf("%d",pos);
	}
	else
	{
	printf("element not found");
	}
}

