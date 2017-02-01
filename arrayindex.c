#include<stdio.h>
main()
{
    int a[100],n,i,k,pos=0;
    printf("Enter the number of terms in array");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&k);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            pos=i;
            printf("the position is %d",pos);
        }
    }
}
