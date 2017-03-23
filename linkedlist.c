#include<stdio.h>
#include<stdlib.h>
struct node
{
	int element;
	struct node*next;
}*list=NULL,*ptr;
void create(int num)
{
	struct node*newnode;
	newnode=malloc(sizeof(struct node));
	ptr=list;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
	newnode->element=num;
	newnode->next=NULL;
}
int find(x,k)
{
	int l=1;
	ptr=list->next;
	while(ptr!=NULL&&ptr->element!=x)
	{
		ptr=ptr->next;
		l++;
	}
	if(l>k)
	{
		return -1;
	}
	else
	{
		return l;
	}
}
main()
{
	int i,num,x,k,pos;
	printf("enter the number of elements\n");
	scanf("%d",&k);
	printf("enter the elements\n");
	for(i=0;i<k;i++)
	{
		scanf("%d",&num);
		create(num);
	}
	printf("enter the element that has to be searched\n");
	scanf("%d",&x);
	pos=find(x,k);
	if(pos==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("found at position %d",pos);
	}
}

