#include <stdio.h>

int main()
{
    int n,temp,product=1;
    printf("Enter the num:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
   product=product*(n%10);
        n/=10;
    }
    printf("The sum of %d id %d\n",temp,product);
    if(product%2==0)
    printf("The product is even");
    else
    printf("The product is odd");


    return 0;
}
