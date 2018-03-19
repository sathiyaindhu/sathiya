#include <stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int k,i,c=0,c1=0,c2=0;
    k=strlen(ch);
    for(i=0;i<k;i++)
    {
    	if(ch[i]>='a'&&ch[i]<='z')
    	c++;
    	else if(ch[i]>='A'||ch[i]<='Z')
    	c1++;
    	if(ch[i]>='0'||ch[i]<='9')
    	c2++;
    }
    if(c!=0&&c1!=0&&c2!=0)
    printf("yes");
    else
    printf("no");
    return 0;
}
