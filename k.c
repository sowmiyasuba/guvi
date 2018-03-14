#include <stdio.h>

void main()
{
    int n,a[10],i,p,sum=0;
    scanf("%d %d",&n,&p);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      if(a[i]==p)
      {
        sum=a[i];
      }
    }
    printf("%d",sum);
    }
    
