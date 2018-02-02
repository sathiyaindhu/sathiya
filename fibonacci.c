#include<stdio.h>
int main()
{
    int j,nt,t1=0,t2=1,n;
    scanf("%d",&n);
for(j=1;j<=n;j++)
{
    nt=t1+t2;
    t1=t2;
    t2=nt;
    printf("%d",t1);
}
return 0;
}
