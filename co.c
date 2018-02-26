#include<stdio.h>
int main()
{
    int num,n2;
    scanf("%d",&n2);
    
    num=n2+1;
    while(num!=0)
    {
        if(num%10==0)
        {
            printf("%d",num);
            break;
        }
        num++;
    }
  
}
