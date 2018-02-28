#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,count=0;
    printf("Enter string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')||(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'))
        count=1;
       
    }
    if(count==1)
    printf("yes");
    else
    printf("no");
    
}
