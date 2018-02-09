#include <stdio.h>

int main()
{
    int n,temp,sum,digit;
    printf("Enter the num:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n/=10;
    }
    printf("The sum of %d id %d",temp,sum);


    return 0;
}
