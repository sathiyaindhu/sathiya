#include<stdio.h>
int main()
{
char b[30];
int temp=0;
scanf("%s",b);
for(int i=0;b[i]!='\0';i++)
{
if(b[i]=='.')
temp++;
}
printf("\n lines=%d",temp);
return 0;
}
