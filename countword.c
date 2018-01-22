#include<stdio.h>
int main()
{
	char a[100];
	int b=0,d=1,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='3 ')
		b=++d;
	}
	printf("%d",b);
  return 0;
}
