#include <stdio.h>

int main()
{
    int n,num=0;
    printf("Enter the num:");
    scanf("%d",&n);
    
    if(n%2==0)
    {
    printf("%d",n);
    }
    else
    
    {
    num=n-1;
    printf("%d",num);
    }


    return 0;
}



