#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,n,count=1;
    printf("Enter paragraph:\n");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='.'&&a[i+1]!='\0')
        {
            count++;
        }
    }
        printf("No of line in para is:%d",count);
    }
