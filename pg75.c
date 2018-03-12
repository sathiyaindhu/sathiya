#include<stdio.h>
#include<string.h>
int main()
{
char ch[100];
gets(ch);
int n,i;
n=strlen(ch);
if(n%2!=0)
{
ch[(n-1)/2]='*';
}
else
{
ch[n/2]='*';
ch[(n/2)-1]='*';
}
printf("%s",ch);
return 0;
}
