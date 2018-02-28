#include<stdio.h>
void main()
{
    int n,i,a,x,e;
    printf("Enter no:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=pow(2,i);
        if(a>n)
        {
            x=i;
            break;
        }
    }
        e=pow(2,x);
        printf("%d",e);
}
