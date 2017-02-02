#include<stdio.h>
main()
{
    int a[100],i,n,k,pos=0,temp=0,j;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("\n");
    printf("enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            pos++;
            break;
        }
    }
    if(pos==0)
    {
        printf("term not found\n");
    }
    else
    {   while(j<n)
        {
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        j++;
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==k)
            {
                printf("%d",i);
            }
        }
    }
}
    
