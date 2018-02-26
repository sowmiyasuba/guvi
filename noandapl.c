#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int alp=0,num=0,i,n;
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z'))
        {
            alp=1;
        }
        if(a[i]>='0'&&a[i]<='9')
        {
            num=1;
        }
    }
        if(alp==1 && num==1)
        {
            printf("yes");
        }
        else
        printf("no");
    
}
