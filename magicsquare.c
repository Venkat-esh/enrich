#include<stdio.h>
main()
{
    int row=0,n,col=0,i;
    int a[10][10];
    printf("enter the number of rows and columns");
    scanf("%d",&n);
    col=n/2;
    for(i=1;i<=n*n;i++)
    {
        a[row][col]=i;
        if((i%n)==0)
        {
            row++;
            continue;
        }
        col++;
        row--;
        if(row<0)
        {
        row=n-1;
        }
        if(col>(n-1))
        {
        col=0;
        }
    }
    printf("\nthe resultant magic square matrix is: \n");
    for(row=0;row<n;row++)
    {
      for(col=0;col<n;col++)
      {
          printf("%d\t",a[row][col]);
      }
      printf("\n");
    }
    
}
