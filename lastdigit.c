#include<stdio.h>
void main()
{
    int n,l,p,i;
    char a[100];
    scanf("%s",a);
    scanf("%d",&n);
    l=strlen(a);
    p=l-n;
    for(i=p;i<l;i++)
    {
        printf("%c",a[i]);
    }
}
