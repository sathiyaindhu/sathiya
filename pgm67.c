#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
while(n%10!=0)
{
n++;
}
printf("%d",n);
}
