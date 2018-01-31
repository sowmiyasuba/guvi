#include<stdio.h>
void main()
{
 char a[50] ;
 int i,count=0;
 printf("Enter the word");
 gets(a);
 for(i=0;a[i];i++)
 {
     if(a[i]==' ')
     count++;
     
 }
 printf("there are%d blank spaces",count);
}
