#include<stdio.h>
int main()
{
char a[10];
int i,b=0;
scanf("%s",&a[i]);
while(a[i]!='\0')
{
if((a[i]>='a')&&(a[i]<='z'))
{
b+=1;
}
i++;
}
printf("%d",b);
return 0;
}
