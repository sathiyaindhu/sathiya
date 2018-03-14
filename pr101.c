#include<stdio.h>
#include<string.h>
int main()
{
char S[100];
int N;
gets(S);
scanf("%d",&N);
int k,i;
k=strlen(S);
for(i=(k-N);i<=k;i++)
{
printf("%c",S[i]);	
}
	return 0;
}
