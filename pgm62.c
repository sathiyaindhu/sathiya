#include<stdio.h>
#include<string.h>
void main()
{
 char s[50];
 int i,a,c=0;
  scanf("%s",&s);
  a=strlen(s);
  for(i=0;i<a;i++)
  {
    if( (s[i]=='0')||(s[i]=='1'))
    {
      c++;
    }
  }
  if(c==a)
  {
    printf("yes");
    
  }
  else
  {
    printf("no");
  }
}
