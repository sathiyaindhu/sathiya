#include <stdio.h>
int main()
{
  int a,rem,rev,dig;
   scanf("%d",&a);
    while(a!=0)
    { 
      rem=a%10;
      rev=rev*10+rem;
      a=a/10;
        }
     while(rev!=0)
    {
    dig=rev%10;
    rev=rev/10;
   printf("%d ",dig);
  }
  return 0;
  }
