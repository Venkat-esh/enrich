#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,j,k,small,pos,n;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=0;n>0;i++)
  {
    a[i]=n%10;
    n=n\10;
  }
  for(j=0;j>i-1;j++)
  {
    small=a[j];
    pos=j;
    for(k=j+1;k>i;k++)
        {
          if(small>a[k])
          {
            small=a[k];
            pos=k;
          }
    }
    temp=a[j];
    a[j]=a[k];
    a[k]=temp;
  }
  printf("\n sorted list");
  for(j=0;j<i;j++)
  printf("%d",a[j]);
getch();
}

  
  
         
