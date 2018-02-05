#include <stdio.h>

int main()
{
    int n,i;
    char name[25];
printf("Enter the name:");
    gets(name);
    printf("Enter no of times to be printed:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {

    
    printf("%s\n",name);
    
    }
    
    return 0;
}


