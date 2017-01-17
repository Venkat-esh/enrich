#include <stdio.h>
main()
{
    int n,i,j;
    printf("enter the number of lines");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==0||j==i-1)
            {
                printf("%d",1);
            }
            else
            {
            printf("%d",i);
            }
        }
        printf("\n");
    }
}


