#include <stdio.h>
int main()
{
	int d,e,f;
	scanf("%d %d %d",&d,&e,&f);
	if(d<e&&d<f)
	{
		printf("%d",d);
	}
	else if(e<d&&e<f)
	   {
		printf("%d",e);
	   }
     else
	{
		printf("%d",f);
	}
	return 0;
}

