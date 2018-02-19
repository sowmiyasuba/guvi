#include<stdio.h>
void main()
{
    int first=0,second=1,next,n,i;
    printf("Enter no of terms:");
    scanf("%d",&n);
    printf("%d fibonacci series is:",n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
    
        printf("%d\n",next);
    }
    
}
