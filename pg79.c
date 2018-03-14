#include <stdio.h>
#include<conio.h>
int main()
{ 
	int a,b,c,sq;
	scanf("%d %d",&a,&b);
	c=a*b;
	sq=sqrt(c);
	if((sq==a)&&(sq==b))
	{
	    printf("yes");
	    
	}
	else
	{
	    printf("no");
	}
	return 0;
}
