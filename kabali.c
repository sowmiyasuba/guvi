#include <stdio.h>

int main()
{
 
 int a,b,i,t;
 for(i=0;i<3;i++)
 {
 scanf("%d %d",&a,&b);
  if(a>b)
   printf("%d",a-b);
   else
   printf("%d",b-a);
 }
  return 0;
}
