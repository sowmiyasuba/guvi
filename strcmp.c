
    #include <stdio.h>

int main()
{
    
char a[25],b[25],i=0,c=0;
printf("enter two strings:");
gets(a);
gets(b);
while(a[i]!='\0'||b[i]!='\0')
{
   if(a[i]!=b[i])
    c++;
    i++;
    
}


if(c!=0&&a>b)

    printf("%s is great",a);
    else if(c!=0&&a<b)
    printf("%s is greater",b);

    
        else 
        
            printf("%s and %s is greater",a,b);
        

    
    return 0;
}








