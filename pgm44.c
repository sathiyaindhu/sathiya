#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d%d",&a,&b);
    printf("enter the number");
    scanf("%d",&n);
    if((a<n)&&(n<b))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}
