#include<stdio.h>
int main()
{
  int N,M,n;
  printf("enter the two numbers");
  scanf("%d",&N,&M);
  n=N*M;
  if(n%2==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
