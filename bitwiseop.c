#include<stdio.h>
void main()
{
   int a,b;
   printf("Enter two no:");
   scanf("%d %d",&a,&b);
   printf("Two no before swapping;%d %d ",a,b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("Two no after swapping:%d %d",a,b);
    
}
