#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,d,i;
    printf("Enter the string:");
    scanf("%s",a);
    printf("Enter the no:");
    scanf("%d",&n);
    d=strlen(a);
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}
