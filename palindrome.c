#include<stdio.h>
int main()
{
int rem,rev=0,n,t;
printf("enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf(" yes",n)
}
else
{
printf("no",n);
}
return 0;
}
