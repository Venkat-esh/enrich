#include<stdio.h>
main()
{
int a[10][10],M,N,i,j,k;
printf("enter number of rows M and columns N");
scanf("%d %d",&M,&N);
printf("enter the value of k");
scanf("%d",&k);
for(i=0;i<M;i++)
{
  for(j=0;j<N;j++)
  {
     if((i+j)==k)
        a[i][j]=1;
        else
        a[i][j]=0;
   }
}
for(i=0;i<M;i++)
{
   for(j=0;j<N;j++)
    printf("%d",a[i][j]);
}
printf("\n");
}


