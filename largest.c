#include <stdio.h>

int main()
{
int a[50],n,i,large;
printf("Enter the no of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    
}
large=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>large)
    large=a[i];
}
printf("The largest element is %d",large);
  return 0;
}



