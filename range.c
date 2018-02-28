#include<stdio.h>
void main()
{
    int n,a,b;
    printf("Enter no:");
    scanf("%d",&n);
    printf("Enter the range :");
    scanf("%d %d",&a,&b);
    if(n>a&&n<b)
    printf("yes");
    else
    printf("No");
    
}
