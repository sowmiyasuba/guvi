#include <stdio.h>
 
int main()
{
 
        int a[50],i,large;
 
       printf(" enter 10 elements: ");
 
       for(i=0;i<10;i++)
       scanf("%d",&a[i]);
       large=a[0];
 
        for(i=0;i<10;i++)
        {
            if(large<a[i])
            large=a[i];
        }
        printf("Max element is : %d", large);
 
        return 0;
}
 
