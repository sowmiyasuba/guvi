#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("%d is greaater",a);
}
 if(b>=c&&b>=a)
 {
 printf("%d is greater",b);
 }
 if(c>=a&&c>=b)
 {
printf("%d is greater",c);
}}
