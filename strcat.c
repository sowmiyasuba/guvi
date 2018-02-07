#include <stdio.h>

int main()
{
    char a[50],b[50],i,j;
    printf("Enter two string:");
    scanf("%s%s",&a,&b);
    
   while(a[i]!='\0')
   {
       i++;
   }
   while(b[j]!='\0')
   {
       a[i]=b[j];
       i++;
       j++;
       
   }
   printf("output is:%s\t",a);

    return 0;
}



