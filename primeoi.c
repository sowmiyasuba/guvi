#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter the no:");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            count++;
    }
        if(count==0)
        {
            printf("%d is prime",n);
        }
        else
        printf("%d is not prime",n);
    }
