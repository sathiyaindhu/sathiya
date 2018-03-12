#include<stdio.h>
#include<string.h>
int main()
{
   char ch[10];
   int count=0,i,k;
   scanf("%s",&ch);
   k=strlen(ch);
    for(i=0;i<=k;i++)
    {
        if((ch[i] =='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
