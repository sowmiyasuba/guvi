#include <stdio.h>

int main()
{
   int a,b,sub;
   scanf("%d %d",&a,&b);
   sub=a-b;
   if(sub%2==0)
   printf("even");
   else
   printf("odd");
    return 0;
}
