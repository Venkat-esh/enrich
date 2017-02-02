#include<stdio.h>
main()
{
    int a[100],b[100],i,j,n,pos=0,k=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number that has to be searched");
    scanf("%d",&k);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            pos++;
            b[j]=i;
            j++;
        }
    }
    if(pos==0)
    {
        printf("\n the number was not found");
    }
    else
    {
        for(i=0;i<j;i++)
        {
        printf("\t %d",b[i]);
        }
    }
}
