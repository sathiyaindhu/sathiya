#include<stdio.h>
	
	int main()
	{
		int n,r,s;
		printf("first term",r);
		scanf("%d",&r);
		printf("common difference",s);
		scanf("%d",&s);
		printf("N term",n);
		scanf("%d",&n);
		while(counter<=n)
		{
			r=1+(counter-1)*s;
			printf("%d",r);
			counter++;
	}
return 0;
	}
