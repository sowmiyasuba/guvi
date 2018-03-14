#include <stdio.h>
void  main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
      if(n%i==0)
      {
        count=1;
        break;
      }
    }
      if(count==0)
      {
        printf("No");
      }
      else
      printf("Yes");
    }
    
    
