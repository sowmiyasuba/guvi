#include<stdio.h>
void main()
{
    char s[40];
    int l,n;
    printf("Enter string:");
    gets(s);
    l=strlen(s);
    n=l/2;
    if(l%2==0)
    {
        s[n-1]='*';
        s[n]='*';

    }
    else
    s[n]='*';
    printf("%s",s);
}
