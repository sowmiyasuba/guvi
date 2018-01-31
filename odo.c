#include<stdio.h>
void main()
{
char a[25];
int digit,counter;
printf("Enter string:");
gets(a);
for(counter=0;a[counter]!=null;counter++)
{
if(a[counter]>='0'&&a[counter]<='9')
{
    printf("It is digit");
    digit++;
}

printf("The no of numeric in string is %d",digit);
}
