#include<stdio.h>
void main()
{
    int n,pro=1;
    scanf("%d",&n);
    while(n!=0)
    {
        pro=pro*(n%10);
        n/=10;
    }
    printf("%d",pro);
}
