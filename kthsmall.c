#include<stdio.h>
int main()
{
int n,k,i,a[100],temp=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]>a[i+1])
    {
        a[i]=temp;
        a[i]=a[i+1];
        a[i+1]=temp;                                                      
    }  
}
    printf("%d",a[k-1]);

return 0;
}
