#include<stdio.h>
void main()
{
    int n,m,product,p,i,count=0;
    printf("Enter no:");
    scanf("%d %d",&n,&m);
    product=n*m;
    for(i=0;i<=product/2;i++)
    {
        p=i*i;
        if(product==p)
        {
            printf("yes");
            count=1;
            break;
        }
    }
        if(count==0)
        {
            printf("No");
    
        }
    
}
