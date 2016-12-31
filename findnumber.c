#include<stdio.h>
main()
{
        int a[100],i,n,k,num=0;
        printf("enter the number of elements");
        scanf("%d",&n);
        printf("enter the array elements");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        printf("enter the number to be searched");
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
                if(a[i]==k)
                {
                        num++;
                }
        }
        printf("the number occurs %d times",num);
}
