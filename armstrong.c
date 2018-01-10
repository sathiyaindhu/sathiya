#include<stdio.h>
#include<conio.h>
int main()
{
int n,t rem,result=0;
printf("enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
}
if(t==result)
{
printf("given number is armstrong number",n);
}
else
{
printf("given number is not a armstrong number",n);
}
return o;
}
