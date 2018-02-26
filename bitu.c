#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two no:");
    scanf("%d %d",&a,&b);
    printf("Before swapping two no are: %d and  %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping two no are:%d and %d\n",a,b);
}
