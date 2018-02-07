#include<stdio.h>
int main()
{
    int i,j,a[50],t;
    printf("enter the values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
   for(j=i+1;j<5;j++)
 {
  if(a[i]>a[j])
{
    t=a[i];
    a[i]=a[j];
    a[j]=t;
  }
  }
  }
        printf("%d",a[2]);
        return 0;
}
