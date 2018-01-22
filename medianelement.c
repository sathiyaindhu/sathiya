#include<stdio.h>
int main()
{
int n,b[10],i,sum=0;
printf("Enter how many numbers \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
sum=sum+b[i];
}
int median=sum/n;
printf("median is :%d\n",median);
return 0;
}
