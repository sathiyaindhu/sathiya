#include<stdio.h>
void main()
{
    int a,i,count=0;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            count=1;
        }
    }
    if(count==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
