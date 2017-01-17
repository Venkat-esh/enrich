#include <stdio.h>
main()
{
    int n,i,j,a[100][100];
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==0||j==i-1)
            {
                a[i][j]=1;
            }
            else
            {
            a[i][j]=(i-j+1)*a[i-1][j-1]+j*a[i-1][j];
            }
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}
