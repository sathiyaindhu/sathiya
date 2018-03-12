#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[10];
    int count=0,n, i;
    scanf("%s",&a);
     n=strlen(a);
    for(i=0;i<=n;i++)
    {
    if(a[i]!=a[n-1-i])
    {
        count++;
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
return 0;
}
