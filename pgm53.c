#include<stdio.h>
int main()
{
  int n,r,result=0,i;
  printf("enter the digit");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
  r=n%10;
  n=n/10;
  result=result+r;
  }
  printf("sum of the digit %d",result);
 return 0;
}
