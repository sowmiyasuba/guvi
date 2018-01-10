#include<stdio.h>

#include<conio.h>
void main()
{
int year;
printf("Enter the year:")
scanf("%d",&year);
if(year%4)
{
printf("the year is leapyear",year);
else
{
printf("The year is not leapyear",year);
}
}
