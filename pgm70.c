#include<stdio.h>
#include<conio.h>
int main()
{
  int a,n,b;
    scanf("%d",&n);
    b=(n&(n-1));
    if(b==0)
    {
    a=n*2;
    printf("%d",a);
    }
 }
