#include<stdio.h>
int main()
{
int n,a,i,j;
scanf("%d",&n);
int b[n];
printf("\n the input of an array is");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("\n the output of an array is");
for(j=0;j<n;j++)
{
printf("%d",b[j]);
}
return 0;
}
