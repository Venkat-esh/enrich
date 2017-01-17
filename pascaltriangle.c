#include<stdio.h>
main()
{
    int n,i,j;
    int a[100][100];
    printf("enter the number of lines");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==0||j==n-1)
            {
                 a[i][j]=1;
            }
            else
            {
               a[i][j]=a[i-1][j-1]+a[i-1][j]);
            }
            printf("\t%d",a[i][j]);
        }
         printf("\n");
    }
}
