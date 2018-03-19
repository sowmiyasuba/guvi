#include<stdio.h>
int main()
{
int i,k,sum=0,a[20];
printf("enter the limit:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
    sum=sum+a[i];
}
printf("%d",sum);
return 0;
}
