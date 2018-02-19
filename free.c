#include<stdio.h>
void main()
{
    char b[59];
    int length,i,wor=1;
    printf("Enter string:");
    gets(b);
    length=strlen(b);
    for(i=0;i<=length;i++)
    {
        if(b[i]!=' '&&b[i+1]==' ')
        wor=wor+1;
    }
    printf("There are %d  word",wor);
    
}
