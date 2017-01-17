#include<stdio.h>
main()
{
    int n,i=1,sum=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
        printf("%d",sum);
    }
   
}
