#include<stdio.h>
int main()
{
int nt,n,t1=0,t2=1,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
nt=t1+t2;
t1=t2;
t2=nt;
printf("%d",t1);
}
return 0;
}
