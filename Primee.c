#include<stdio.h>
#include<conio.h>
void main()
{ 
int n,i,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{ 
if((n%1)==0)
count++;
}  
if(count==0)
{ 
printf("yes");
}  	
else
{ 
printf("no");
}  
}  
