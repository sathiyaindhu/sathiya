#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d %d",&a,&b);
    n=a;
    a=b;
    b=n;
    printf("after swap %d %d",a,b);
}
