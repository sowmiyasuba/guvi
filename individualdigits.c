#include <stdio.h>

int main()
{
    int num,dig1,dig2,dig3;

    printf("Enter the num:");
    scanf("%d",&num);
    dig3=num%10;
    num=num/10;
    dig2=num%10;
    num=num/10;
    dig1=num%10;
    num=num/10;
    printf("%d %d %d",dig1,dig2,dig3);
    

    return 0;
}
