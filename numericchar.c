#include <stdio.h>
int main()
{
char s[100];
int i,count=0;
printf("enter the string\n");
scanf("%s",&s);
while(str[i]!='\0')
{
if(s[i]>='0'&&s[i]<='9')
count++;
i++;
}
printf("NO OF NUMERIC CHARACTERS=%d",count);
return 0;
}
