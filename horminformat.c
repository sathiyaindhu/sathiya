#include<stdio.h>
int main()
{
int a,b,c,d,i,j;
printf("enter time in hours and minutes");
scanf("%d%d",&a,&c);
printf("enter second time in hours and minutes");
scanf("%d%d",&b,&d);
i=a-b;
j=c-d;
printf("the difference in time is %d\t%d",i,j);
return 0;
}
