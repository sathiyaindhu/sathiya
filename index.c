#include<stdio.h>
int main()
{
int a[5],c,i;
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<c;i++)
{
printf("%d %d\n",a[i],i);
return 0;
}
}
