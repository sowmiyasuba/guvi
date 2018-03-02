#include<stdio.h>
void main()
{
    float a;
    int d;
    scanf("%f",&a);
    if(a<0)
    d=(int)(a-0.5);
    else
    d=(int)(a+0.5);
    printf("%d",d);
}
