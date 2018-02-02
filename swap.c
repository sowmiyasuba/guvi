#include <stdio.h>

int main()
{
int a,b;
printf("Enter two values:");
scanf("%d %d",&a,&b);
printf("The no before swapping is %d and %d",a,b);
a^=b;
b^=a;
a^=b;
printf("The no after swapping is %d and %d",a,b);


    return 0;
}



