#include<stdio.h>
int main()
{
int a[100],i,j,k,n,s=0;
printf("enter the number of elements in an array");
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the number of elements to be added");
scanf("%d",&k);
for(j=0;j<k;j++)
{
s=s+a[j];
}
printf("sum is %d",s);
return 0;
}
