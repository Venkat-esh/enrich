#include <stdio.h>
#include <string.h>
int checkvowel(char);
void main()
{
  char s[20], t[20];
  int i,j=0;
  printf("enter the string");
  gets(s);
  for(i=0;s[i]!='\0';i++) 
  {
    if(checkvowel(s[i])==0)
    {      
      t[j]=s[i];
      j++;
    }
  }
 t[j]='\0';
 strcpy(s,t);
 printf("resultant string: %s\n",s);
}
int checkvowel(char c)
{
  switch(c) 
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    case ' ':
      return 1;
    default:
      return 0;
  }
}
  
  
