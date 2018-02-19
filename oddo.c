#include<stdio.h>
void main()
{
    int n,m,a;
    printf("Enter two no:");
    scanf("%d %d",&n,&m);
    a=n+m;
    if(a%2==0)
    printf("it is even");
    else
    printf("it is odd");
}
