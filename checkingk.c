#include<stdio.h>
int main()
{
int n,k,i,a[100];
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(i==k)
    {
        printf("%d",i);
    }
}
return 0;
}
