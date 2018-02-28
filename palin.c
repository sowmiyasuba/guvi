#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,n,count=0;
    printf("Enter string:");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i-1-n])
        {
            count++;
        }
    }
    if(count==0)
    
        printf("It is palindrome");
        else
        printf("It is not palindrome");
    }
