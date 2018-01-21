#include<stdio.h>
	int main()
	{
	int n,j,t,a=150,b=160,rem,result=0;
	printf("the first interval %d",a);
	printf("the second interval %d",b);
	{
	for(j=150;j<=160;j++)
	{
	t=n;
	while(n!=0)
	{
	rem=n%10;
	result=result+rem*rem*rem;
	n=n/10;
	}
	if(t==result)
	{
	printf("armstrong number between two intervals are %d ",result);
	}
  return 0;
	}

