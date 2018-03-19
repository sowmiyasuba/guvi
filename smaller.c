#include<stdio.h>
int main()
{
    int i,n,small=0,a[90];

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=0;i<10;i++)
    {
        if(small<a[0])
        {
            a[i]=small;
            small=a[i];
        }
    }
    printf("The smallest no is:%d",small);
    return 0;
}
