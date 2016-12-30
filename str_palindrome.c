#include<stdio.h>
#include<string.h>
main()
{
  int l,i;
  char a[20],b[20];
  printf("\nenter the string for the checking\n");
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
    b[i]=a[l-i-1];
  b[i]='\0';
  if(strcmp(a,b)==0)
    printf("The string is palindrome");
  else
    printf("The string is not a palindrome");
}
