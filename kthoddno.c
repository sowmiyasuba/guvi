#include<stdio.h>
int main()
{
int n,k,i,a[100],count=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]%2!=0)
    {
        count++;
    }
    if(count==k)
    {
        printf("%d",a[i]);
        break;
    }
}
return 0;
}
