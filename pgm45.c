#include<stdio.h>
int main()
{
    int n,count=0;
    printf("\n enter the numbers");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("number of integers are %d\n",count);
    return 0;
}
