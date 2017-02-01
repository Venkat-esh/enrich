#include<stdio.h>
main()
{
    int a[100],n,i,k,pos=0;
    printf("Enter the number of terms in array");
    scanf("%d",&n);
    printf("\n");
    printf("enter the array terms \n");
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
            printf("the position is %d",i);
            pos=1;
        }
    }
    if(pos==0)
    {
        printf("the number is not present in the array");
    }
}
