#include <stdio.h>

int main()
{
    int n,t;
    int temp,flag=0;
    printf("Enter the num:");
    scanf("%d",&n);
    t=n;
    flag=0;
    while(t!=1)
    {
        if(t%2!=0)
        {
            flag=1;
            break;
        }
        t=t/2;
    }
    if(flag==0)
    {
        printf("Thr no is power of two");
    }
        else
        {
        printf("The no is not power of two");
    }
    

    return 0;
}



