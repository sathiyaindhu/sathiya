#include <stdio.h>
int main()
{
char s1[50],s2[50],i,j;
scanf("%s%s",&s1,&s2);
while(s1[i]!='\0')
{
i++;
}
while(s2[j]!='\0')
{
 s1[i]=s2[j];
 i++;
 j++;
 }
 printf("%s",s1);
 return 0;
}
