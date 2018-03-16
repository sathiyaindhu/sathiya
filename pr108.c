#include <stdio.h>
int main()
{
 int a,n,d;
int s;
scanf("%d%d%d",&a,&d,&n);
s=a+(a+(n-1)*d);
printf("%d",s);
return 0;
}
