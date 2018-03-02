#include<stdio.h>
int main()
{
    int i,n,fact;
    printf("Enter the no:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
         if(n%i==0) 
         {
             fact=i;
         }
    }
    if(fact>1) 
    {
          printf ("yes");
    }
    else 
    {
          printf ("no");
    }
    return 0;
}
